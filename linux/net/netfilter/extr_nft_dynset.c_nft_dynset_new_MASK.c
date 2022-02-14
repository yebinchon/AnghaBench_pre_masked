
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nft_set_ext {int dummy; } ;
struct nft_set {int nelems; scalar_t__ size; int timeout; } ;
struct nft_regs {int * data; } ;
struct nft_expr {int dummy; } ;
struct nft_dynset {size_t sreg_key; size_t sreg_data; int * expr; int tmpl; scalar_t__ timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 struct nft_dynset* FUNC_3 (struct nft_expr const*) ;
 int FUNC_4 (struct nft_set*,void*,int) ;
 struct nft_set_ext* FUNC_5 (struct nft_set*,void*) ;
 void* FUNC_6 (struct nft_set*,int *,int *,int *,int ,int ,int ) ;
 int FUNC_7 (struct nft_set_ext*) ;

__attribute__((used)) static void *FUNC_8(struct nft_set *VAR_1, const struct nft_expr *VAR_2,
       struct nft_regs *VAR_3)
{
 const struct nft_dynset *VAR_4 = FUNC_3(VAR_2);
 struct nft_set_ext *VAR_5;
 u64 VAR_6;
 void *VAR_7;

 if (!FUNC_0(&VAR_1->nelems, 1, VAR_1->size))
  return ((void*)0);

 VAR_6 = VAR_4->timeout ? : VAR_1->timeout;
 VAR_7 = FUNC_6(VAR_1, &VAR_4->tmpl,
     &VAR_3->data[VAR_4->sreg_key],
     &VAR_3->data[VAR_4->sreg_data],
     VAR_6, 0, VAR_0);
 if (VAR_7 == ((void*)0))
  goto err1;

 VAR_5 = FUNC_5(VAR_1, VAR_7);
 if (VAR_4->expr != ((void*)0) &&
     FUNC_2(FUNC_7(VAR_5), VAR_4->expr) < 0)
  goto err2;

 return VAR_7;

err2:
 FUNC_4(VAR_1, VAR_7, 0);
err1:
 if (VAR_1->size)
  FUNC_1(&VAR_1->nelems);
 return ((void*)0);
}
