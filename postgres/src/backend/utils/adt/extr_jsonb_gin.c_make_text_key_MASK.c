
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int text ;
typedef int hashbuf ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 char VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 char* FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (unsigned char const*,int) ;
 int FUNC_5 (char*,char const*,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int,char*,int) ;

__attribute__((used)) static Datum
FUNC_8(char VAR_3, const char *VAR_4, int VAR_5)
{
 text *VAR_6;
 char VAR_7[10];

 if (VAR_5 > VAR_1)
 {
  uint32 VAR_8;

  VAR_8 = FUNC_0(FUNC_4((const unsigned char *) VAR_4, VAR_5));
  FUNC_7(VAR_7, sizeof(VAR_7), "%08x", VAR_8);
  VAR_4 = VAR_7;
  VAR_5 = 8;
  VAR_3 |= VAR_0;
 }






 VAR_6 = (text *) FUNC_6(VAR_2 + VAR_5 + 1);
 FUNC_2(VAR_6, VAR_2 + VAR_5 + 1);

 *FUNC_3(VAR_6) = VAR_3;

 FUNC_5(FUNC_3(VAR_6) + 1, VAR_4, VAR_5);

 return FUNC_1(VAR_6);
}
