
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int initfilename ;
typedef int DIR ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 struct dirent* FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (char*,int,char*,char const*,char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_3)
{
 DIR *VAR_4;
 struct dirent *VAR_5;
 char VAR_6[VAR_1 * 2];


 VAR_4 = FUNC_0(VAR_3);

 while ((VAR_5 = FUNC_2(VAR_4, VAR_3, VAR_0)) != ((void*)0))
 {
  if (FUNC_5(VAR_5->d_name, "0123456789") == FUNC_4(VAR_5->d_name))
  {

   FUNC_3(VAR_6, sizeof(VAR_6), "%s/%s/%s",
      VAR_3, VAR_5->d_name, VAR_2);
   FUNC_6(VAR_6, VAR_0);
  }
 }

 FUNC_1(VAR_4);
}
