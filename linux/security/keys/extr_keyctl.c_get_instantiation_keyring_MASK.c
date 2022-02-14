
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_key_auth {int dest_keyring; } ;
struct key {int dummy; } ;
typedef scalar_t__ key_serial_t ;
typedef int key_ref_t ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 long FUNC_1 (int ) ;
 struct key* FUNC_2 (int ) ;
 struct key* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;

__attribute__((used)) static long FUNC_5(key_serial_t VAR_6,
          struct request_key_auth *VAR_7,
          struct key **VAR_8)
{
 key_ref_t VAR_9;

 *VAR_8 = ((void*)0);


 if (VAR_6 == 0)
  return 0;


 if (VAR_6 > 0) {
  VAR_9 = FUNC_4(VAR_6, VAR_2, VAR_3);
  if (FUNC_0(VAR_9))
   return FUNC_1(VAR_9);
  *VAR_8 = FUNC_3(VAR_9);
  return 0;
 }

 if (VAR_6 == VAR_4)
  return -VAR_0;



 if (VAR_6 >= VAR_5) {
  *VAR_8 = FUNC_2(VAR_7->dest_keyring);
  return 0;
 }

 return -VAR_1;
}
