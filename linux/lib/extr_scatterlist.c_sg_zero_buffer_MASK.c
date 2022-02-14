
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_mapping_iter {int addr; int length; } ;
struct scatterlist {int dummy; } ;
typedef int off_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 unsigned int FUNC_1 (int ,size_t) ;
 scalar_t__ FUNC_2 (struct sg_mapping_iter*) ;
 int FUNC_3 (struct sg_mapping_iter*,int ) ;
 int FUNC_4 (struct sg_mapping_iter*,struct scatterlist*,unsigned int,unsigned int) ;
 int FUNC_5 (struct sg_mapping_iter*) ;

size_t FUNC_6(struct scatterlist *VAR_2, unsigned int VAR_3,
         size_t VAR_4, off_t VAR_5)
{
 unsigned int VAR_6 = 0;
 struct sg_mapping_iter VAR_7;
 unsigned int VAR_8 = VAR_0 | VAR_1;

 FUNC_4(&VAR_7, VAR_2, VAR_3, VAR_8);

 if (!FUNC_3(&VAR_7, VAR_5))
  return 0;

 while (VAR_6 < VAR_4 && FUNC_2(&VAR_7)) {
  unsigned int VAR_9;

  VAR_9 = FUNC_1(VAR_7.length, VAR_4 - VAR_6);
  FUNC_0(VAR_7.addr, 0, VAR_9);

  VAR_6 += VAR_9;
 }

 FUNC_5(&VAR_7);
 return VAR_6;
}
