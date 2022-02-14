
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_4__ {int byName; } ;
struct TYPE_5__ {int type; TYPE_1__ value; } ;
typedef TYPE_2__ OCSP_RESPID ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(OCSP_RESPID *VAR_1, X509 *VAR_2)
{
    if (!FUNC_0(&VAR_1->value.byName, FUNC_1(VAR_2)))
        return 0;

    VAR_1->type = VAR_0;

    return 1;
}
