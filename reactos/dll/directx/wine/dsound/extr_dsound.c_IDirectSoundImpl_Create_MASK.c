
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * device; scalar_t__ ref; } ;
typedef int * LPDIRECTSOUND8 ;
typedef TYPE_1__ IDirectSoundImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int **) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static HRESULT FUNC_4(
    LPDIRECTSOUND8 * VAR_3)
{
    IDirectSoundImpl* VAR_4;
    FUNC_2("(%p)\n",VAR_3);


    VAR_4 = FUNC_1(FUNC_0(),VAR_2,sizeof(IDirectSoundImpl));
    if (VAR_4 == ((void*)0)) {
        FUNC_3("out of memory\n");
        *VAR_3 = ((void*)0);
        return VAR_0;
    }

    VAR_4->ref = 0;
    VAR_4->device = ((void*)0);

    *VAR_3 = (LPDIRECTSOUND8)VAR_4;

    return VAR_1;
}
