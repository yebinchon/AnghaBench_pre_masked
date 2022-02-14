
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {int show_string_prefix; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_16 ;
 size_t FUNC_0 (int ,char*,size_t,int) ;
 size_t FUNC_1 (int ,char*,size_t,int) ;
 size_t FUNC_2 (int ,char*,size_t,int) ;
 size_t FUNC_3 (char*,size_t,struct syscall_arg*) ;
 size_t FUNC_4 (char*,size_t,struct syscall_arg*) ;
 size_t FUNC_5 (char*,size_t,struct syscall_arg*) ;
 size_t FUNC_6 (char*,size_t,struct syscall_arg*) ;
 int FUNC_7 (struct syscall_arg*,int) ;

size_t FUNC_8(char *VAR_17, size_t VAR_18, struct syscall_arg *VAR_19)
{
 bool VAR_20 = VAR_19->show_string_prefix;
 int VAR_21 = FUNC_7(VAR_19, 1);

 if (VAR_21 == VAR_0)
  return FUNC_3(VAR_17, VAR_18, VAR_19);

 if (VAR_21 == VAR_8)
  return FUNC_0(VAR_19->val, VAR_17, VAR_18, VAR_20);

 if (VAR_21 == VAR_9)
  return FUNC_2(VAR_19->val, VAR_17, VAR_18, VAR_20);

 if (VAR_21 == VAR_13)
  return FUNC_6(VAR_17, VAR_18, VAR_19);

 if (VAR_21 == VAR_10)
  return FUNC_1(VAR_19->val, VAR_17, VAR_18, VAR_20);




 if (VAR_21 == VAR_11 || VAR_21 == VAR_12 || VAR_21 == VAR_1 ||
     VAR_21 == VAR_6 || VAR_21 == VAR_7 || VAR_21 == VAR_5 ||
     VAR_21 == VAR_2 || VAR_21 == VAR_14 ||
     VAR_21 == VAR_4 || VAR_21 == VAR_16 ||
     VAR_21 == VAR_3 || VAR_21 == VAR_15)
  return FUNC_4(VAR_17, VAR_18, VAR_19);

 return FUNC_5(VAR_17, VAR_18, VAR_19);
}
