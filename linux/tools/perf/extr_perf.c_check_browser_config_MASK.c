
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pager_config {char const* cmd; int val; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct pager_config*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1)
{
 int VAR_2;
 struct pager_config VAR_3;
 VAR_3.cmd = VAR_1;
 VAR_3.val = -1;
 VAR_2 = FUNC_0(VAR_0, &VAR_3);
 return VAR_2 ?: VAR_3.val;
}
