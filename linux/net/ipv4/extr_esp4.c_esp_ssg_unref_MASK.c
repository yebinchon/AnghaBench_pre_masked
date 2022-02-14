
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int flags; } ;
struct xfrm_state {TYPE_1__ props; struct crypto_aead* data; } ;
struct scatterlist {int dummy; } ;
struct esp_output_extra {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {scalar_t__ src; scalar_t__ dst; } ;


 int VAR_0 ;
 struct esp_output_extra* FUNC_0 (void*) ;
 int * FUNC_1 (struct crypto_aead*,void*,int) ;
 struct aead_request* FUNC_2 (struct crypto_aead*,int *) ;
 int FUNC_3 (int ) ;
 struct scatterlist* FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_6(struct xfrm_state *VAR_1, void *VAR_2)
{
 struct esp_output_extra *VAR_3 = FUNC_0(VAR_2);
 struct crypto_aead *VAR_4 = VAR_1->data;
 int VAR_5 = 0;
 u8 *VAR_6;
 struct aead_request *VAR_7;
 struct scatterlist *VAR_8;

 if (VAR_1->props.flags & VAR_0)
  VAR_5 += sizeof(*VAR_3);

 VAR_3 = FUNC_0(VAR_2);
 VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_5);
 VAR_7 = FUNC_2(VAR_4, VAR_6);




 if (VAR_7->src != VAR_7->dst)
  for (VAR_8 = FUNC_4(VAR_7->src); VAR_8; VAR_8 = FUNC_4(VAR_8))
   FUNC_3(FUNC_5(VAR_8));
}
