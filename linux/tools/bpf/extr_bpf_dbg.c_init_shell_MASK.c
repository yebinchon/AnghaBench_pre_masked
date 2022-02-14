
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 (char,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 char* VAR_9 ;
 int FUNC_6 () ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int,char*,char*) ;

__attribute__((used)) static void FUNC_9(FILE *VAR_12, FILE *VAR_13)
{
 char VAR_14[128];

 FUNC_8(VAR_14, sizeof(VAR_14), "%s/.bpf_dbg_history", FUNC_0("HOME"));
 FUNC_1(VAR_14);

 VAR_7 = VAR_12;
 VAR_8 = VAR_13;

 VAR_9 = "bpf_dbg";
 VAR_10 = FUNC_0("TERM");

 VAR_4 = 0;
 VAR_5 = 1;

 VAR_3 = VAR_11;

 FUNC_2('\t', VAR_6);

 FUNC_3('\t', VAR_6, VAR_1);
 FUNC_3('\033', VAR_6, VAR_1);

 FUNC_8(VAR_14, sizeof(VAR_14), "%s/.bpf_dbg_init", FUNC_0("HOME"));
 FUNC_5(VAR_14);

 FUNC_4(0);
 FUNC_6();

 FUNC_7(VAR_0, VAR_2);
}
