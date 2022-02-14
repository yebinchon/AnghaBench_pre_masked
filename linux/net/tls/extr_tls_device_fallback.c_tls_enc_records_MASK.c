
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scatterlist {int dummy; } ;
struct scatter_walk {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct scatter_walk*,int,int ) ;
 int FUNC_2 (struct scatter_walk*,struct scatterlist*) ;
 int FUNC_3 (struct aead_request*,struct crypto_aead*,char*,char*,int ,struct scatter_walk*,struct scatter_walk*,int*) ;

__attribute__((used)) static int FUNC_4(struct aead_request *VAR_0,
      struct crypto_aead *VAR_1, struct scatterlist *VAR_2,
      struct scatterlist *VAR_3, char *VAR_4, char *VAR_5,
      u64 VAR_6, int VAR_7)
{
 struct scatter_walk VAR_8, VAR_9;
 int VAR_10;

 FUNC_2(&VAR_9, VAR_2);
 FUNC_2(&VAR_8, VAR_3);

 do {
  VAR_10 = FUNC_3(VAR_0, VAR_1, VAR_4, VAR_5,
        FUNC_0(VAR_6), &VAR_9, &VAR_8, &VAR_7);
  VAR_6++;

 } while (VAR_10 == 0 && VAR_7);

 FUNC_1(&VAR_9, 0, 0);
 FUNC_1(&VAR_8, 1, 0);

 return VAR_10;
}
