
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_3, int VAR_4, int VAR_5, unsigned char *VAR_6)
{
 int VAR_7 = 0;
 if (VAR_5 < 1 || VAR_5 > 128) {
  return 0;
 }


 if (VAR_4 == VAR_1 && VAR_5 < 3) {
  int VAR_8 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
   VAR_7 += 2;
   FUNC_1(VAR_3, 1, 1);
   VAR_3++;

   FUNC_0(VAR_3, VAR_6++, 1);
   VAR_3++;
  }
 } else if (VAR_4 == VAR_2) {
  VAR_7 = 2;
  FUNC_1(VAR_3, VAR_5, 1);
  VAR_3++;

  FUNC_0(VAR_3, VAR_6, 1);
  VAR_3++;
 } else {
  VAR_7 = 2 + VAR_5;
  FUNC_1(VAR_3, VAR_0, 1);
  VAR_3++;

  FUNC_1(VAR_3, VAR_5, 1);
  VAR_3++;

  FUNC_0(VAR_3, VAR_6, VAR_5);
  VAR_3 += VAR_5;


  if (VAR_5 % 2) {
   FUNC_1(VAR_3, 0, 1);
   VAR_3++;
   VAR_7++;
  }
 }
 return VAR_7;
}
