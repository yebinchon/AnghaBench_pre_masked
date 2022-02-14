
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int
FUNC_0(fz_context *VAR_10, unsigned char VAR_11[8])
{
 if (VAR_11[0] == 'P' && VAR_11[1] >= '1' && VAR_11[1] <= '7')
  return VAR_7;
 if (VAR_11[0] == 0xff && VAR_11[1] == 0x4f)
  return VAR_4;
 if (VAR_11[0] == 0x00 && VAR_11[1] == 0x00 && VAR_11[2] == 0x00 && VAR_11[3] == 0x0c &&
   VAR_11[4] == 0x6a && VAR_11[5] == 0x50 && VAR_11[6] == 0x20 && VAR_11[7] == 0x20)
  return VAR_4;
 if (VAR_11[0] == 0xff && VAR_11[1] == 0xd8)
  return VAR_3;
 if (VAR_11[0] == 137 && VAR_11[1] == 80 && VAR_11[2] == 78 && VAR_11[3] == 71 &&
   VAR_11[4] == 13 && VAR_11[5] == 10 && VAR_11[6] == 26 && VAR_11[7] == 10)
  return VAR_6;
 if (VAR_11[0] == 'I' && VAR_11[1] == 'I' && VAR_11[2] == 0xBC)
  return VAR_5;
 if (VAR_11[0] == 'I' && VAR_11[1] == 'I' && VAR_11[2] == 42 && VAR_11[3] == 0)
  return VAR_8;
 if (VAR_11[0] == 'M' && VAR_11[1] == 'M' && VAR_11[2] == 0 && VAR_11[3] == 42)
  return VAR_8;
 if (VAR_11[0] == 'G' && VAR_11[1] == 'I' && VAR_11[2] == 'F')
  return VAR_1;
 if (VAR_11[0] == 'B' && VAR_11[1] == 'M')
  return VAR_0;
 if (VAR_11[0] == 0x97 && VAR_11[1] == 'J' && VAR_11[2] == 'B' && VAR_11[3] == '2' &&
  VAR_11[4] == '\r' && VAR_11[5] == '\n' && VAR_11[6] == 0x1a && VAR_11[7] == '\n')
  return VAR_2;
 return VAR_9;
}
