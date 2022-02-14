
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int time_t ;
struct skynet_context {int dummy; } ;
typedef int FILE ;


 char* FUNC_0 (int*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,int,char*) ;
 int FUNC_4 (struct skynet_context*,char*,char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*,char const*,int) ;
 size_t FUNC_9 (char const*) ;

FILE *
FUNC_10(struct skynet_context * VAR_0, uint32_t VAR_1) {
 const char * VAR_2 = FUNC_5("logpath");
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 size_t VAR_3 = FUNC_9(VAR_2);
 char VAR_4[VAR_3 + 16];
 FUNC_8(VAR_4, "%s/%08x.log", VAR_2, VAR_1);
 FILE *VAR_5 = FUNC_2(VAR_4, "ab");
 if (VAR_5) {
  uint32_t VAR_6 = FUNC_7();
  uint64_t VAR_7 = FUNC_6();
  time_t VAR_8 = VAR_6 + VAR_7/100;
  FUNC_4(VAR_0, "Open log file %s", VAR_4);
  FUNC_3(VAR_5, "open time: %u %s", (uint32_t)VAR_7, FUNC_0(&VAR_8));
  FUNC_1(VAR_5);
 } else {
  FUNC_4(VAR_0, "Open log file %s fail", VAR_4);
 }
 return VAR_5;
}
