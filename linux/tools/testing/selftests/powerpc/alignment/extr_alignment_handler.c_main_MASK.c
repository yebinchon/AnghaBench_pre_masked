
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_mask; int sa_sigaction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,struct sigaction*,int *) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;

int FUNC_8(int VAR_16, char *VAR_17[])
{

 struct sigaction VAR_18;
 int VAR_19 = 0;
 int VAR_20 = 0;

 while ((VAR_20 = FUNC_1(VAR_16, VAR_17, "d")) != -1) {
  switch (VAR_20) {
  case 'd':
   VAR_5++;
   break;
  default:
   FUNC_7(VAR_17[0]);
   FUNC_0(1);
  }
 }

 VAR_4 = FUNC_2();

 VAR_18.sa_sigaction = VAR_6;
 FUNC_5(&VAR_18.sa_mask);
 VAR_18.sa_flags = VAR_0;
 if (FUNC_4(VAR_3, &VAR_18, ((void*)0)) == -1
     || FUNC_4(VAR_1, &VAR_18, ((void*)0)) == -1
     || FUNC_4(VAR_2, &VAR_18, ((void*)0)) == -1) {
  FUNC_3("sigaction");
  FUNC_0(1);
 }

 VAR_19 |= FUNC_6(VAR_13,
      "test_alignment_handler_vsx_206");
 VAR_19 |= FUNC_6(VAR_14,
      "test_alignment_handler_vsx_207");
 VAR_19 |= FUNC_6(VAR_15,
      "test_alignment_handler_vsx_300");
 VAR_19 |= FUNC_6(VAR_10,
      "test_alignment_handler_integer");
 VAR_19 |= FUNC_6(VAR_11,
      "test_alignment_handler_integer_206");
 VAR_19 |= FUNC_6(VAR_12,
      "test_alignment_handler_vmx");
 VAR_19 |= FUNC_6(VAR_7,
      "test_alignment_handler_fp");
 VAR_19 |= FUNC_6(VAR_8,
      "test_alignment_handler_fp_205");
 VAR_19 |= FUNC_6(VAR_9,
      "test_alignment_handler_fp_206");
 return VAR_19;
}
