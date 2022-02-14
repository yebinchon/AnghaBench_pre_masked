
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shash_desc {int dummy; } ;
struct TYPE_2__ {struct crypto_shash* tfm; } ;
struct sdesc {TYPE_1__ shash; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 struct sdesc* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct crypto_shash*) ;
 struct sdesc* FUNC_2 (int,int ) ;

__attribute__((used)) static struct sdesc *FUNC_3(struct crypto_shash *VAR_2)
{
 struct sdesc *VAR_3;
 int VAR_4;

 VAR_4 = sizeof(struct shash_desc) + FUNC_1(VAR_2);
 VAR_3 = FUNC_2(VAR_4, VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);
 VAR_3->shash.tfm = VAR_2;
 return VAR_3;
}
