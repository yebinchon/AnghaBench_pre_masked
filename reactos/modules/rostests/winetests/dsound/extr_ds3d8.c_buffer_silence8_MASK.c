
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int offset; int buffer_size; int dsbo; TYPE_1__* wfx; } ;
typedef TYPE_2__ play_state_t ;
struct TYPE_4__ {int wBitsPerSample; } ;
typedef int * LPVOID ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int,int **,int*,int **,int*,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(play_state_t* VAR_1, DWORD VAR_2)
{
    LPVOID VAR_3,VAR_4;
    DWORD VAR_5,VAR_6;
    HRESULT VAR_7;
    BYTE VAR_8;

    VAR_7=FUNC_0(VAR_1->dsbo,VAR_1->offset,VAR_2,
                               &VAR_3,&VAR_5,&VAR_4,&VAR_6,0);
    FUNC_3(VAR_7==VAR_0,"IDirectSoundBuffer_Lock() failed: %08x\n", VAR_7);
    if (VAR_7!=VAR_0)
        return -1;

    VAR_8=(VAR_1->wfx->wBitsPerSample==8?0x80:0);
    FUNC_2(VAR_3,VAR_8,VAR_5);
    if (VAR_4!=((void*)0)) {
        FUNC_2(VAR_4,VAR_8,VAR_6);
    }
    VAR_1->offset=(VAR_1->offset+VAR_2) % VAR_1->buffer_size;
    VAR_7=FUNC_1(VAR_1->dsbo,VAR_3,VAR_5,VAR_4,VAR_6);
    FUNC_3(VAR_7==VAR_0,"IDirectSoundBuffer_Unlock() failed: %08x\n", VAR_7);
    if (VAR_7!=VAR_0)
        return -1;
    return VAR_2;
}
