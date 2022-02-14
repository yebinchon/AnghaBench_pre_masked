
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_1; int member_0; } ;
typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 char* VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,struct rlimit*) ;
 int FUNC_5 (char*,int,char*,char*) ;
 int FUNC_6 () ;

int FUNC_7(int VAR_3, char **VAR_4)
{
 struct rlimit VAR_5 = {VAR_1, VAR_1};
 char VAR_6[256];
 int VAR_7 = 8;
 int VAR_8 = ~0;

 FUNC_4(VAR_0, &VAR_5);

 if (VAR_3 > 1)
  VAR_8 = FUNC_0(VAR_4[1]) ? : VAR_8;
 if (VAR_3 > 2)
  VAR_7 = FUNC_0(VAR_4[2]) ? : VAR_7;

 if (VAR_8 & 0x3) {
  FUNC_2("BASE\n");
  FUNC_3(VAR_7, VAR_8);
 }

 if (VAR_8 & 0xC) {
  FUNC_5(VAR_6, sizeof(VAR_6),
    "%s_kprobe_kern.o", VAR_4[0]);
  if (FUNC_1(VAR_6)) {
   FUNC_2("%s", VAR_2);
   return 1;
  }
  FUNC_2("w/KPROBE\n");
  FUNC_3(VAR_7, VAR_8 >> 2);
  FUNC_6();
 }

 if (VAR_8 & 0x30) {
  FUNC_5(VAR_6, sizeof(VAR_6),
    "%s_tp_kern.o", VAR_4[0]);
  if (FUNC_1(VAR_6)) {
   FUNC_2("%s", VAR_2);
   return 1;
  }
  FUNC_2("w/TRACEPOINT\n");
  FUNC_3(VAR_7, VAR_8 >> 4);
  FUNC_6();
 }

 if (VAR_8 & 0xC0) {
  FUNC_5(VAR_6, sizeof(VAR_6),
    "%s_raw_tp_kern.o", VAR_4[0]);
  if (FUNC_1(VAR_6)) {
   FUNC_2("%s", VAR_2);
   return 1;
  }
  FUNC_2("w/RAW_TRACEPOINT\n");
  FUNC_3(VAR_7, VAR_8 >> 6);
  FUNC_6();
 }

 return 0;
}
