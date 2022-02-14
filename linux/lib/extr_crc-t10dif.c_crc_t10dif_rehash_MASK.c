
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct crypto_shash {int dummy; } ;
struct crypto_alg {int cra_name; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct crypto_shash* FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct crypto_shash*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct crypto_shash*) ;
 struct crypto_shash* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct notifier_block *VAR_5, unsigned long VAR_6, void *VAR_7)
{
 struct crypto_alg *VAR_8 = VAR_7;
 struct crypto_shash *VAR_9, *VAR_10;

 if (VAR_6 != VAR_1 ||
     FUNC_8(&VAR_3) ||
     FUNC_10(VAR_8->cra_name, VAR_0, FUNC_9(VAR_0)))
  return 0;

 FUNC_4(&VAR_2);
 VAR_10 = FUNC_7(VAR_4,
     FUNC_3(&VAR_2));
 if (!VAR_10) {
  FUNC_5(&VAR_2);
  return 0;
 }
 VAR_9 = FUNC_1("crct10dif", 0, 0);
 if (FUNC_0(VAR_9)) {
  FUNC_5(&VAR_2);
  return 0;
 }
 FUNC_6(VAR_4, VAR_9);
 FUNC_5(&VAR_2);

 FUNC_11();
 FUNC_2(VAR_10);
 return 0;
}
