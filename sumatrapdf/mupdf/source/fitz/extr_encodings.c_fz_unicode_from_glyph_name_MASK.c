
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (int *) ;
 int* VAR_1 ;
 int * VAR_2 ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int *,int) ;

int
FUNC_5(const char *VAR_3)
{
 char VAR_4[64];
 char *VAR_5;
 int VAR_6 = 0;
 int VAR_7 = FUNC_1(VAR_2) - 1;
 int VAR_8 = 0;

 FUNC_0(VAR_4, VAR_3, sizeof VAR_4);


 VAR_5 = FUNC_2(VAR_4, '.');
 if (VAR_5) VAR_5[0] = 0;
 VAR_5 = FUNC_2(VAR_4, '_');
 if (VAR_5) VAR_5[0] = 0;

 while (VAR_6 <= VAR_7)
 {
  int VAR_9 = (VAR_6 + VAR_7) >> 1;
  int VAR_10 = FUNC_3(VAR_4, VAR_2[VAR_9]);
  if (VAR_10 < 0)
   VAR_7 = VAR_9 - 1;
  else if (VAR_10 > 0)
   VAR_6 = VAR_9 + 1;
  else
   return VAR_1[VAR_9];
 }

 if (VAR_4[0] == 'u' && VAR_4[1] == 'n' && VAR_4[2] == 'i')
  VAR_8 = FUNC_4(VAR_4 + 3, ((void*)0), 16);
 else if (VAR_4[0] == 'u')
  VAR_8 = FUNC_4(VAR_4 + 1, ((void*)0), 16);
 else if (VAR_4[0] == 'a' && VAR_4[1] != 0 && VAR_4[2] != 0)
  VAR_8 = FUNC_4(VAR_4 + 1, ((void*)0), 10);

 return (VAR_8 > 0 && VAR_8 <= 0x10ffff) ? VAR_8 : VAR_0;
}
