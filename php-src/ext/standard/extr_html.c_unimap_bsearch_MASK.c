
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short un_code_point; unsigned char cs_code; } ;
typedef TYPE_1__ uni_to_enc ;



__attribute__((used)) static inline unsigned char FUNC_0(const uni_to_enc *VAR_0, unsigned VAR_1, size_t VAR_2)
{
 const uni_to_enc *VAR_3 = VAR_0,
      *VAR_4 = &VAR_0[VAR_2-1],
      *VAR_5;
 unsigned short VAR_6;


 if (VAR_1 > 0xFFFFU)
  return 0;

 VAR_6 = (unsigned short) VAR_1;

 while (VAR_3 <= VAR_4) {
  VAR_5 = VAR_3 + (VAR_4 - VAR_3) / 2;
  if (VAR_6 < VAR_5->un_code_point)
   VAR_4 = VAR_5 - 1;
  else if (VAR_6 > VAR_5->un_code_point)
   VAR_3 = VAR_5 + 1;
  else
   return VAR_5->cs_code;
 }
 return 0;
}
