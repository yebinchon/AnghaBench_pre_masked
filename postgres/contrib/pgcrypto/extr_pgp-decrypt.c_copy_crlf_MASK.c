
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8 ;
typedef int tmpbuf ;
typedef int MBuf ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_2(MBuf *VAR_0, uint8 *VAR_1, int VAR_2, int *VAR_3)
{
 uint8 *VAR_4 = VAR_1 + VAR_2;
 uint8 VAR_5[1024];
 uint8 *VAR_6 = VAR_5 + sizeof(VAR_5);
 uint8 *VAR_7;
 int VAR_8;

 VAR_7 = VAR_5;
 if (*VAR_3)
 {
  if (*VAR_1 != '\n')
   *VAR_7++ = '\r';
  *VAR_3 = 0;
 }
 while (VAR_1 < VAR_4)
 {
  if (*VAR_1 == '\r')
  {
   if (VAR_1 + 1 < VAR_4)
   {
    if (*(VAR_1 + 1) == '\n')
     VAR_1++;
   }
   else
   {
    *VAR_3 = 1;
    break;
   }
  }
  *VAR_7++ = *VAR_1++;
  if (VAR_7 >= VAR_6)
  {
   VAR_8 = FUNC_0(VAR_0, VAR_5, VAR_7 - VAR_5);
   if (VAR_8 < 0)
    return VAR_8;
   VAR_7 = VAR_5;
  }
 }
 if (VAR_7 - VAR_5 > 0)
 {
  VAR_8 = FUNC_0(VAR_0, VAR_5, VAR_7 - VAR_5);
  if (VAR_8 < 0)
   return VAR_8;
 }
 FUNC_1(VAR_5, 0, sizeof(VAR_5));
 return 0;
}
