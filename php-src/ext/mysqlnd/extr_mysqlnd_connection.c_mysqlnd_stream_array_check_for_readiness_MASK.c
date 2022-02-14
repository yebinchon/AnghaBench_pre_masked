
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum mysqlnd_connection_state { ____Placeholder_mysqlnd_connection_state } mysqlnd_connection_state ;
struct TYPE_7__ {TYPE_1__* data; } ;
struct TYPE_6__ {int state; } ;
typedef TYPE_2__ MYSQLND ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_2__** FUNC_1 (unsigned int,int) ;

MYSQLND **
FUNC_2(MYSQLND ** VAR_2)
{
 unsigned int VAR_3 = 0;
 MYSQLND **VAR_4 = VAR_2, **VAR_5;
 MYSQLND **VAR_6 = ((void*)0);

 while (*VAR_4) {
  const enum mysqlnd_connection_state VAR_7 = FUNC_0(&((*VAR_4)->data->state));
  if (VAR_7 <= VAR_1 || VAR_7 == VAR_0) {
   VAR_3++;
  }
  VAR_4++;
 }
 if (VAR_3) {
  MYSQLND **VAR_8 = VAR_6 = FUNC_1(VAR_3 + 1, sizeof(MYSQLND *));
  VAR_5 = VAR_4 = VAR_2;
  while (*VAR_4) {
   const enum mysqlnd_connection_state VAR_9 = FUNC_0(&((*VAR_4)->data->state));
   if (VAR_9 <= VAR_1 || VAR_9 == VAR_0) {
    *VAR_8 = *VAR_4;
    *VAR_4 = ((void*)0);
    VAR_8++;
   } else {
    *VAR_5 = *VAR_4;
    VAR_5++;
   }
   VAR_4++;
  }
  *VAR_8 = ((void*)0);
 }
 return VAR_6;
}
