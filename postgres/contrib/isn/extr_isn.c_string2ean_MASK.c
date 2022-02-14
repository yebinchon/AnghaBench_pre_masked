
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum isn_type { ____Placeholder_isn_type } isn_type ;
typedef int ean13 ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 void* FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,char const*,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (unsigned char) ;
 char const** VAR_6 ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 void* FUNC_8 (unsigned char) ;
 unsigned int FUNC_9 (char*,int) ;

__attribute__((used)) static bool
FUNC_10(const char *VAR_7, bool VAR_8, ean13 *VAR_9,
     enum isn_type VAR_10)
{
 bool VAR_11,
    VAR_12;
 char VAR_13[17] = "                ";
 char *VAR_14 = VAR_13 + 3;

 const char *VAR_15 = VAR_7;
 enum isn_type VAR_16 = VAR_4;
 unsigned VAR_17 = 0,
    VAR_18 = (unsigned) -1;
 unsigned VAR_19 = 0;
 bool VAR_20 = 0,
    VAR_21 = 1;


 while (*VAR_15 && VAR_19 <= 13)
 {
  VAR_12 = (*(VAR_15 + 1) == '!' || *(VAR_15 + 1) == '\0');
  VAR_11 = (FUNC_4((unsigned char) *VAR_15) != 0);

  if (*VAR_15 == '?' && VAR_12)

   VAR_20 = VAR_11 = 1;
  if (VAR_19 == 0 && (*VAR_15 == 'M' || *VAR_15 == 'm'))
  {

   if (VAR_16 != VAR_4)
    goto eaninvalid;
   VAR_16 = 130;
   *VAR_14++ = 'M';
   VAR_19++;
  }
  else if (VAR_19 == 7 && (VAR_11 || *VAR_15 == 'X' || *VAR_15 == 'x') && VAR_12)
  {

   if (VAR_16 != VAR_4)
    goto eaninvalid;
   VAR_16 = 129;
   *VAR_14++ = FUNC_8((unsigned char) *VAR_15);
   VAR_19++;
  }
  else if (VAR_19 == 9 && (VAR_11 || *VAR_15 == 'X' || *VAR_15 == 'x') && VAR_12)
  {

   if (VAR_16 != VAR_4 && VAR_16 != 130)
    goto eaninvalid;
   if (VAR_16 == VAR_4)
    VAR_16 = 131;
   *VAR_14++ = FUNC_8((unsigned char) *VAR_15);
   VAR_19++;
  }
  else if (VAR_19 == 11 && VAR_11 && VAR_12)
  {

   if (VAR_16 != VAR_4)
    goto eaninvalid;
   VAR_16 = 128;
   *VAR_14++ = *VAR_15;
   VAR_19++;
  }
  else if (*VAR_15 == '-' || *VAR_15 == ' ')
  {

  }
  else if (*VAR_15 == '!' && *(VAR_15 + 1) == '\0')
  {

   if (!VAR_20)
    VAR_21 = 0;
   VAR_20 = 1;
  }
  else if (!VAR_11)
  {
   goto eaninvalid;
  }
  else
  {
   *VAR_14++ = *VAR_15;
   if (++VAR_19 > 13)
    goto eantoobig;
  }
  VAR_15++;
 }
 *VAR_14 = '\0';


 if (VAR_19 == 13)
 {

  if (VAR_16 != VAR_4)
   goto eaninvalid;
  VAR_16 = 132;
  VAR_17 = VAR_13[15] - '0';
 }
 else if (VAR_19 == 12)
 {

  if (VAR_16 != 128)
   goto eaninvalid;
  VAR_17 = VAR_13[14] - '0';
 }
 else if (VAR_19 == 10)
 {
  if (VAR_16 != 131 && VAR_16 != 130)
   goto eaninvalid;
  if (VAR_13[12] == 'X')
   VAR_17 = 10;
  else
   VAR_17 = VAR_13[12] - '0';
 }
 else if (VAR_19 == 8)
 {
  if (VAR_16 != VAR_4 && VAR_16 != 129)
   goto eaninvalid;
  VAR_16 = 129;
  if (VAR_13[10] == 'X')
   VAR_17 = 10;
  else
   VAR_17 = VAR_13[10] - '0';
 }
 else
  goto eaninvalid;

