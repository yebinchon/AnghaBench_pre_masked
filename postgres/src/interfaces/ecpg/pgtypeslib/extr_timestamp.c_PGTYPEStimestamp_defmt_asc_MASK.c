
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp ;


 int FUNC_0 (char**,char*,int *,int*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;

int
FUNC_3(const char *VAR_0, const char *VAR_1, timestamp * VAR_2)
{
 int VAR_3,
    VAR_4,
    VAR_5;
 int VAR_6,
    VAR_7,
    VAR_8;
 int VAR_9;

 int VAR_10;
 char *VAR_11;
 char *VAR_12;

 if (!VAR_1)
  VAR_1 = "%Y-%m-%d %H:%M:%S";
 if (!VAR_1[0])
  return 1;

 VAR_11 = FUNC_2(VAR_0);
 VAR_12 = FUNC_2(VAR_1);






 VAR_3 = -1;
 VAR_4 = -1;
 VAR_5 = -1;
 VAR_6 = 0;
 VAR_7 = -1;
 VAR_8 = -1;
 VAR_9 = 0;

 VAR_10 = FUNC_0(&VAR_11, VAR_12, VAR_2, &VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
 FUNC_1(VAR_11);
 FUNC_1(VAR_12);
 return VAR_10;
}
