
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int BZFILE ;


 int * FUNC_0 (int*,int *,int,int,char*,int) ;
 int * FUNC_1 (int*,int *,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,char*) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (int) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static
BZFILE * FUNC_9
               ( const char *VAR_4,
                 int VAR_5,
                 const char *VAR_6,
                 int VAR_7)
{
   int VAR_8;
   char VAR_9[VAR_1];
   int VAR_10 = 9;
   int VAR_11 = 0;
   char VAR_12[10] = "";
   FILE *VAR_13 = ((void*)0);
   BZFILE *VAR_14 = ((void*)0);
   int VAR_15 = 0;
   int VAR_16 = 30;
   int VAR_17 = 0;
   int VAR_18 = 0;

   if (VAR_6 == ((void*)0)) return ((void*)0);
   while (*VAR_6) {
      switch (*VAR_6) {
      case 'r':
         VAR_11 = 0; break;
      case 'w':
         VAR_11 = 1; break;
      case 's':
         VAR_17 = 1; break;
      default:
         if (FUNC_6((int)(*VAR_6))) {
            VAR_10 = *VAR_6-VAR_0;
         }
      }
      VAR_6++;
   }
   FUNC_7(VAR_12, VAR_11 ? "w" : "r" );
   FUNC_7(VAR_12,"b");

   if (VAR_7==0) {
      if (VAR_4==((void*)0) || FUNC_8(VAR_4,"")==0) {
        VAR_13 = (VAR_11 ? VAR_3 : VAR_2);
        FUNC_2(VAR_13);
      } else {
        VAR_13 = FUNC_5(VAR_4,VAR_12);
      }
   } else {



      VAR_13 = FUNC_4(VAR_5,VAR_12);

   }
   if (VAR_13 == ((void*)0)) return ((void*)0);

   if (VAR_11) {

      if (VAR_10 < 1) VAR_10 = 1;
      if (VAR_10 > 9) VAR_10 = 9;
      VAR_14 = FUNC_1(&VAR_8,VAR_13,VAR_10,
                             VAR_15,VAR_16);
   } else {
      VAR_14 = FUNC_0(&VAR_8,VAR_13,VAR_15,VAR_17,
                            VAR_9,VAR_18);
   }
   if (VAR_14 == ((void*)0)) {
      if (VAR_13 != VAR_2 && VAR_13 != VAR_3) FUNC_3(VAR_13);
      return ((void*)0);
   }
   return VAR_14;
}
