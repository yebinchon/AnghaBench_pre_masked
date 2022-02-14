
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_handler {int dummy; } ;
struct TYPE_2__ {scalar_t__ active; scalar_t__ reading; } ;


 TYPE_1__* VAR_0 ;
 struct cmd_handler* FUNC_0 (char*,struct cmd_handler*,size_t) ;

__attribute__((used)) static struct cmd_handler *FUNC_1(char *VAR_1,
  struct cmd_handler *VAR_2, size_t VAR_3,
  struct cmd_handler *VAR_4, size_t VAR_5,
  struct cmd_handler *VAR_6, size_t VAR_7) {
 struct cmd_handler *VAR_8 = ((void*)0);
 if (VAR_0->reading) {
  VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3);
 } else if (VAR_0->active) {
  VAR_8 = FUNC_0(VAR_1, VAR_4, VAR_5);
 }
 return VAR_8 ? VAR_8 : FUNC_0(VAR_1, VAR_6, VAR_7);
}
