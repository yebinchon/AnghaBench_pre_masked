
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int played; int buffer_size; int wave_len; int offset; int written; int dsbo; } ;
typedef TYPE_1__ play_state_t ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int*,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(play_state_t* VAR_2)
{
    DWORD VAR_3,VAR_4,VAR_5;
    HRESULT VAR_6;

    VAR_6=FUNC_0(VAR_2->dsbo,&VAR_4,((void*)0));
    FUNC_4(VAR_6==VAR_0,"IDirectSoundBuffer_GetCurrentPosition() failed: %08x\n", VAR_6);
    if (VAR_6!=VAR_0) {
        goto STOP;
    }


    VAR_3=VAR_2->played % VAR_2->buffer_size;
    if (VAR_4<VAR_3)
        VAR_2->played+=VAR_2->buffer_size-VAR_3+VAR_4;
    else
        VAR_2->played+=VAR_4-VAR_3;

    if (VAR_1 > 1)
        FUNC_5("buf size=%d last_play_pos=%d play_pos=%d played=%d / %d\n",
              VAR_2->buffer_size,VAR_3,VAR_4,VAR_2->played,
              VAR_2->wave_len);

    if (VAR_2->played>VAR_2->wave_len)
    {

        goto STOP;
    }


    if (VAR_2->offset<=VAR_4)
        VAR_5=VAR_4-VAR_2->offset;
    else
        VAR_5=VAR_2->buffer_size-VAR_2->offset+VAR_4;

    if (VAR_1 > 1)
        FUNC_5("offset=%d free=%d written=%d / %d\n",
              VAR_2->offset,VAR_5,VAR_2->written,VAR_2->wave_len);
    if (VAR_5==0)
        return 1;

    if (VAR_2->written<VAR_2->wave_len)
    {
        int VAR_7=FUNC_2(VAR_2,VAR_5);
        if (VAR_7==-1)
            goto STOP;
        VAR_5-=VAR_7;
        if (VAR_2->written==VAR_2->wave_len && VAR_1 > 1)
            FUNC_5("last sound byte at %d\n",
                  (VAR_2->written % VAR_2->buffer_size));
    }

    if (VAR_5>0) {

        if (VAR_1 > 1)
            FUNC_5("writing %d bytes of silence\n",VAR_5);
        if (FUNC_3(VAR_2,VAR_5)==-1)
            goto STOP;
    }
    return 1;

STOP:
    if (VAR_1 > 1)
        FUNC_5("stopping playback\n");
    VAR_6=FUNC_1(VAR_2->dsbo);
    FUNC_4(VAR_6==VAR_0,"IDirectSoundBuffer_Stop() failed: %08x\n", VAR_6);
    return 0;
}
