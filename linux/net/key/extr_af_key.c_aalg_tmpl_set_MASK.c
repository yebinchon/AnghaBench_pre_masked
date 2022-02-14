
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_tmpl {unsigned int aalgos; } ;
struct TYPE_2__ {unsigned int sadb_alg_id; } ;
struct xfrm_algo_desc {TYPE_1__ desc; } ;



__attribute__((used)) static inline int FUNC_0(const struct xfrm_tmpl *VAR_0,
    const struct xfrm_algo_desc *VAR_1)
{
 unsigned int VAR_2 = VAR_1->desc.sadb_alg_id;

 if (VAR_2 >= sizeof(VAR_0->aalgos) * 8)
  return 0;

 return (VAR_0->aalgos >> VAR_2) & 1;
}
