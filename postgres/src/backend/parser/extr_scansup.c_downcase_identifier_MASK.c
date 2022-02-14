
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned char) ;
 char* FUNC_2 (int) ;
 int FUNC_3 () ;
 unsigned char FUNC_4 (unsigned char) ;
 int FUNC_5 (char*,int,int) ;

char *
FUNC_6(const char *VAR_1, int VAR_2, bool VAR_3, bool VAR_4)
{
 char *VAR_5;
 int VAR_6;
 bool VAR_7;

 VAR_5 = FUNC_2(VAR_2 + 1);
 VAR_7 = FUNC_3() == 1;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
 {
  unsigned char VAR_8 = (unsigned char) VAR_1[VAR_6];

  if (VAR_8 >= 'A' && VAR_8 <= 'Z')
   VAR_8 += 'a' - 'A';
  else if (VAR_7 && FUNC_0(VAR_8) && FUNC_1(VAR_8))
   VAR_8 = FUNC_4(VAR_8);
  VAR_5[VAR_6] = (char) VAR_8;
 }
 VAR_5[VAR_6] = '\0';

 if (VAR_6 >= VAR_0 && VAR_4)
  FUNC_5(VAR_5, VAR_6, VAR_3);

 return VAR_5;
}
