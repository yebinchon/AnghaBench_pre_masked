
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array_cache {scalar_t__ avail; scalar_t__ entry; scalar_t__ limit; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (scalar_t__,unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct array_cache *VAR_0,
  struct array_cache *VAR_1, unsigned int VAR_2)
{

 int VAR_3 = FUNC_1(VAR_1->avail, VAR_2, VAR_0->limit - VAR_0->avail);

 if (!VAR_3)
  return 0;

 FUNC_0(VAR_0->entry + VAR_0->avail, VAR_1->entry + VAR_1->avail -VAR_3,
   sizeof(void *) *VAR_3);

 VAR_1->avail -= VAR_3;
 VAR_0->avail += VAR_3;
 return VAR_3;
}
