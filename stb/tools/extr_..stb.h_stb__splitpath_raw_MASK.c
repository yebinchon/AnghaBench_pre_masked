
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,int,char*,int) ;
 char* FUNC_3 (char*,char,char) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static char *FUNC_6(char *VAR_4, char *VAR_5, int VAR_6)
{
   ptrdiff_t VAR_7=0,VAR_8,VAR_9, VAR_10 = (int) FUNC_4(VAR_5), VAR_11,VAR_12;
   char *VAR_13 = FUNC_3(VAR_5, '/', '\\');
   char *VAR_14 = FUNC_5(VAR_5, '.');
   if (VAR_13 && VAR_14 && VAR_14 < VAR_13) VAR_14 = ((void*)0);
   if (VAR_13) ++VAR_13;

   if (VAR_6 == VAR_1)
      VAR_6 |= VAR_0;

   if (!(VAR_6 & (VAR_3 | VAR_2 | VAR_0))) return ((void*)0);

   VAR_11 = VAR_13 == ((void*)0) ? 0 : VAR_13-VAR_5;
   VAR_12 = VAR_14 == ((void*)0) ? VAR_10 : VAR_14-VAR_5;

   if (VAR_6 & VAR_3) {
      VAR_8 = 0; if (VAR_11 == 0 && VAR_6 == VAR_3) VAR_7=2;
   } else if (VAR_6 & VAR_2) {
      VAR_8 = VAR_11;
   } else {
      VAR_8 = VAR_12;
      if (VAR_6 & VAR_1)
         if (VAR_4[VAR_8] == '.')
            ++VAR_8;
   }

   if (VAR_6 & VAR_0)
      VAR_9 = VAR_10;
   else if (VAR_6 & VAR_2)
      VAR_9 = VAR_12;
   else
      VAR_9 = VAR_11;

   if (VAR_4 == ((void*)0)) {
      VAR_4 = (char *) FUNC_0(VAR_9-VAR_8 + VAR_7 + 1);
      if (!VAR_4) return ((void*)0);
   }

   if (VAR_7) { FUNC_1(VAR_4, sizeof(VAR_4), "./"); return VAR_4; }
   FUNC_2(VAR_4, sizeof(VAR_4),VAR_5+VAR_8, VAR_9-VAR_8);
   VAR_4[VAR_9-VAR_8] = 0;
   return VAR_4;
}
