
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct crypto_shash {int dummy; } ;
struct TYPE_6__ {struct crypto_shash* tfm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct crypto_shash*) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int const*,scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

void FUNC_4(struct crypto_shash *VAR_4, const u8 *VAR_5,
       const u8 *VAR_6, size_t VAR_7, u8 *VAR_8)
{
 FUNC_0(VAR_2, VAR_4);

 VAR_2->tfm = VAR_4;

 FUNC_2(VAR_2);
 FUNC_3(VAR_2, VAR_5, VAR_0);
 FUNC_3(VAR_2, VAR_6, VAR_7 - VAR_1);
 FUNC_1(VAR_2, VAR_3, VAR_1, VAR_8);
}
