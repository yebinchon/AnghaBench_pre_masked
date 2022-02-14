
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int parser_ctx_t ;
struct TYPE_5__ {int bval; } ;
struct TYPE_6__ {TYPE_1__ u; int type; } ;
typedef TYPE_2__ literal_t ;
typedef int BOOL ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int) ;

literal_t *FUNC_1(parser_ctx_t *VAR_1, BOOL VAR_2)
{
    literal_t *VAR_3 = FUNC_0(VAR_1, sizeof(literal_t));

    VAR_3->type = VAR_0;
    VAR_3->u.bval = VAR_2;

    return VAR_3;
}
