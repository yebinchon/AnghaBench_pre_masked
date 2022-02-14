
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * device; scalar_t__ ref; int * lpVtbl; } ;
typedef int * LPDIRECTSOUNDCAPTURE8 ;
typedef TYPE_1__ IDirectSoundCaptureImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int **) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_4(
    LPDIRECTSOUNDCAPTURE8 * VAR_4)
{
    IDirectSoundCaptureImpl *VAR_5;
    FUNC_2("(%p)\n", VAR_4);


    VAR_5 = FUNC_1(FUNC_0(),VAR_2,sizeof(IDirectSoundCaptureImpl));
    if (VAR_5 == ((void*)0)) {
        FUNC_3("out of memory\n");
        *VAR_4 = ((void*)0);
        return VAR_0;
    }

    VAR_5->lpVtbl = &VAR_3;
    VAR_5->ref = 0;
    VAR_5->device = ((void*)0);

    *VAR_4 = (LPDIRECTSOUNDCAPTURE8)VAR_5;

    return VAR_1;
}
