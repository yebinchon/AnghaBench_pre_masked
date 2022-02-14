
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 size_t VAR_0 ;
 unsigned short* FUNC_0 (char*) ;
 char* FUNC_1 (int *,size_t) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static char *FUNC_3(fz_context *VAR_1, unsigned char *VAR_2, size_t VAR_3, int *VAR_4)
{
 const unsigned short *VAR_5;
 const unsigned char *VAR_6 = VAR_2 + VAR_3;
 char *VAR_7, *VAR_8;
 int VAR_9;

 if (VAR_2[0] == 0xFE && VAR_2[1] == 0xFF) {
  VAR_2 += 2;
  VAR_7 = VAR_8 = FUNC_1(VAR_1, VAR_3 * VAR_0);
  while (VAR_2 + 1 < VAR_6) {
   VAR_9 = VAR_2[0] << 8 | VAR_2[1];
   VAR_8 += FUNC_2(VAR_8, VAR_9);
   VAR_2 += 2;
  }
  *VAR_8 = 0;
  *VAR_4 = 1;
  return VAR_7;
 }

 if (VAR_2[0] == 0xFF && VAR_2[1] == 0xFE) {
  VAR_2 += 2;
  VAR_7 = VAR_8 = FUNC_1(VAR_1, VAR_3 * VAR_0);
  while (VAR_2 + 1 < VAR_6) {
   VAR_9 = VAR_2[0] | VAR_2[1] << 8;
   VAR_8 += FUNC_2(VAR_8, VAR_9);
   VAR_2 += 2;
  }
  *VAR_8 = 0;
  *VAR_4 = 1;
  return VAR_7;
 }

 VAR_5 = FUNC_0((char*)VAR_2);
 if (VAR_5) {
  VAR_7 = VAR_8 = FUNC_1(VAR_1, VAR_3 * VAR_0);
  while (*VAR_2) {
   VAR_9 = VAR_5[*VAR_2++];
   VAR_8 += FUNC_2(VAR_8, VAR_9);
  }
  *VAR_8 = 0;
  *VAR_4 = 1;
  return VAR_7;
 }

 *VAR_4 = 0;

 if (VAR_2[0] == 0xEF && VAR_2[1] == 0xBB && VAR_2[2] == 0xBF)
  return (char*)VAR_2+3;

 return (char*)VAR_2;
}
