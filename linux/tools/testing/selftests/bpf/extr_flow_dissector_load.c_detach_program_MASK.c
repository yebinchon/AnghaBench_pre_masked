
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,char*,...) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
 char VAR_3[64];
 int VAR_4;

 VAR_4 = FUNC_0(0, VAR_0);
 if (VAR_4)
  FUNC_1(1, 0, "bpf_prog_detach");


 FUNC_2(VAR_3, "rm -r %s", VAR_1);
 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  FUNC_1(1, VAR_2, "%s", VAR_3);
}
