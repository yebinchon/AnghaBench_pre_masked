
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _ddebug {int flags; char* modname; char* function; int lineno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int ,char*,...) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static char *FUNC_4(const struct _ddebug *VAR_6, char *VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;

 *VAR_7 = '\0';

 if (VAR_6->flags & VAR_4) {
  if (FUNC_0())
   VAR_9 += FUNC_2(VAR_7 + VAR_9, FUNC_1(VAR_9), "<intr> ");
  else
   VAR_9 += FUNC_2(VAR_7 + VAR_9, FUNC_1(VAR_9), "[%d] ",
     FUNC_3(VAR_5));
 }
 VAR_8 = VAR_9;
 if (VAR_6->flags & VAR_3)
  VAR_9 += FUNC_2(VAR_7 + VAR_9, FUNC_1(VAR_9), "%s:",
    VAR_6->modname);
 if (VAR_6->flags & VAR_1)
  VAR_9 += FUNC_2(VAR_7 + VAR_9, FUNC_1(VAR_9), "%s:",
    VAR_6->function);
 if (VAR_6->flags & VAR_2)
  VAR_9 += FUNC_2(VAR_7 + VAR_9, FUNC_1(VAR_9), "%d:",
    VAR_6->lineno);
 if (VAR_9 - VAR_8)
  VAR_9 += FUNC_2(VAR_7 + VAR_9, FUNC_1(VAR_9), " ");
 if (VAR_9 >= VAR_0)
  VAR_7[VAR_0 - 1] = '\0';

 return VAR_7;
}
