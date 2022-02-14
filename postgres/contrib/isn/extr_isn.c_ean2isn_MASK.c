
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum isn_type { ____Placeholder_isn_type } isn_type ;
typedef int eanbuf ;
typedef int ean13 ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int ,...) ;
 int * VAR_12 ;
 int FUNC_4 (char*,int,char*,int) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static bool
FUNC_6(ean13 VAR_13, bool VAR_14, ean13 *VAR_15, enum isn_type VAR_16)
{
 enum isn_type VAR_17 = VAR_6;

 char VAR_18[VAR_10 + 1];
 char *VAR_19;
 unsigned VAR_20;
 unsigned VAR_21;
 ean13 VAR_22 = VAR_13;

 VAR_13 >>= 1;

 if (VAR_13 > FUNC_0(9999999999999))
  goto eantoobig;


 VAR_21 = 0;
 VAR_19 = VAR_18 + 13;
 *VAR_19 = '\0';
 do
 {
  VAR_20 = (unsigned) (VAR_13 % 10);
  VAR_13 /= 10;
  *--VAR_19 = (char) (VAR_20 + '0');
 } while (VAR_13 && VAR_21++ < 12);
 while (VAR_21++ < 12)
  *--VAR_19 = '0';


 if (FUNC_5("978", VAR_18, 3) == 0)
 {
  VAR_17 = VAR_7;
 }
 else if (FUNC_5("977", VAR_18, 3) == 0)
 {
  VAR_17 = VAR_9;
 }
 else if (FUNC_5("9790", VAR_18, 4) == 0)
 {
  VAR_17 = VAR_8;
 }
 else if (FUNC_5("979", VAR_18, 3) == 0)
 {
  VAR_17 = VAR_7;
 }
 else if (*VAR_18 == '0')
 {
  VAR_17 = VAR_11;
 }
 else
 {
  VAR_17 = VAR_1;
 }
 if (VAR_16 != VAR_0 && VAR_16 != VAR_1 && VAR_16 != VAR_17)
  goto eanwrongtype;

 *VAR_15 = VAR_22;
 return 1;

eanwrongtype:
 if (!VAR_14)
 {
  if (VAR_17 != VAR_1)
  {
   FUNC_1(VAR_5,
     (FUNC_2(VAR_3),
      FUNC_3("cannot cast EAN13(%s) to %s for number: \"%s\"",
       VAR_12[VAR_17], VAR_12[VAR_16], VAR_18)));
  }
  else
  {
   FUNC_1(VAR_5,
     (FUNC_2(VAR_3),
      FUNC_3("cannot cast %s to %s for number: \"%s\"",
       VAR_12[VAR_17], VAR_12[VAR_16], VAR_18)));
  }
 }
 return 0;

eantoobig:
 if (!VAR_14)
 {
  char VAR_23[64];





  FUNC_4(VAR_23, sizeof(VAR_23), VAR_2, VAR_13);
  FUNC_1(VAR_5,
    (FUNC_2(VAR_4),
     FUNC_3("value \"%s\" is out of range for %s type",
      VAR_23, VAR_12[VAR_17])));
 }
 return 0;
}
