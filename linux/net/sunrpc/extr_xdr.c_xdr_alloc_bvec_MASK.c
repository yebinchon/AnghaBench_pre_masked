
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {TYPE_1__* bvec; int * pages; } ;
typedef int gfp_t ;
struct TYPE_2__ {scalar_t__ bv_offset; int bv_len; int bv_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (size_t,int,int ) ;
 size_t FUNC_1 (struct xdr_buf*) ;

int
FUNC_2(struct xdr_buf *VAR_2, gfp_t VAR_3)
{
 size_t VAR_4, VAR_5 = FUNC_1(VAR_2);

 if (VAR_5 != 0 && VAR_2->bvec == ((void*)0)) {
  VAR_2->bvec = FUNC_0(VAR_5, sizeof(VAR_2->bvec[0]), VAR_3);
  if (!VAR_2->bvec)
   return -VAR_0;
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
   VAR_2->bvec[VAR_4].bv_page = VAR_2->pages[VAR_4];
   VAR_2->bvec[VAR_4].bv_len = VAR_1;
   VAR_2->bvec[VAR_4].bv_offset = 0;
  }
 }
 return 0;
}
