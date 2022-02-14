
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall_arg {scalar_t__ val; int mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t FUNC_0 (char*,size_t,struct syscall_arg*) ;
 int FUNC_1 (struct syscall_arg*,int ) ;

size_t FUNC_2(char *VAR_13, size_t VAR_14, struct syscall_arg *VAR_15)
{
 if (VAR_15->val == VAR_3) {
  FUNC_1(VAR_15, VAR_11);
  goto mask_arg;
 }
 if (VAR_15->val == VAR_2) {
  FUNC_1(VAR_15, VAR_8);
  goto mask_arg;
 }
 if (VAR_15->val == VAR_1 || VAR_15->val == VAR_0) {
  FUNC_1(VAR_15, VAR_10);
  goto out;
 }
 if (VAR_15->val == VAR_5) {
  FUNC_1(VAR_15, VAR_12);
  goto mask_arg;
 }
 if (VAR_15->val == VAR_4) {
  FUNC_1(VAR_15, VAR_9);
  goto mask_arg;
 }



 if (VAR_15->val == VAR_7 ||
     VAR_15->val == VAR_6) {
mask_arg:
  VAR_15->mask |= (1 << 2);
 }
out:
 return FUNC_0(VAR_13, VAR_14, VAR_15);
}
