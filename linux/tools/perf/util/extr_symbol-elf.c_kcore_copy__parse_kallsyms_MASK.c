
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcore_copy_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,struct kcore_copy_info*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct kcore_copy_info *VAR_2,
          const char *VAR_3)
{
 char VAR_4[VAR_0];

 FUNC_1(VAR_4, VAR_0, "%s/kallsyms", VAR_3);

 if (FUNC_2(VAR_4, "/proc/kallsyms"))
  return -1;

 if (FUNC_0(VAR_4, VAR_2,
       VAR_1) < 0)
  return -1;

 return 0;
}
