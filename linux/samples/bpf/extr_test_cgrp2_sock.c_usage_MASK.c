
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1)
{
 FUNC_0("Usage:\n");
 FUNC_0("  Attach a program\n");
 FUNC_0("  %s -b bind-to-dev -m mark -p prio cg-path\n", VAR_1);
 FUNC_0("\n");
 FUNC_0("  Detach a program\n");
 FUNC_0("  %s -d cg-path\n", VAR_1);
 FUNC_0("\n");
 FUNC_0("  Show inherited socket settings (mark, priority, and device)\n");
 FUNC_0("  %s [-6]\n", VAR_1);
 return VAR_0;
}
