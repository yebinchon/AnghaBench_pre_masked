
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trusted_key_payload {int migratable; } ;
struct key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct key*,int) ;
 struct trusted_key_payload* FUNC_1 (int,int ) ;

__attribute__((used)) static struct trusted_key_payload *FUNC_2(struct key *VAR_1)
{
 struct trusted_key_payload *VAR_2 = ((void*)0);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, sizeof *VAR_2);
 if (VAR_3 < 0)
  return VAR_2;
 VAR_2 = FUNC_1(sizeof *VAR_2, VAR_0);
 if (VAR_2)
  VAR_2->migratable = 1;
 return VAR_2;
}
