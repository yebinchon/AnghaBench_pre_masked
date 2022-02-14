
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,char*,char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, struct dirent *VAR_4)
{
 char VAR_5[VAR_1];
 int VAR_6;

 FUNC_2(VAR_5, VAR_1, "%s/%s/id", VAR_3, VAR_4->d_name);
 VAR_6 = FUNC_1(VAR_5, VAR_2);
 if (VAR_6 < 0)
  return -VAR_0;
 FUNC_0(VAR_6);

 return 0;
}
