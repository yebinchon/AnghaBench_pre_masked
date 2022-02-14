
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int VAR_0 ;

__attribute__((used)) static inline const byte *FUNC_0(const byte *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 if (VAR_6 < 0) VAR_6 = 0;
 if (VAR_7 < 0) VAR_7 = 0;
 if (VAR_6 >= (VAR_2>>VAR_0)) VAR_6 = (VAR_2>>VAR_0) - 1;
 if (VAR_7 >= (VAR_3>>VAR_0)) VAR_7 = (VAR_3>>VAR_0) - 1;
 return VAR_1 + VAR_7 * VAR_4 + VAR_6 * VAR_5;
}
