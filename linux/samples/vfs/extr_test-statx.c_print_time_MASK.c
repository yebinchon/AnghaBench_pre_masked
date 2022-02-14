
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
struct statx_timestamp {int tv_nsec; int tv_sec; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,int ) ;
 int FUNC_2 (int *,struct tm*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int VAR_0 ;
 int FUNC_5 (char*,int,char*,struct tm*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1, struct statx_timestamp *VAR_2)
{
 struct tm VAR_3;
 time_t VAR_4;
 char VAR_5[100];
 int VAR_6;

 VAR_4 = VAR_2->tv_sec;
 if (!FUNC_2(&VAR_4, &VAR_3)) {
  FUNC_3("localtime_r");
  FUNC_0(1);
 }
 VAR_6 = FUNC_5(VAR_5, 100, "%F %T", &VAR_3);
 if (VAR_6 == 0) {
  FUNC_3("strftime");
  FUNC_0(1);
 }
 FUNC_4("%s", VAR_1);
 FUNC_1(VAR_5, 1, VAR_6, VAR_0);
 FUNC_4(".%09u", VAR_2->tv_nsec);
 VAR_6 = FUNC_5(VAR_5, 100, "%z", &VAR_3);
 if (VAR_6 == 0) {
  FUNC_3("strftime2");
  FUNC_0(1);
 }
 FUNC_1(VAR_5, 1, VAR_6, VAR_0);
 FUNC_4("\n");
}
