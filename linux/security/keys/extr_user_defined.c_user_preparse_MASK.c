
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_key_payload {size_t datalen; int data; } ;
struct TYPE_2__ {struct user_key_payload** data; } ;
struct key_preparsed_payload {size_t datalen; size_t quotalen; int data; TYPE_1__ payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct user_key_payload* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,size_t) ;

int FUNC_2(struct key_preparsed_payload *VAR_3)
{
 struct user_key_payload *VAR_4;
 size_t VAR_5 = VAR_3->datalen;

 if (VAR_5 <= 0 || VAR_5 > 32767 || !VAR_3->data)
  return -VAR_0;

 VAR_4 = FUNC_0(sizeof(*VAR_4) + VAR_5, VAR_2);
 if (!VAR_4)
  return -VAR_1;


 VAR_3->quotalen = VAR_5;
 VAR_3->payload.data[0] = VAR_4;
 VAR_4->datalen = VAR_5;
 FUNC_1(VAR_4->data, VAR_3->data, VAR_5);
 return 0;
}
