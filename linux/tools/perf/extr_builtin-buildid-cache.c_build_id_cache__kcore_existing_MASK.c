
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int to_subdir ;
typedef int to ;
struct dirent {scalar_t__ d_type; int d_name; } ;
typedef int from ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;
 int * FUNC_2 (char*) ;
 struct dirent* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,int,char*,char const*,...) ;
 int FUNC_6 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_7(const char *VAR_2, char *VAR_3,
       size_t VAR_4)
{
 char VAR_5[VAR_1];
 char VAR_6[VAR_1];
 char VAR_7[VAR_1];
 struct dirent *VAR_8;
 int VAR_9 = -1;
 DIR *VAR_10;

 VAR_10 = FUNC_2(VAR_3);
 if (!VAR_10)
  return -1;

 FUNC_5(VAR_5, sizeof(VAR_5), "%s/modules", VAR_2);

 while (1) {
  VAR_8 = FUNC_3(VAR_10);
  if (!VAR_8)
   break;
  if (VAR_8->d_type != VAR_0)
   continue;
  FUNC_5(VAR_6, sizeof(VAR_6), "%s/%s/modules", VAR_3,
     VAR_8->d_name);
  FUNC_5(VAR_7, sizeof(VAR_7), "%s/%s",
     VAR_3, VAR_8->d_name);
  if (!FUNC_1(VAR_5, VAR_6) &&
      FUNC_4(VAR_2, VAR_7)) {
   FUNC_6(VAR_3, VAR_7, VAR_4);
   VAR_9 = 0;
   break;
  }
 }

 FUNC_0(VAR_10);

 return VAR_9;
}
