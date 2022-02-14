
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_attr {int type; char* name; char* description; struct switch_attr* next; } ;






 int FUNC_0 (char*,int,char const*,char*,char*) ;

__attribute__((used)) static void
FUNC_1(const struct switch_attr *VAR_0)
{
 int VAR_1 = 0;
 while (VAR_0) {
  const char *VAR_2;
  switch(VAR_0->type) {
   case 131:
    VAR_2 = "int";
    break;
   case 128:
    VAR_2 = "string";
    break;
   case 129:
    VAR_2 = "ports";
    break;
   case 130:
    VAR_2 = "none";
    break;
   default:
    VAR_2 = "unknown";
    break;
  }
  FUNC_0("\tAttribute %d (%s): %s (%s)\n", ++VAR_1, VAR_2, VAR_0->name, VAR_0->description);
  VAR_0 = VAR_0->next;
 }
}
