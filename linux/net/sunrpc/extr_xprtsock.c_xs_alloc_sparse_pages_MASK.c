
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {int flags; int page_base; scalar_t__* pages; TYPE_1__* bvec; } ;
typedef int gfp_t ;
struct TYPE_2__ {scalar_t__ bv_page; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static size_t
FUNC_1(struct xdr_buf *VAR_3, size_t VAR_4, gfp_t VAR_5)
{
 size_t VAR_6,VAR_7;

 if (!VAR_4 || !(VAR_3->flags & VAR_2))
  return VAR_4;
 VAR_7 = (VAR_3->page_base + VAR_4 + VAR_1 - 1) >> VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (VAR_3->pages[VAR_6])
   continue;
  VAR_3->bvec[VAR_6].bv_page = VAR_3->pages[VAR_6] = FUNC_0(VAR_5);
  if (!VAR_3->pages[VAR_6]) {
   VAR_6 *= VAR_1;
   return VAR_6 > VAR_3->page_base ? VAR_6 - VAR_3->page_base : 0;
  }
 }
 return VAR_4;
}
