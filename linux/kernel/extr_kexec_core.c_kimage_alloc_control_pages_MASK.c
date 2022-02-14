
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kimage {int type; } ;




 struct page* FUNC_0 (struct kimage*,unsigned int) ;
 struct page* FUNC_1 (struct kimage*,unsigned int) ;

struct page *FUNC_2(struct kimage *VAR_0,
      unsigned int VAR_1)
{
 struct page *VAR_2 = ((void*)0);

 switch (VAR_0->type) {
 case 128:
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  break;
 case 129:
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  break;
 }

 return VAR_2;
}
