
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bits8 ;
typedef int Datum ;
typedef int ArrayType ;


 char* FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int,char,char*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

void
FUNC_6(ArrayType *VAR_1,
    Datum *VAR_2,
    bool *VAR_3,
    int VAR_4,
    int VAR_5,
    bool VAR_6,
    char VAR_7,
    bool VAR_8)
{
 char *VAR_9 = FUNC_0(VAR_1);
 bits8 *VAR_10 = FUNC_1(VAR_1);
 int VAR_11 = 0;
 int VAR_12 = 1;
 int VAR_13;

 if (VAR_6)
  VAR_8 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
 {
  if (VAR_3 && VAR_3[VAR_13])
  {
   if (!VAR_10)
    FUNC_4(VAR_0, "null array element where not supported");

  }
  else
  {
   VAR_11 |= VAR_12;
   VAR_9 += FUNC_2(VAR_2[VAR_13], VAR_5, VAR_6, VAR_7, VAR_9);
   if (VAR_8)
    FUNC_5(FUNC_3(VAR_2[VAR_13]));
  }
  if (VAR_10)
  {
   VAR_12 <<= 1;
   if (VAR_12 == 0x100)
   {
    *VAR_10++ = VAR_11;
    VAR_11 = 0;
    VAR_12 = 1;
   }
  }
 }

 if (VAR_10 && VAR_12 != 1)
  *VAR_10 = VAR_11;
}
