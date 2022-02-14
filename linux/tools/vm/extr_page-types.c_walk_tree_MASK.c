
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct FTW {int dummy; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_0 ;
 int FUNC_2 (char const*,struct stat const*) ;

int FUNC_3(const char *VAR_1, const struct stat *VAR_2, int VAR_3, struct FTW *VAR_4)
{
 (void)VAR_4;
 switch (VAR_3) {
 case 128:
  if (FUNC_0(VAR_2->st_mode))
   FUNC_2(VAR_1, VAR_2);
  break;
 case 129:
  FUNC_1(VAR_0, "cannot read dir: %s\n", VAR_1);
  break;
 }
 return 0;
}
