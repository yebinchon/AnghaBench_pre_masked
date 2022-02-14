
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int dummy; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*,struct tm*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned int,char*,int) ;
 int FUNC_4 (char*,unsigned int,char*,struct tm*) ;

__attribute__((used)) static void FUNC_5(__u64 VAR_3, char *VAR_4, unsigned int VAR_5)
{
 struct timespec VAR_6, VAR_7;
 time_t VAR_8;
 struct tm VAR_9;

 VAR_4[--VAR_5] = '\0';

 if (FUNC_0(VAR_1, &VAR_6) ||
     FUNC_0(VAR_0, &VAR_7)) {
  FUNC_2("Can't read clocks");
  FUNC_3(VAR_4, VAR_5, "%llu", VAR_3 / 1000000000);
  return;
 }

 VAR_8 = (VAR_6.tv_sec - VAR_7.tv_sec) +
  (VAR_6.tv_nsec - VAR_7.tv_nsec + VAR_3) /
  1000000000;


 if (!FUNC_1(&VAR_8, &VAR_9)) {
  FUNC_3(VAR_4, VAR_5, "%llu", VAR_3 / 1000000000);
  return;
 }

 if (VAR_2)
  FUNC_4(VAR_4, VAR_5, "%s", &VAR_9);
 else
  FUNC_4(VAR_4, VAR_5, "%FT%T%z", &VAR_9);
}
