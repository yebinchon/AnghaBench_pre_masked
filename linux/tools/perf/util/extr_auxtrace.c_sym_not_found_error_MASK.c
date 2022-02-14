
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, int VAR_2)
{
 if (VAR_2 > 0) {
  FUNC_0("N'th occurrence (N=%d) of symbol '%s' not found.\n",
         VAR_2, VAR_1);
 } else if (!VAR_2) {
  FUNC_0("Global symbol '%s' not found.\n", VAR_1);
 } else {
  FUNC_0("Symbol '%s' not found.\n", VAR_1);
 }
 FUNC_0("Note that symbols must be functions.\n");

 return -VAR_0;
}
