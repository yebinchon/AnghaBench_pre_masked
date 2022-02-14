
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int* VAR_2 ;

__attribute__((used)) static inline int
FUNC_1(Size VAR_3)
{
 int VAR_4;
 unsigned int VAR_5,
    VAR_6;

 if (VAR_3 > (1 << VAR_1))
 {
  VAR_6 = (VAR_3 - 1) >> VAR_1;
  VAR_5 = VAR_6 >> 8;
  VAR_4 = VAR_5 ? VAR_2[VAR_5] + 8 : VAR_2[VAR_6];

  FUNC_0(VAR_4 < VAR_0);
 }
 else
  VAR_4 = 0;

 return VAR_4;
}
