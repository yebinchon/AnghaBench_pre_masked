
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

__attribute__((used)) static inline bool FUNC_3(const char *VAR_2)
{
 struct stat VAR_3;
 if (FUNC_2(VAR_2, &VAR_3) == 0)
  return !!FUNC_0(VAR_3.st_mode);

 FUNC_1(VAR_0, "is_dir: stat for %s failed, errno: %d", VAR_2, VAR_1);
 return 0;
}
