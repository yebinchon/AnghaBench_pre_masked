
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
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_2,
    stateid4 *VAR_3)
{
    if (!FUNC_1(VAR_2, &VAR_3->seqid))
        return VAR_0;

    return FUNC_0(VAR_2, (char *)VAR_3->other, VAR_1);
}
