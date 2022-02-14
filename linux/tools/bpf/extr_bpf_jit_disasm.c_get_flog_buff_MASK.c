
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,struct stat*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (int,char*,int) ;

__attribute__((used)) static char *FUNC_8(const char *VAR_1, unsigned int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct stat VAR_6;
 char *VAR_7;

 VAR_3 = FUNC_6(VAR_1, VAR_0);
 if (VAR_3 < 0)
  return ((void*)0);

 VAR_4 = FUNC_3(VAR_3, &VAR_6);
 if (VAR_4 < 0 || !FUNC_0(VAR_6.st_mode))
  goto out;

 VAR_5 = VAR_6.st_size + 1;
 VAR_7 = FUNC_4(VAR_5);
 if (!VAR_7)
  goto out;

 FUNC_5(VAR_7, 0, VAR_5);
 VAR_4 = FUNC_7(VAR_3, VAR_7, VAR_5 - 1);
 if (VAR_4 <= 0)
  goto out_free;

 FUNC_1(VAR_3);
 *VAR_2 = VAR_4;
 return VAR_7;
out_free:
 FUNC_2(VAR_7);
out:
 FUNC_1(VAR_3);
 return ((void*)0);
}
