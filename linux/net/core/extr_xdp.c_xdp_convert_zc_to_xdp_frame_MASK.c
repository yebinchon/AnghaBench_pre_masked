
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct xdp_frame {unsigned int len; unsigned int metasize; TYPE_1__ mem; scalar_t__ headroom; void* data; } ;
struct xdp_buff {unsigned int data; unsigned int data_meta; int data_end; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 () ;
 int FUNC_1 (void*,void*,unsigned int) ;
 int FUNC_2 (struct xdp_frame*,int ,int) ;
 void* FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct xdp_buff*) ;
 int FUNC_5 (struct xdp_buff*) ;

struct xdp_frame *FUNC_6(struct xdp_buff *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 void *VAR_5, *VAR_6;
 struct xdp_frame *VAR_7;
 struct page *VAR_8;


 VAR_3 = FUNC_4(VAR_2) ? 0 :
     VAR_2->data - VAR_2->data_meta;
 VAR_4 = VAR_2->data_end - VAR_2->data + VAR_3;

 if (sizeof(*VAR_7) + VAR_4 > VAR_1)
  return ((void*)0);

 VAR_8 = FUNC_0();
 if (!VAR_8)
  return ((void*)0);

 VAR_5 = FUNC_3(VAR_8);
 VAR_7 = VAR_5;
 FUNC_2(VAR_7, 0, sizeof(*VAR_7));

 VAR_5 += sizeof(*VAR_7);
 VAR_6 = VAR_3 ? VAR_2->data_meta : VAR_2->data;
 FUNC_1(VAR_5, VAR_6, VAR_4);

 VAR_7->data = VAR_5 + VAR_3;
 VAR_7->len = VAR_4 - VAR_3;
 VAR_7->headroom = 0;
 VAR_7->metasize = VAR_3;
 VAR_7->mem.type = VAR_0;

 FUNC_5(VAR_2);
 return VAR_7;
}
