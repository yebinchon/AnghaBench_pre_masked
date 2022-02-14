
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash**) ;

void FUNC_2(struct crypto_shash *VAR_1[])
{
 int VAR_2;

 if (!VAR_1)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_0(VAR_1[VAR_2]);
 }
 FUNC_1(VAR_1);
}
