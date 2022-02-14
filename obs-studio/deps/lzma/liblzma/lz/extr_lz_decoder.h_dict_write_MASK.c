
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ pos; scalar_t__ full; int limit; int buf; } ;
typedef TYPE_1__ lzma_dict ;


 scalar_t__ FUNC_0 (int const*,size_t*,size_t,int ,scalar_t__*,int ) ;

__attribute__((used)) static inline void
FUNC_1(lzma_dict *restrict VAR_0, const uint8_t *restrict VAR_1,
  size_t *restrict VAR_2, size_t VAR_3,
  size_t *restrict VAR_4)
{







 if (VAR_3 - *VAR_2 > *VAR_4)
  VAR_3 = *VAR_2 + *VAR_4;

 *VAR_4 -= FUNC_0(VAR_1, VAR_2, VAR_3,
   VAR_0->buf, &VAR_0->pos, VAR_0->limit);

 if (VAR_0->pos > VAR_0->full)
  VAR_0->full = VAR_0->pos;

 return;
}
