
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t line_position; char* line; int done; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,char const*,size_t) ;

int FUNC_2(const char *VAR_2, size_t VAR_3) {
  if (VAR_2 == ((void*)0) || ++VAR_3 > VAR_0 || VAR_1.line_position > 0)
    return 0;
  FUNC_1(VAR_1.line, VAR_2, VAR_3);
  VAR_1.line[VAR_3] = '\0';
  VAR_1.line_position = VAR_3;
  VAR_1.done = 1;
  FUNC_0("Get command: %s\n", VAR_1.line);
  return 1;
}
