
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* val; } ;
struct TYPE_5__ {unsigned int var_cnt; TYPE_2__* is_null; TYPE_2__* buf; TYPE_2__* vars; } ;
typedef TYPE_1__ BIND_BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(BIND_BUFFER VAR_2, int VAR_3)
{
 unsigned int VAR_4;

 if (!VAR_2.var_cnt) {
  return;
 }

 for (VAR_4=0; VAR_4 < VAR_2.var_cnt; VAR_4++) {


  if (VAR_3 == VAR_0 && VAR_2.buf[VAR_4].val) {
   FUNC_0(VAR_2.buf[VAR_4].val);
  }

  FUNC_1(&VAR_2.vars[VAR_4]);
 }

 if (VAR_2.vars) {
  FUNC_0(VAR_2.vars);
 }







 if (VAR_3 == VAR_0) {
  FUNC_0(VAR_2.buf);
 } else if (VAR_3 == VAR_1){
  FUNC_0(VAR_2.is_null);
 }

 VAR_2.var_cnt = 0;
}
