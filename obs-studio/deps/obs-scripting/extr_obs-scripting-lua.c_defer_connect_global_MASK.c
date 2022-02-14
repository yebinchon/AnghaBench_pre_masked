
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_callback {int extra; } ;
typedef int signal_handler_t ;


 int * FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,struct script_callback*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct script_callback *VAR_2 = VAR_1;

 signal_handler_t *VAR_3 = FUNC_0(&VAR_2->extra, "handler");
 FUNC_1(VAR_3, VAR_0,
          VAR_2);
}
