
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dsa_pointer ;
typedef int dsa_area_control ;
typedef int FreePageManager ;


 size_t VAR_0 ;
 size_t FUNC_0 (int) ;

size_t
FUNC_1(void)
{
 size_t VAR_1;
 int VAR_2 = 0;

 VAR_1 = FUNC_0(sizeof(dsa_area_control)) +
  FUNC_0(sizeof(FreePageManager));


 while (((VAR_1 + VAR_0 - 1) / VAR_0) > VAR_2)
 {
  ++VAR_2;
  VAR_1 += sizeof(dsa_pointer);
 }

 return VAR_2 * VAR_0;
}
