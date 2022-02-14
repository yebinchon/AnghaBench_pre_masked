
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char*,char*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;

int FUNC_8(const char *VAR_2)
{
 char VAR_3[VAR_0];
 char *VAR_4;
 char *VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_3(FUNC_7(VAR_2) + 1);
 FUNC_6(VAR_4, VAR_2);
 VAR_5 = FUNC_0(VAR_4);

 if (FUNC_2(VAR_5))

  goto out_free;

 if (VAR_1) {
  FUNC_5("no BPF file system found, not mounting it due to --nomount option");
  VAR_6 = -1;
  goto out_free;
 }

 VAR_6 = FUNC_4(VAR_5, "bpf", VAR_3, VAR_0);
 if (VAR_6) {
  VAR_3[VAR_0 - 1] = '\0';
  FUNC_5("can't mount BPF file system to pin the object (%s): %s",
        VAR_2, VAR_3);
 }

out_free:
 FUNC_1(VAR_4);
 return VAR_6;
}
