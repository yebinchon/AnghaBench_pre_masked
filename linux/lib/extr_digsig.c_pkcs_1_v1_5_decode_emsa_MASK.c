
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(const unsigned char *VAR_0,
      unsigned long VAR_1,
      unsigned long VAR_2,
      unsigned long *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;

 VAR_4 = (VAR_2 >> 3) + (VAR_2 & 7 ? 1 : 0);


 if ((VAR_1 > VAR_4) || (VAR_4 < 11))
  return ((void*)0);


 if (VAR_0[0] != 0x00 || VAR_0[1] != 0x01)
  return ((void*)0);

 for (VAR_6 = 2; VAR_6 < VAR_4 - 1; VAR_6++)
  if (VAR_0[VAR_6] != 0xFF)
   break;


 if (VAR_0[VAR_6] != 0)


  return ((void*)0);

 VAR_5 = VAR_6 - 2;

 *VAR_3 = (VAR_1 - (2 + VAR_5 + 1));

 return VAR_0 + 2 + VAR_5 + 1;
}
