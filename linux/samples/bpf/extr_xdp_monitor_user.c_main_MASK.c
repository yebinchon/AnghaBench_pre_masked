
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_1; int member_0; } ;
typedef int bpf_obj_file ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 char* VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_2 (int,char**,char*,int ,int*) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 int * VAR_10 ;
 scalar_t__ FUNC_7 (int ,struct rlimit*) ;
 int FUNC_8 (char*,int,char*,char*) ;
 int FUNC_9 (int,int) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (char**) ;

int FUNC_12(int VAR_11, char **VAR_12)
{
 struct rlimit VAR_13 = {VAR_3, VAR_3};
 int VAR_14 = 0, VAR_15;
 int VAR_16 = VAR_1;
 char VAR_17[256];


 bool VAR_18 = 1;
 int VAR_19 = 2;

 FUNC_8(VAR_17, sizeof(VAR_17), "%s_kern.o", VAR_12[0]);


 while ((VAR_15 = FUNC_2(VAR_11, VAR_12, "hDSs:",
      VAR_8, &VAR_14)) != -1) {
  switch (VAR_15) {
  case 'D':
   VAR_5 = 1;
   break;
  case 'S':
   VAR_18 = 0;
   break;
  case 's':
   VAR_19 = FUNC_0(VAR_9);
   break;
  case 'h':
  default:
   FUNC_11(VAR_12);
   return VAR_0;
  }
 }

 if (FUNC_7(VAR_2, &VAR_13)) {
  FUNC_4("setrlimit(RLIMIT_MEMLOCK)");
  return VAR_0;
 }

 if (FUNC_3(VAR_17)) {
  FUNC_6("ERROR - bpf_log_buf: %s", VAR_4);
  return VAR_0;
 }
 if (!VAR_10[0]) {
  FUNC_6("ERROR - load_bpf_file: %s\n", FUNC_10(VAR_6));
  return VAR_0;
 }

 if (VAR_5) {
  FUNC_5();
 }


 if (VAR_18) {



  FUNC_1(VAR_7[2]);
  FUNC_1(VAR_10[2]);
  FUNC_1(VAR_7[3]);
  FUNC_1(VAR_10[3]);
 }

 FUNC_9(VAR_19, VAR_18);

 return VAR_16;
}
