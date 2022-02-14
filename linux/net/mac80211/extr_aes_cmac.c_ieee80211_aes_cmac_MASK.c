
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct crypto_shash {int dummy; } ;
struct TYPE_6__ {struct crypto_shash* tfm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct crypto_shash*) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int const*,scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 int VAR_4 ;

void FUNC_5(struct crypto_shash *VAR_5, const u8 *VAR_6,
   const u8 *VAR_7, size_t VAR_8, u8 *VAR_9)
{
 FUNC_0(VAR_3, VAR_5);
 u8 VAR_10[VAR_1];

 VAR_3->tfm = VAR_5;

 FUNC_2(VAR_3);
 FUNC_3(VAR_3, VAR_6, VAR_0);
 FUNC_3(VAR_3, VAR_7, VAR_8 - VAR_2);
 FUNC_1(VAR_3, VAR_4, VAR_2, VAR_10);

 FUNC_4(VAR_9, VAR_10, VAR_2);
}
