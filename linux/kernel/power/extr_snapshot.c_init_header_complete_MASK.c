
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swsusp_info {int version_code; int uts; } ;
struct new_utsname {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(struct swsusp_info *VAR_1)
{
 FUNC_1(&VAR_1->uts, FUNC_0(), sizeof(struct new_utsname));
 VAR_1->version_code = VAR_0;
 return 0;
}
