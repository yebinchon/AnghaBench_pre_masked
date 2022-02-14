
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*,char*) ;

__attribute__((used)) static void FUNC_1(struct buffer *VAR_0)
{
 FUNC_0(VAR_0, "\n#ifdef CONFIG_RETPOLINE\n");
 FUNC_0(VAR_0, "MODULE_INFO(retpoline, \"Y\");\n");
 FUNC_0(VAR_0, "#endif\n");
}
