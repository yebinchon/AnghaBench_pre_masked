
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int8_t ;
struct nf_logger {size_t type; } ;
struct TYPE_3__ {int nf_loggers; } ;
struct TYPE_4__ {TYPE_1__ nf; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_2__ VAR_4 ;
 int ** VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,struct nf_logger*) ;

int FUNC_5(u_int8_t VAR_7, struct nf_logger *VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;

 if (VAR_7 >= FUNC_0(VAR_4.nf.nf_loggers))
  return -VAR_1;

 FUNC_1(&VAR_6);

 if (VAR_7 == VAR_3) {
  for (VAR_9 = VAR_3; VAR_9 < VAR_2; VAR_9++) {
   if (FUNC_3(VAR_5[VAR_9][VAR_8->type])) {
    VAR_10 = -VAR_0;
    goto unlock;
   }
  }
  for (VAR_9 = VAR_3; VAR_9 < VAR_2; VAR_9++)
   FUNC_4(VAR_5[VAR_9][VAR_8->type], VAR_8);
 } else {
  if (FUNC_3(VAR_5[VAR_7][VAR_8->type])) {
   VAR_10 = -VAR_0;
   goto unlock;
  }
  FUNC_4(VAR_5[VAR_7][VAR_8->type], VAR_8);
 }

unlock:
 FUNC_2(&VAR_6);
 return VAR_10;
}
