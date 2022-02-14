
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; int line; } ;
struct disasm_line {TYPE_1__ al; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,...) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, size_t VAR_1, struct disasm_line *VAR_2)
{
 int VAR_3 = 0;
 char *VAR_4 = FUNC_1(VAR_2->al.line, -1);
 const char *VAR_5 = "<span fgcolor='gray'>";

 FUNC_3(VAR_0, "");

 if (!VAR_4)
  return 0;

 if (VAR_2->al.offset != (s64) -1)
  VAR_5 = ((void*)0);

 if (VAR_5)
  VAR_3 += FUNC_2(VAR_0, VAR_1, "%s", VAR_5);
 VAR_3 += FUNC_2(VAR_0 + VAR_3, VAR_1 - VAR_3, "%s", VAR_4);
 if (VAR_5)
  VAR_3 += FUNC_2(VAR_0 + VAR_3, VAR_1 - VAR_3, "</span>");

 FUNC_0(VAR_4);
 return VAR_3;
}
