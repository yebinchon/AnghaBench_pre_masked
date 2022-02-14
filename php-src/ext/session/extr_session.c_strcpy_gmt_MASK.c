
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {size_t tm_wday; size_t tm_mon; int tm_sec; int tm_min; int tm_hour; scalar_t__ tm_year; int tm_mday; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int * VAR_1 ;
 struct tm* FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (char*,int,char*,int ,int ,int ,scalar_t__,int ,int ,int ) ;
 int * VAR_2 ;

__attribute__((used)) static inline void FUNC_3(char *VAR_3, time_t *VAR_4)
{
 char VAR_5[VAR_0];
 struct tm VAR_6, *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_4, &VAR_6);

 if (!VAR_7) {
  VAR_3[0] = '\0';
  return;
 }

 VAR_8 = FUNC_2(VAR_5, sizeof(VAR_5), "%s, %02d %s %d %02d:%02d:%02d GMT",
    VAR_2[VAR_6.tm_wday], VAR_6.tm_mday,
    VAR_1[VAR_6.tm_mon], VAR_6.tm_year + 1900,
    VAR_6.tm_hour, VAR_6.tm_min,
    VAR_6.tm_sec);
 FUNC_0(VAR_3, VAR_5, VAR_8);
 VAR_3[VAR_8] = '\0';
}
