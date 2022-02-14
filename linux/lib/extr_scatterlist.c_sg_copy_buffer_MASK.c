
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_mapping_iter {void* addr; int length; } ;
struct scatterlist {int dummy; } ;
typedef int off_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (void*,void*,unsigned int) ;
 unsigned int FUNC_1 (int ,size_t) ;
 scalar_t__ FUNC_2 (struct sg_mapping_iter*) ;
 int FUNC_3 (struct sg_mapping_iter*,int ) ;
 int FUNC_4 (struct sg_mapping_iter*,struct scatterlist*,unsigned int,unsigned int) ;
 int FUNC_5 (struct sg_mapping_iter*) ;

size_t FUNC_6(struct scatterlist *VAR_3, unsigned int VAR_4, void *VAR_5,
        size_t VAR_6, off_t VAR_7, bool VAR_8)
{
 unsigned int VAR_9 = 0;
 struct sg_mapping_iter VAR_10;
 unsigned int VAR_11 = VAR_0;

 if (VAR_8)
  VAR_11 |= VAR_1;
 else
  VAR_11 |= VAR_2;

 FUNC_4(&VAR_10, VAR_3, VAR_4, VAR_11);

 if (!FUNC_3(&VAR_10, VAR_7))
  return 0;

 while ((VAR_9 < VAR_6) && FUNC_2(&VAR_10)) {
  unsigned int VAR_12;

  VAR_12 = FUNC_1(VAR_10.length, VAR_6 - VAR_9);

  if (VAR_8)
   FUNC_0(VAR_5 + VAR_9, VAR_10.addr, VAR_12);
  else
   FUNC_0(VAR_10.addr, VAR_5 + VAR_9, VAR_12);

  VAR_9 += VAR_12;
 }

 FUNC_5(&VAR_10);

 return VAR_9;
}
