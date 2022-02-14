
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; scalar_t__ fh; } ;
typedef TYPE_1__ nfs41_fh ;
typedef int bool_t ;
typedef int XDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;

__attribute__((used)) static bool_t FUNC_2(XDR *VAR_1, nfs41_fh *VAR_2)
{
    return FUNC_1(VAR_1, &VAR_2->len)
        && VAR_2->len <= VAR_0
        && FUNC_0(VAR_1, (char*)VAR_2->fh, VAR_2->len);
}
