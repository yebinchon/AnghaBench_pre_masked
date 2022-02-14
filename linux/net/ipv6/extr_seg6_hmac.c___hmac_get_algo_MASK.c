
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct seg6_hmac_algo {scalar_t__ alg_id; } ;


 int FUNC_0 (struct seg6_hmac_algo*) ;
 struct seg6_hmac_algo* VAR_0 ;

__attribute__((used)) static struct seg6_hmac_algo *FUNC_1(u8 VAR_1)
{
 struct seg6_hmac_algo *VAR_2;
 int VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_2 = &VAR_0[VAR_3];
  if (VAR_2->alg_id == VAR_1)
   return VAR_2;
 }

 return ((void*)0);
}
