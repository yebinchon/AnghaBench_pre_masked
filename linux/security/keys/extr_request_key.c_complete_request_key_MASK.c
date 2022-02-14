
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_key_auth {struct key* target_key; } ;
struct key {int serial; } ;


 struct request_key_auth* FUNC_0 (struct key*) ;
 int FUNC_1 (char*,int ,int ,int) ;
 int FUNC_2 (struct key*,int ,int *,struct key*) ;
 int VAR_0 ;
 int FUNC_3 (struct key*) ;

void FUNC_4(struct key *VAR_1, int VAR_2)
{
 struct request_key_auth *VAR_3 = FUNC_0(VAR_1);
 struct key *VAR_4 = VAR_3->target_key;

 FUNC_1("%d{%d},%d", VAR_1->serial, VAR_4->serial, VAR_2);

 if (VAR_2 < 0)
  FUNC_2(VAR_4, VAR_0, ((void*)0), VAR_1);
 else
  FUNC_3(VAR_1);
}
