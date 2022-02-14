
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_handler {char* command; } ;


 struct cmd_handler* FUNC_0 (struct cmd_handler*,struct cmd_handler*,size_t,int,int ) ;
 int VAR_0 ;

struct cmd_handler *FUNC_1(char *VAR_1, struct cmd_handler *VAR_2,
  size_t VAR_3) {
 if (!VAR_2 || !VAR_3) {
  return ((void*)0);
 }
 struct cmd_handler VAR_4 = { .command = VAR_1 };
 return FUNC_0(&VAR_4, VAR_2,
   VAR_3 / sizeof(struct cmd_handler),
   sizeof(struct cmd_handler), VAR_0);
}
