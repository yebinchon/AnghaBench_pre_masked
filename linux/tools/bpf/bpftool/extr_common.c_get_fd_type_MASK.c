
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int path ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;

int FUNC_5(int VAR_5)
{
 char VAR_6[VAR_3];
 char VAR_7[512];
 ssize_t VAR_8;

 FUNC_2(VAR_6, sizeof(VAR_6), "/proc/self/fd/%d", VAR_5);

 VAR_8 = FUNC_1(VAR_6, VAR_7, sizeof(VAR_7));
 if (VAR_8 < 0) {
  FUNC_0("can't read link type: %s", FUNC_3(VAR_4));
  return -1;
 }
 if (VAR_8 == sizeof(VAR_6)) {
  FUNC_0("can't read link type: path too long!");
  return -1;
 }

 if (FUNC_4(VAR_7, "bpf-map"))
  return VAR_0;
 else if (FUNC_4(VAR_7, "bpf-prog"))
  return VAR_1;

 return VAR_2;
}
