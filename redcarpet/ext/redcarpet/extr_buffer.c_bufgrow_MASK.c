
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {size_t unit; size_t asize; void* data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (void*,size_t) ;

int
FUNC_2(struct buf *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 void *VAR_6;

 FUNC_0(VAR_3 && VAR_3->unit);

 if (VAR_4 > VAR_0)
  return VAR_1;

 if (VAR_3->asize >= VAR_4)
  return VAR_2;

 VAR_5 = VAR_3->asize + VAR_3->unit;
 while (VAR_5 < VAR_4)
  VAR_5 += VAR_3->unit;

 VAR_6 = FUNC_1(VAR_3->data, VAR_5);
 if (!VAR_6)
  return VAR_1;

 VAR_3->data = VAR_6;
 VAR_3->asize = VAR_5;
 return VAR_2;
}
