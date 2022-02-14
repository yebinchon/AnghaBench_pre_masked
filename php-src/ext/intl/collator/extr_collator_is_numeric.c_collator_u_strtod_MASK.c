
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int UChar ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 double FUNC_4 (char*,int *) ;

__attribute__((used)) static double FUNC_5(const UChar *VAR_1, UChar **VAR_2)
{
 const UChar *VAR_3 = VAR_1, *VAR_4;
 UChar VAR_5 = *VAR_3;
 int VAR_6 = 0;

 while (FUNC_3(VAR_5)) {
  VAR_5 = *++VAR_3;
 }
 VAR_4 = VAR_3;

 if (VAR_5 == 0x2D || VAR_5 == 0x2B ) {
  VAR_5 = *++VAR_3;
 }

 while (VAR_5 >= 0x30 && VAR_5 <= 0x39 ) {
  VAR_6 = 1;
  VAR_5 = *++VAR_3;
 }

 if (VAR_5 == 0x2E ) {
  VAR_5 = *++VAR_3;
  while (VAR_5 >= 0x30 && VAR_5 <= 0x39 ) {
   VAR_6 = 1;
   VAR_5 = *++VAR_3;
  }
 }

 if ((VAR_5 == 0x65 || VAR_5 == 0x45 ) && VAR_6) {
  const UChar *VAR_7 = VAR_3;
  int VAR_8 = 0;

  VAR_5 = *++VAR_3;
  if (VAR_5 == 0x2D || VAR_5 == 0x2B ) {
   VAR_5 = *++VAR_3;
  }

  while (VAR_5 >= 0x30 && VAR_5 <= 0x39 ) {
   VAR_8 = 1;
   VAR_5 = *++VAR_3;
  }

  if (!VAR_8) {
   VAR_3 = VAR_7;
  }
 }

 if (VAR_6) {
  char VAR_9[64], *VAR_10, *VAR_11;
  size_t VAR_12 = VAR_3 - VAR_4;
  double VAR_13;
  FUNC_0(VAR_0);

  if (VAR_12 < sizeof(VAR_9)) {
   VAR_10 = VAR_9;
  } else {
   VAR_10 = (char *) FUNC_1(VAR_12 + 1, VAR_0);
  }

  VAR_11 = VAR_10;

  while (VAR_4 < VAR_3) {
   *VAR_11++ = (char) *VAR_4++;
  }

  *VAR_11 = '\0';
  VAR_13 = FUNC_4(VAR_10, ((void*)0));

  if (VAR_10 != VAR_9) {
   FUNC_2(VAR_10, VAR_0);
  }

  if (VAR_2 != ((void*)0)) {
   *VAR_2 = (UChar *)VAR_3;
  }

  return VAR_13;
 }

 if (VAR_2 != ((void*)0)) {
  *VAR_2 = (UChar *)VAR_1;
 }

 return 0;
}
