
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console_cmdline {int index; char* options; scalar_t__* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct console_cmdline*,char*) ;
 struct console_cmdline* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__*,char*) ;
 int FUNC_2 (scalar_t__*,char*,int) ;

__attribute__((used)) static int FUNC_3(char *VAR_4, int VAR_5, char *VAR_6,
       char *VAR_7)
{
 struct console_cmdline *VAR_8;
 int VAR_9;





 for (VAR_9 = 0, VAR_8 = VAR_2;
      VAR_9 < VAR_1 && VAR_8->name[0];
      VAR_9++, VAR_8++) {
  if (FUNC_1(VAR_8->name, VAR_4) == 0 && VAR_8->index == VAR_5) {
   if (!VAR_7)
    VAR_3 = VAR_9;
   return 0;
  }
 }
 if (VAR_9 == VAR_1)
  return -VAR_0;
 if (!VAR_7)
  VAR_3 = VAR_9;
 FUNC_2(VAR_8->name, VAR_4, sizeof(VAR_8->name));
 VAR_8->options = VAR_6;
 FUNC_0(VAR_8, VAR_7);

 VAR_8->index = VAR_5;
 return 0;
}
