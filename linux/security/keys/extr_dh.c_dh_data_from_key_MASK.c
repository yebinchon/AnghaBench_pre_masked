
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct user_key_payload {int datalen; int data; } ;
struct key {int sem; int * type; } ;
typedef int ssize_t ;
typedef int key_serial_t ;
typedef int key_ref_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct key*) ;
 struct key* FUNC_3 (int ) ;
 int VAR_5 ;
 long FUNC_4 (struct key*) ;
 int * FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;
 struct user_key_payload* FUNC_8 (struct key*) ;

__attribute__((used)) static ssize_t FUNC_9(key_serial_t VAR_6, void **VAR_7)
{
 struct key *VAR_8;
 key_ref_t VAR_9;
 long VAR_10;
 ssize_t VAR_11;

 VAR_9 = FUNC_6(VAR_6, 0, VAR_4);
 if (FUNC_0(VAR_9)) {
  VAR_11 = -VAR_0;
  goto error;
 }

 VAR_8 = FUNC_3(VAR_9);

 VAR_11 = -VAR_2;
 if (VAR_8->type == &VAR_5) {
  FUNC_1(&VAR_8->sem);
  VAR_10 = FUNC_4(VAR_8);
  if (VAR_10 == 0) {
   const struct user_key_payload *VAR_12;
   uint8_t *VAR_13;

   VAR_12 = FUNC_8(VAR_8);

   VAR_13 = FUNC_5(VAR_12->data, VAR_12->datalen,
         VAR_3);
   if (VAR_13) {
    *VAR_7 = VAR_13;
    VAR_11 = VAR_12->datalen;
   } else {
    VAR_11 = -VAR_1;
   }
  }
  FUNC_7(&VAR_8->sem);
 }

 FUNC_2(VAR_8);
error:
 return VAR_11;
}
