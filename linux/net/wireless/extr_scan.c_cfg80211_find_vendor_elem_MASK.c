
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct element {int datalen; } ;
typedef int match ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 struct element* FUNC_1 (int ,unsigned int const*,unsigned int,unsigned int*,int,int ) ;

const struct element *FUNC_2(unsigned int VAR_1, int VAR_2,
      const u8 *VAR_3,
      unsigned int VAR_4)
{
 const struct element *VAR_5;
 u8 VAR_6[] = { VAR_1 >> 16, VAR_1 >> 8, VAR_1, VAR_2 };
 int VAR_7 = (VAR_2 < 0) ? 3 : sizeof(VAR_6);

 if (FUNC_0(VAR_2 > 0xff))
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_4,
     VAR_6, VAR_7, 0);

 if (!VAR_5 || VAR_5->datalen < 4)
  return ((void*)0);

 return VAR_5;
}
