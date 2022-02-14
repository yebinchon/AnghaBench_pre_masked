
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8 ;
typedef int PX_MD ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned long,int) ;
 int FUNC_1 (char*,int **) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char const*,int) ;
 int FUNC_6 (unsigned char*,int ,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*,char const*,int) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;

char *
FUNC_12(const char *VAR_1, const char *VAR_2, char *VAR_3, unsigned VAR_4)
{
 static char *VAR_5 = "$1$";


 static char *VAR_6;
 static const char *VAR_7,
      *VAR_8;
 unsigned char VAR_9[VAR_0];
 int VAR_10,
    VAR_11,
    VAR_12;
 PX_MD *VAR_13,
      *VAR_14;
 int VAR_15;
 unsigned long VAR_16;

 if (!VAR_3 || VAR_4 < 120)
  return ((void*)0);


 VAR_7 = VAR_2;


 if (FUNC_11(VAR_7, VAR_5, FUNC_9(VAR_5)) == 0)
  VAR_7 += FUNC_9(VAR_5);


 for (VAR_8 = VAR_7; *VAR_8 && *VAR_8 != '$' && VAR_8 < (VAR_7 + 8); VAR_8++)
  continue;


 VAR_10 = VAR_8 - VAR_7;


 VAR_15 = FUNC_1("md5", &VAR_13);
 if (VAR_15)
  return ((void*)0);
 VAR_15 = FUNC_1("md5", &VAR_14);


 FUNC_5(VAR_13, (const uint8 *) VAR_1, FUNC_9(VAR_1));


 FUNC_5(VAR_13, (uint8 *) VAR_5, FUNC_9(VAR_5));


 FUNC_5(VAR_13, (const uint8 *) VAR_7, VAR_10);


 FUNC_5(VAR_14, (const uint8 *) VAR_1, FUNC_9(VAR_1));
 FUNC_5(VAR_14, (const uint8 *) VAR_7, VAR_10);
 FUNC_5(VAR_14, (const uint8 *) VAR_1, FUNC_9(VAR_1));
 FUNC_2(VAR_14, VAR_9);
 for (VAR_11 = FUNC_9(VAR_1); VAR_11 > 0; VAR_11 -= VAR_0)
  FUNC_5(VAR_13, VAR_9, VAR_11 > VAR_0 ? VAR_0 : VAR_11);


 FUNC_6(VAR_9, 0, sizeof VAR_9);


 for (VAR_12 = FUNC_9(VAR_1); VAR_12; VAR_12 >>= 1)
  if (VAR_12 & 1)
   FUNC_5(VAR_13, VAR_9, 1);
  else
   FUNC_5(VAR_13, (const uint8 *) VAR_1, 1);


 FUNC_8(VAR_3, VAR_5);
 FUNC_10(VAR_3, VAR_7, VAR_10);
 FUNC_7(VAR_3, "$");

 FUNC_2(VAR_13, VAR_9);






 for (VAR_12 = 0; VAR_12 < 1000; VAR_12++)
 {
  FUNC_4(VAR_14);
  if (VAR_12 & 1)
   FUNC_5(VAR_14, (const uint8 *) VAR_1, FUNC_9(VAR_1));
  else
   FUNC_5(VAR_14, VAR_9, VAR_0);

  if (VAR_12 % 3)
   FUNC_5(VAR_14, (const uint8 *) VAR_7, VAR_10);

  if (VAR_12 % 7)
   FUNC_5(VAR_14, (const uint8 *) VAR_1, FUNC_9(VAR_1));

  if (VAR_12 & 1)
   FUNC_5(VAR_14, VAR_9, VAR_0);
  else
   FUNC_5(VAR_14, (const uint8 *) VAR_1, FUNC_9(VAR_1));
  FUNC_2(VAR_14, VAR_9);
 }

 VAR_6 = VAR_3 + FUNC_9(VAR_3);

 VAR_16 = (VAR_9[0] << 16) | (VAR_9[6] << 8) | VAR_9[12];
 FUNC_0(VAR_6, VAR_16, 4);
 VAR_6 += 4;
 VAR_16 = (VAR_9[1] << 16) | (VAR_9[7] << 8) | VAR_9[13];
 FUNC_0(VAR_6, VAR_16, 4);
 VAR_6 += 4;
 VAR_16 = (VAR_9[2] << 16) | (VAR_9[8] << 8) | VAR_9[14];
 FUNC_0(VAR_6, VAR_16, 4);
 VAR_6 += 4;
 VAR_16 = (VAR_9[3] << 16) | (VAR_9[9] << 8) | VAR_9[15];
 FUNC_0(VAR_6, VAR_16, 4);
 VAR_6 += 4;
 VAR_16 = (VAR_9[4] << 16) | (VAR_9[10] << 8) | VAR_9[5];
 FUNC_0(VAR_6, VAR_16, 4);
 VAR_6 += 4;
 VAR_16 = VAR_9[11];
 FUNC_0(VAR_6, VAR_16, 2);
 VAR_6 += 2;
 *VAR_6 = '\0';


 FUNC_6(VAR_9, 0, sizeof VAR_9);

 FUNC_3(VAR_14);
 FUNC_3(VAR_13);

 return VAR_3;
}
