
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {scalar_t__* srcversion; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct buffer *VAR_0, struct module *VAR_1)
{
 if (VAR_1->srcversion[0]) {
  FUNC_0(VAR_0, "\n");
  FUNC_0(VAR_0, "MODULE_INFO(srcversion, \"%s\");\n",
      VAR_1->srcversion);
 }
}
