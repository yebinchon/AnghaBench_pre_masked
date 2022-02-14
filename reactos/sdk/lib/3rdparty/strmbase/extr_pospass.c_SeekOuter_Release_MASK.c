
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int IUnknown_inner; int * outer_unk; scalar_t__ bUnkOuterValid; } ;
typedef TYPE_1__ PassThruImpl ;


 int FUNC_0 (int *) ;

__attribute__((used)) static ULONG FUNC_1(PassThruImpl *VAR_0)
{
    if (VAR_0->outer_unk && VAR_0->bUnkOuterValid)
        return FUNC_0(VAR_0->outer_unk);
    return FUNC_0(&VAR_0->IUnknown_inner);
}
