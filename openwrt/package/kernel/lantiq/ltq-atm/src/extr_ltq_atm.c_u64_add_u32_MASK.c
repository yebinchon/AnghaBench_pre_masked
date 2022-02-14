
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int l; int h; } ;
typedef TYPE_1__ ppe_u64_t ;



__attribute__((used)) static inline void FUNC_0(ppe_u64_t VAR_0, unsigned int VAR_1, ppe_u64_t *VAR_2)
{
 VAR_2->l = VAR_0 + VAR_1;
 if ( VAR_2->l < VAR_0 || VAR_2->l < VAR_1 )
  VAR_2->h++;
}
