
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t FUNC_0 (int *,int,size_t,int ) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_1(void *VAR_1, size_t VAR_2)
{
 uint8_t *VAR_3 = VAR_1;
 size_t VAR_4 = VAR_2;

 while (VAR_2 > 0) {
  size_t VAR_5 = FUNC_0(VAR_3, 1, VAR_2, VAR_0);
  if (VAR_5 == 0)
   return 0;

  VAR_2 -= VAR_5;
  VAR_3 += VAR_5;
 }

 return VAR_4;
}
