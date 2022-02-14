
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_4__ {scalar_t__ device; int ref; } ;
typedef scalar_t__ LPDIRECTSOUND8 ;
typedef TYPE_1__ IDirectSoundImpl ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,TYPE_1__*,...) ;

__attribute__((used)) static ULONG FUNC_5(
    LPDIRECTSOUND8 VAR_0)
{
    IDirectSoundImpl *VAR_1 = (IDirectSoundImpl *)VAR_0;
    ULONG VAR_2 = FUNC_3(&(VAR_1->ref));
    FUNC_4("(%p) ref was %d\n", VAR_1, VAR_2 + 1);

    if (!VAR_2) {
        if (VAR_1->device)
            FUNC_0(VAR_1->device);
        FUNC_2(FUNC_1(),0,VAR_1);
        FUNC_4("(%p) released\n", VAR_1);
    }
    return VAR_2;
}
