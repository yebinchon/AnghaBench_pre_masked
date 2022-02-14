
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; int st_mtime; scalar_t__ st_gid; scalar_t__ st_uid; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char const*,int *,struct stat*,int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (char,char const*,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_1, const char *VAR_2)
{
 struct stat VAR_3;
 int VAR_4,
    VAR_5;

 VAR_5 = FUNC_5(VAR_2);
 VAR_3.st_uid = FUNC_3();
 VAR_3.st_gid = FUNC_2();

 VAR_3.st_mtime = FUNC_6(((void*)0));
 VAR_3.st_mode = VAR_0;
 VAR_3.st_size = VAR_5;

 FUNC_1(VAR_1, ((void*)0), &VAR_3, 0);

 FUNC_4('d', VAR_2, VAR_5);


 VAR_4 = ((VAR_5 + 511) & ~511) - VAR_5;
 if (VAR_4 > 0)
 {
  char VAR_6[512];

  FUNC_0(VAR_6, 0, VAR_4);
  FUNC_4('d', VAR_6, VAR_4);
 }
}
