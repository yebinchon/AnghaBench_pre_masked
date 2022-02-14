
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wave_len; scalar_t__ written; int offset; scalar_t__ wave; int buffer_size; int dsbo; } ;
typedef TYPE_1__ play_state_t ;
typedef int * LPVOID ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,scalar_t__,int **,scalar_t__*,int **,scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (int ,int *,scalar_t__,int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;
 int FUNC_3 (int,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_4(play_state_t* VAR_2, DWORD VAR_3)
{
    LPVOID VAR_4,VAR_5;
    DWORD VAR_6,VAR_7;
    HRESULT VAR_8;

    if (VAR_3>VAR_2->wave_len-VAR_2->written)
        VAR_3=VAR_2->wave_len-VAR_2->written;


    VAR_8=FUNC_0(VAR_2->dsbo,VAR_2->offset,VAR_3,
                               &VAR_4,((void*)0),&VAR_5,&VAR_7,0);
    FUNC_3(VAR_8==VAR_0,"expected %08x got %08x\n",VAR_0, VAR_8);
    VAR_8=FUNC_0(VAR_2->dsbo,VAR_2->offset,VAR_3,
                               &VAR_4,&VAR_6,&VAR_5,&VAR_7,0);
    FUNC_3(VAR_8==VAR_1,"IDirectSoundBuffer_Lock() failed: %08x\n", VAR_8);
    if (VAR_8!=VAR_1)
        return -1;

    FUNC_2(VAR_4,VAR_2->wave+VAR_2->written,VAR_6);
    VAR_2->written+=VAR_6;
    if (VAR_5!=((void*)0)) {
        FUNC_2(VAR_5,VAR_2->wave+VAR_2->written,VAR_7);
        VAR_2->written+=VAR_7;
    }
    VAR_2->offset=VAR_2->written % VAR_2->buffer_size;

    VAR_8=FUNC_1(VAR_2->dsbo,VAR_4,VAR_6,VAR_5,VAR_7);
    FUNC_3(VAR_8==VAR_0, "IDDirectSoundBuffer_Unlock(): expected %08x got %08x, %p %p\n",VAR_0, VAR_8, &VAR_4, VAR_4);
    VAR_8=FUNC_1(VAR_2->dsbo,VAR_4,VAR_6,VAR_5,VAR_7);
    FUNC_3(VAR_8==VAR_1,"IDirectSoundBuffer_Unlock() failed: %08x\n", VAR_8);
    if (VAR_8!=VAR_1)
        return -1;
    return VAR_3;
}
