
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int icS15Fixed16Number ;
typedef int fz_context ;



__attribute__((used)) static icS15Fixed16Number
FUNC_0(fz_context *VAR_0, float VAR_1)
{
 short VAR_2;
 unsigned short VAR_3;

 if (VAR_1 < 0)
  VAR_1 = 0;
 VAR_2 = (short)VAR_1;
 VAR_3 = (unsigned short)((VAR_1 - VAR_2) * 65536);
 return (icS15Fixed16Number) ((VAR_2 << 16) | VAR_3);
}
