
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* f ) (char) ;} ;
struct TYPE_9__ {TYPE_1__ satisfy; } ;
struct TYPE_10__ {TYPE_2__ data; int type; } ;
typedef TYPE_3__ mpc_parser_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,char*,int (*) (char)) ;
 TYPE_3__* FUNC_1 () ;

mpc_parser_t *FUNC_2(int(*VAR_1)(char)) {
  mpc_parser_t *VAR_2 = FUNC_1();
  VAR_2->type = VAR_0;
  VAR_2->data.satisfy.f = VAR_1;
  return FUNC_0(VAR_2, "character satisfying function %p", VAR_1);
}
