
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (unsigned char*,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_6 (char const*,char) ;

void FUNC_7(const char *VAR_2, const char *VAR_3, const char *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7 = 0, VAR_8 = 0;
 const char *VAR_9;

 VAR_9 = VAR_3;
 while (1) {
  const char *VAR_10 = FUNC_6(VAR_9, '\n');
  int VAR_11;

  if (VAR_10 == ((void*)0))
   VAR_10 = FUNC_6(VAR_9, '\0');
  VAR_11 = VAR_10 - VAR_9;
  if (VAR_7 < VAR_11)
   VAR_7 = VAR_11;
  ++VAR_8;
  if (*VAR_10 == '\0')
   break;
  VAR_9 = VAR_10 + 1;
 }

 VAR_7 += 2;
 VAR_8 += 2;
 if (VAR_4)
  VAR_8 += 2;
 VAR_6 = VAR_1 / 2 - VAR_8 / 2,
 VAR_5 = VAR_0 / 2 - VAR_7 / 2;

 FUNC_2(0);
 FUNC_0(VAR_6, VAR_5++, VAR_8, VAR_7);
 if (VAR_2) {
  FUNC_1(VAR_6, VAR_5 + 1);
  FUNC_4((char *)VAR_2);
 }
 FUNC_1(++VAR_6, VAR_5);
 if (VAR_4)
  VAR_8 -= 2;
 VAR_7 -= 2;
 FUNC_5((unsigned char *)VAR_3, VAR_6, VAR_5,
       VAR_8, VAR_7, 1);
 if (VAR_4) {
  FUNC_1(VAR_6 + VAR_8 - 2, VAR_5);
  FUNC_3((char *)" ", VAR_7);
  FUNC_1(VAR_6 + VAR_8 - 1, VAR_5);
  FUNC_3((char *)VAR_4, VAR_7);
 }
}
