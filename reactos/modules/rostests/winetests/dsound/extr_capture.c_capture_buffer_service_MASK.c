
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; int size; int buffer_size; int dscbo; } ;
typedef TYPE_1__ capture_state_t ;
typedef int LPVOID ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int,int,int *,int *,int *,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(capture_state_t* VAR_1)
{
    HRESULT VAR_2;
    LPVOID VAR_3,VAR_4;
    DWORD VAR_5,VAR_6;
    DWORD VAR_7,VAR_8;

    VAR_2=FUNC_0(VAR_1->dscbo,&VAR_7,
                                                    &VAR_8);
    FUNC_3(VAR_2==VAR_0,"IDirectSoundCaptureBuffer_GetCurrentPosition() failed: %08x\n", VAR_2);
    if (VAR_2!=VAR_0)
 return 0;

    VAR_2=FUNC_1(VAR_1->dscbo,VAR_1->offset,VAR_1->size,
                                      &VAR_3,&VAR_5,&VAR_4,&VAR_6,0);
    FUNC_3(VAR_2==VAR_0,"IDirectSoundCaptureBuffer_Lock() failed: %08x\n", VAR_2);
    if (VAR_2!=VAR_0)
 return 0;

    VAR_2=FUNC_2(VAR_1->dscbo,VAR_3,VAR_5,VAR_4,VAR_6);
    FUNC_3(VAR_2==VAR_0,"IDirectSoundCaptureBuffer_Unlock() failed: %08x\n", VAR_2);
    if (VAR_2!=VAR_0)
 return 0;

    VAR_1->offset = (VAR_1->offset + VAR_1->size) % VAR_1->buffer_size;

    return 1;
}
