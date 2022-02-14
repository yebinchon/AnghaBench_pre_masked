
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {int ref; } ;
typedef scalar_t__ LPDIRECTSOUND8 ;
typedef TYPE_1__ IDirectSoundImpl ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static ULONG FUNC_2(
    LPDIRECTSOUND8 VAR_0)
{
    IDirectSoundImpl *VAR_1 = (IDirectSoundImpl *)VAR_0;
    ULONG VAR_2 = FUNC_0(&(VAR_1->ref));
    FUNC_1("(%p) ref was %d\n", VAR_1, VAR_2 - 1);
    return VAR_2;
}
