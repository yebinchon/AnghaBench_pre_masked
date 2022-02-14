
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct user_namespace {int dummy; } ;
typedef int kuid_t ;
typedef int key_serial_t ;
typedef int key_ref_t ;
struct TYPE_2__ {int * type; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct user_namespace* FUNC_4 () ;
 long FUNC_5 (struct user_namespace*,int ,int ) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct user_namespace*,int ) ;
 int FUNC_10 (struct user_namespace*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;

long FUNC_13(uid_t VAR_7, key_serial_t VAR_8)
{
 struct user_namespace *VAR_9 = FUNC_4();
 key_ref_t VAR_10;
 kuid_t VAR_11;
 long VAR_12;


 if (VAR_7 == (uid_t)-1) {
  VAR_11 = FUNC_3();
 } else {
  VAR_11 = FUNC_9(VAR_9, VAR_7);
  if (!FUNC_12(VAR_11))
   return -VAR_1;




  if (!FUNC_11(VAR_11, FUNC_3()) &&
      !FUNC_11(VAR_11, FUNC_2()) &&
      !FUNC_10(VAR_9, VAR_0))
   return -VAR_3;
 }


 VAR_10 = FUNC_8(VAR_8, VAR_4, VAR_5);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);
 if (FUNC_7(VAR_10)->type != &VAR_6) {
  VAR_12 = -VAR_2;
  goto out_put_dest;
 }

 VAR_12 = FUNC_5(VAR_9, VAR_11, VAR_10);

out_put_dest:
 FUNC_6(VAR_10);
 return VAR_12;
}
