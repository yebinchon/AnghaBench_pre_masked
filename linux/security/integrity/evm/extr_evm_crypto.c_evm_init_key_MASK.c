
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct encrypted_key_payload** data; } ;
struct key {int sem; TYPE_1__ payload; } ;
struct encrypted_key_payload {int decrypted_datalen; int decrypted_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct key*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ) ;
 struct key* FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(void)
{
 struct key *VAR_3;
 struct encrypted_key_payload *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_5(&VAR_2, VAR_1, ((void*)0));
 if (FUNC_0(VAR_3))
  return -VAR_0;

 FUNC_1(&VAR_3->sem);
 VAR_4 = VAR_3->payload.data[0];

 VAR_5 = FUNC_2(VAR_4->decrypted_data, VAR_4->decrypted_datalen);


 FUNC_4(VAR_4->decrypted_data, 0, VAR_4->decrypted_datalen);
 FUNC_6(&VAR_3->sem);
 FUNC_3(VAR_3);
 return VAR_5;
}
