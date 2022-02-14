
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partition {unsigned int offset; unsigned int size; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned char const*,char*,unsigned int*,unsigned int*) ;

int FUNC_1(const unsigned char *VAR_1, struct mtd_partition *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_1, "0x%x,0x%x", &VAR_3, &VAR_4);
 if (VAR_5 != 2)
  return 1;

 VAR_2->offset = VAR_3 & VAR_0;
 VAR_2->size = VAR_4 - VAR_3;

 return 0;
}