 if (VAR_16 == VAR_4)
  goto eaninvalid;


 if (VAR_10 == 132 && VAR_16 != VAR_10)
  goto eanwrongtype;
 if (VAR_10 != VAR_0 && VAR_16 != 132 && VAR_16 != VAR_10)
  goto eanwrongtype;
 switch (VAR_16)
 {
  case 132:
   VAR_21 = (VAR_21 && ((VAR_18 = FUNC_0(VAR_13 + 3, 13)) == VAR_17 || VAR_20));

   if (VAR_13[3] == '0')
    VAR_16 = 128;
   else if (FUNC_7("977", VAR_13 + 3, 3) == 0)
    VAR_16 = 129;
   else if (FUNC_7("978", VAR_13 + 3, 3) == 0)
    VAR_16 = 131;
   else if (FUNC_7("9790", VAR_13 + 3, 4) == 0)
    VAR_16 = 130;
   else if (FUNC_7("979", VAR_13 + 3, 3) == 0)
    VAR_16 = 131;
   if (VAR_10 != 132 && VAR_10 != VAR_0 && VAR_16 != VAR_10)
    goto eanwrongtype;
   break;
  case 130:
   FUNC_5(VAR_13, "9790", 4);

   VAR_21 = (VAR_21 && ((VAR_18 = FUNC_0(VAR_13, 13)) == VAR_17 || VAR_20));
   break;
  case 131:
   FUNC_5(VAR_13, "978", 3);
   VAR_21 = (VAR_21 && ((VAR_18 = FUNC_9(VAR_13 + 3, 10)) == VAR_17 || VAR_20));
   break;
  case 129:
   FUNC_5(VAR_13 + 10, "00", 2);

   FUNC_5(VAR_13, "977", 3);
   VAR_21 = (VAR_21 && ((VAR_18 = FUNC_9(VAR_13 + 3, 8)) == VAR_17 || VAR_20));
   break;
  case 128:
   VAR_13[2] = '0';
   VAR_21 = (VAR_21 && ((VAR_18 = FUNC_0(VAR_13 + 2, 13)) == VAR_17 || VAR_20));
  default:
   break;
 }


 for (VAR_14 = VAR_13; *VAR_14 && *VAR_14 <= ' '; VAR_14++);
 VAR_14[12] = FUNC_0(VAR_14, 13) + '0';
 VAR_14[13] = '\0';

 if (!VAR_21 && !VAR_20)
  goto eanbadcheck;

 *VAR_9 = FUNC_6(VAR_14);
 *VAR_9 |= VAR_21 ? 0 : 1;
 return 1;

eanbadcheck:
 if (VAR_5)
 {

  *VAR_9 = FUNC_6(VAR_14);
  *VAR_9 |= 1;
  return 1;
 }

 if (!VAR_8)
 {
  if (VAR_18 == (unsigned) -1)
  {
   FUNC_1(VAR_3,
     (FUNC_2(VAR_1),
      FUNC_3("invalid %s number: \"%s\"",
       VAR_6[VAR_10], VAR_7)));
  }
  else
  {
   FUNC_1(VAR_3,
     (FUNC_2(VAR_1),
      FUNC_3("invalid check digit for %s number: \"%s\", should be %c",
       VAR_6[VAR_10], VAR_7, (VAR_18 == 10) ? ('X') : (VAR_18 + '0'))));
  }
 }
 return 0;

eaninvalid:
 if (!VAR_8)
  FUNC_1(VAR_3,
    (FUNC_2(VAR_1),
     FUNC_3("invalid input syntax for %s number: \"%s\"",
      VAR_6[VAR_10], VAR_7)));
 return 0;

eanwrongtype:
 if (!VAR_8)
  FUNC_1(VAR_3,
    (FUNC_2(VAR_1),
     FUNC_3("cannot cast %s to %s for number: \"%s\"",
      VAR_6[VAR_16], VAR_6[VAR_10], VAR_7)));
 return 0;

eantoobig:
 if (!VAR_8)
  FUNC_1(VAR_3,
    (FUNC_2(VAR_2),
     FUNC_3("value \"%s\" is out of range for %s type",
      VAR_7, VAR_6[VAR_10])));
 return 0;
}
