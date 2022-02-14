
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum isn_type { ____Placeholder_isn_type } isn_type ;
typedef int eanbuf ;
typedef int ean13 ;


 int VAR_0 ;
 char* VAR_1 ;
 unsigned int const** VAR_2 ;
 char const*** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 unsigned int** VAR_7 ;
 unsigned int** VAR_8 ;
 char*** VAR_9 ;
 char*** VAR_10 ;

 unsigned int** VAR_11 ;
 char*** VAR_12 ;

 unsigned int** VAR_13 ;
 char*** VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;

 unsigned int** VAR_16 ;
 char*** VAR_17 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,int ) ;
 unsigned int FUNC_8 (char*,char*,char const***,unsigned int const**) ;
 int * VAR_18 ;
 int FUNC_9 (char*,int,char*,int) ;
 scalar_t__ FUNC_10 (char*,char*,unsigned int) ;

__attribute__((used)) static bool
FUNC_11(ean13 VAR_19, bool VAR_20, char *VAR_21, bool VAR_22)
{
 const char *(*VAR_23)[2];
 const unsigned (*VAR_24)[2];
 enum isn_type VAR_25 = VAR_6;

 char *VAR_26;
 unsigned VAR_27;
 unsigned VAR_28;
 char VAR_29 = '\0';


 VAR_24 = VAR_7;

 if ((VAR_19 & 1) != 0)
  VAR_29 = '!';
 VAR_19 >>= 1;

 if (VAR_19 > FUNC_0(9999999999999))
  goto eantoobig;


 VAR_28 = 0;
 VAR_26 = VAR_21 + VAR_15;
 *VAR_26 = '\0';
 *--VAR_26 = VAR_29;

 do
 {
  VAR_27 = (unsigned) (VAR_19 % 10);
  VAR_19 /= 10;
  *--VAR_26 = (char) (VAR_27 + '0');
  if (VAR_28 == 0)
   *--VAR_26 = '-';
 } while (VAR_19 && VAR_28++ < 13);
 while (VAR_28++ < 13)
  *--VAR_26 = '0';


 VAR_28 = FUNC_8(VAR_21, VAR_21 + 3, VAR_3, VAR_2);


 if (VAR_28 == 0)
 {
  VAR_28 = FUNC_8(VAR_21, VAR_21 + 3, ((void*)0), ((void*)0));
  goto okay;
 }


 if (FUNC_10("978-", VAR_21, VAR_28) == 0)
 {

  VAR_25 = 131;
  VAR_23 = VAR_9;
  VAR_24 = VAR_7;
 }
 else if (FUNC_10("977-", VAR_21, VAR_28) == 0)
 {

  VAR_25 = 129;
  VAR_23 = VAR_14;
  VAR_24 = VAR_13;
 }
 else if (FUNC_10("979-0", VAR_21, VAR_28 + 1) == 0)
 {

  VAR_25 = 130;
  VAR_23 = VAR_12;
  VAR_24 = VAR_11;
 }
 else if (FUNC_10("979-", VAR_21, VAR_28) == 0)
 {

  VAR_25 = 131;
  VAR_23 = VAR_10;
  VAR_24 = VAR_8;
 }
 else if (*VAR_21 == '0')
 {

  VAR_25 = 128;
  VAR_23 = VAR_17;
  VAR_24 = VAR_16;
 }
 else
 {
  VAR_25 = VAR_0;
  VAR_23 = ((void*)0);
  VAR_24 = ((void*)0);
 }


 VAR_27 = VAR_28;
 VAR_28 = FUNC_8(VAR_21 + VAR_27, VAR_21 + VAR_27 + 2, VAR_23, VAR_24);


 if (VAR_28 == 0)
 {
  VAR_28 = FUNC_8(VAR_21 + VAR_27, VAR_21 + VAR_27 + 2, ((void*)0), ((void*)0));
  goto okay;
 }

okay:

 if (VAR_22)
  switch (VAR_25)
  {
   case 131:
    FUNC_1(VAR_21);
    break;
   case 130:
    FUNC_2(VAR_21);
    break;
   case 129:
    FUNC_3(VAR_21);
    break;
   case 128:
    FUNC_4(VAR_21);
    break;
   default:
    break;
  }
 return 1;

eantoobig:
 if (!VAR_20)
 {
  char VAR_30[64];





  FUNC_9(VAR_30, sizeof(VAR_30), VAR_1, VAR_19);
  FUNC_5(VAR_5,
    (FUNC_6(VAR_4),
     FUNC_7("value \"%s\" is out of range for %s type",
      VAR_30, VAR_18[VAR_25])));
 }
 return 0;
}
