
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nft_set const* set; } ;
struct nft_set_gc_batch {TYPE_1__ head; } ;
struct nft_set {int dummy; } ;
typedef int gfp_t ;


 struct nft_set_gc_batch* FUNC_0 (int,int ) ;

struct nft_set_gc_batch *FUNC_1(const struct nft_set *VAR_0,
      gfp_t VAR_1)
{
 struct nft_set_gc_batch *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_1);
 if (VAR_2 == ((void*)0))
  return VAR_2;
 VAR_2->head.set = VAR_0;
 return VAR_2;
}
