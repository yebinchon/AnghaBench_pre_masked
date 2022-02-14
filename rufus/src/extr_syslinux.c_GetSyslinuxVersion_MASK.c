
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unauthorized ;
typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int LINUX ;


 scalar_t__ FUNC_0 (char*,char const*,int) ;
 size_t FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char**,int) ;

uint16_t FUNC_3(char* VAR_0, size_t VAR_1, char** VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5;
 char *VAR_6;
 uint16_t VAR_7;
 const char VAR_8[] = { 'L', 'I', 'N', 'U', 'X', ' ' };
 static char* VAR_9 = "";
 char VAR_10[] = {'<', '>', ':', '|', '*', '?', '\\', '/'};

 *VAR_2 = VAR_9;
 if (VAR_1 < 256)
  return 0;


 for (VAR_3=64; VAR_3<VAR_1-64; VAR_3++) {
  if (FUNC_0(&VAR_0[VAR_3], VAR_8, sizeof(VAR_8)) == 0) {

   if (!( ((VAR_0[VAR_3-3] == 'I') && (VAR_0[VAR_3-2] == 'S') && (VAR_0[VAR_3-1] == 'O'))
       || ((VAR_0[VAR_3-3] == 'S') && (VAR_0[VAR_3-2] == 'Y') && (VAR_0[VAR_3-1] == 'S')) ))
     continue;
   VAR_3 += sizeof(VAR_8);
   VAR_7 = (((uint8_t)FUNC_2(&VAR_0[VAR_3], &VAR_6, 10))<<8) + (uint8_t)FUNC_2(&VAR_6[1], &VAR_6, 10);
   if (VAR_7 == 0)
    continue;
   VAR_6[FUNC_1(VAR_6)] = 0;

   *VAR_6 = '/';

   for (VAR_4=0; (VAR_0[VAR_3+VAR_4] == VAR_6[1+VAR_4]) && (VAR_0[VAR_3+VAR_4] != ' '); VAR_4++);
   if (VAR_6[VAR_4+1] == '-')
    VAR_4++;
   if (VAR_4 >= 4) {
    VAR_6[VAR_4] = '/';
    VAR_6 = &VAR_6[VAR_4];
   }
   for (VAR_4=FUNC_1(VAR_6)-1; VAR_4>0; VAR_4--) {

    if ((VAR_6[VAR_4] == ' ') || (VAR_6[VAR_4] == '*'))
     VAR_6[VAR_4] = 0;
    else
     break;
   }

   for (VAR_4=1; VAR_4<FUNC_1(VAR_6); VAR_4++) {

    for (VAR_5=0; VAR_5<sizeof(VAR_10); VAR_5++) {
     if (VAR_6[VAR_4] == VAR_10[VAR_5])
      VAR_6[VAR_4] = '_';
    }
   }

   *VAR_2 = (VAR_6[1] == 0)?VAR_9:VAR_6;
   return VAR_7;
  }
 }
 return 0;
}
