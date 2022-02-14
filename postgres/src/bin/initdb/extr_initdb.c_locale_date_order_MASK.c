
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int testtime ;
struct tm {int tm_mday; int tm_mon; int tm_year; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct tm*,int ,int) ;
 size_t FUNC_2 (char*,int,char*,struct tm*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (int ,char const*) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_4)
{
 struct tm VAR_5;
 char VAR_6[128];
 char *VAR_7;
 char *VAR_8;
 char *VAR_9;
 char *VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_12 = VAR_1;

 VAR_10 = FUNC_4(VAR_3, ((void*)0));
 if (!VAR_10)
  return VAR_12;
 VAR_10 = FUNC_3(VAR_10);

 FUNC_4(VAR_3, VAR_4);

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.tm_mday = 22;
 VAR_5.tm_mon = 10;
 VAR_5.tm_year = 133;

 VAR_11 = FUNC_2(VAR_6, sizeof(VAR_6), "%x", &VAR_5);

 FUNC_4(VAR_3, VAR_10);
 FUNC_0(VAR_10);

 if (VAR_11 == 0)
  return VAR_12;

 VAR_8 = FUNC_5(VAR_6, "11");
 VAR_7 = FUNC_5(VAR_6, "22");
 VAR_9 = FUNC_5(VAR_6, "33");

 if (!VAR_8 || !VAR_7 || !VAR_9)
  return VAR_12;

 if (VAR_9 < VAR_8 && VAR_8 < VAR_7)
  VAR_12 = VAR_2;
 else if (VAR_7 < VAR_8)
  VAR_12 = VAR_0;
 else
  VAR_12 = VAR_1;

 return VAR_12;
}
