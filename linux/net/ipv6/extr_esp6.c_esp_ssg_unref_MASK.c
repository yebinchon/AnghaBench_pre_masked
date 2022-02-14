
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int flags; } ;
struct xfrm_state {TYPE_1__ props; struct crypto_aead* data; } ;
struct scatterlist {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {scalar_t__ src; scalar_t__ dst; } ;
typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (struct crypto_aead*,void*,int) ;
 struct aead_request* FUNC_1 (struct crypto_aead*,int *) ;
 int FUNC_2 (int ) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_5(struct xfrm_state *VAR_1, void *VAR_2)
{
 struct crypto_aead *VAR_3 = VAR_1->data;
 int VAR_4 = 0;
 u8 *VAR_5;
 struct aead_request *VAR_6;
 struct scatterlist *VAR_7;

 if (VAR_1->props.flags & VAR_0)
  VAR_4 += sizeof(__be32);

 VAR_5 = FUNC_0(VAR_3, VAR_2, VAR_4);
 VAR_6 = FUNC_1(VAR_3, VAR_5);




 if (VAR_6->src != VAR_6->dst)
  for (VAR_7 = FUNC_3(VAR_6->src); VAR_7; VAR_7 = FUNC_3(VAR_7))
   FUNC_2(FUNC_4(VAR_7));
}
