
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ other; int seqid; } ;
typedef TYPE_1__ stateid4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_2(XDR *VAR_1, stateid4 *VAR_2)
{
    return FUNC_1(VAR_1, &VAR_2->seqid)
        && FUNC_0(VAR_1, (char*)VAR_2->other, VAR_0);
}
