
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_chan {int * link_key; int tfm_cmac; int * tk; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int const*,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int const*,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct smp_chan *VAR_2)
{

 const u8 VAR_3[4] = { 0x72, 0x62, 0x65, 0x6c };

 VAR_2->link_key = FUNC_0(16, VAR_0);
 if (!VAR_2->link_key)
  return;

 if (FUNC_4(VAR_1, &VAR_2->flags)) {

  const u8 VAR_4[16] = { 0x31, 0x70, 0x6d, 0x74 };

  if (FUNC_3(VAR_2->tfm_cmac, VAR_2->tk, VAR_4, VAR_2->link_key)) {
   FUNC_1(VAR_2->link_key);
   VAR_2->link_key = ((void*)0);
   return;
  }
 } else {

  const u8 VAR_5[4] = { 0x31, 0x70, 0x6d, 0x74 };

  if (FUNC_2(VAR_2->tfm_cmac, VAR_2->tk, VAR_5, VAR_2->link_key)) {
   FUNC_1(VAR_2->link_key);
   VAR_2->link_key = ((void*)0);
   return;
  }
 }

 if (FUNC_2(VAR_2->tfm_cmac, VAR_2->link_key, VAR_3, VAR_2->link_key)) {
  FUNC_1(VAR_2->link_key);
  VAR_2->link_key = ((void*)0);
  return;
 }
}
