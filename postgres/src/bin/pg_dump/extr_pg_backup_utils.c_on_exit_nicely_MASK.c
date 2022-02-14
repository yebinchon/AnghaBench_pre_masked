
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int on_exit_nicely_callback ;
struct TYPE_2__ {void* arg; int function; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*) ;

void
FUNC_2(on_exit_nicely_callback VAR_3, void *VAR_4)
{
 if (VAR_1 >= VAR_0)
 {
  FUNC_1("out of on_exit_nicely slots");
  FUNC_0(1);
 }
 VAR_2[VAR_1].function = VAR_3;
 VAR_2[VAR_1].arg = VAR_4;
 VAR_1++;
}
