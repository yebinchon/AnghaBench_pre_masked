
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ FUNC_7 (int) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static char **
FUNC_10(const char *VAR_1)
{
 FILE *VAR_2;
 int VAR_3 = 1,
    VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6;
 char **VAR_7;
 char *VAR_8;
 int VAR_9;

 if ((VAR_2 = FUNC_4(VAR_1, "r")) == ((void*)0))
 {
  FUNC_6("could not open file \"%s\" for reading: %m", VAR_1);
  FUNC_0(1);
 }



 while ((VAR_9 = FUNC_2(VAR_2)) != VAR_0)
 {
  VAR_4++;
  if (VAR_9 == '\n')
  {
   VAR_5++;
   if (VAR_4 > VAR_3)
    VAR_3 = VAR_4;
   VAR_4 = 0;
  }
 }


 if (VAR_4)
  VAR_5++;
 if (VAR_4 > VAR_3)
  VAR_3 = VAR_4;


 VAR_7 = (char **) FUNC_7((VAR_5 + 1) * sizeof(char *));
 VAR_8 = (char *) FUNC_7(VAR_3 + 1);


 FUNC_9(VAR_2);
 VAR_6 = 0;
 while (FUNC_3(VAR_8, VAR_3 + 1, VAR_2) != ((void*)0) && VAR_6 < VAR_5)
  VAR_7[VAR_6++] = FUNC_8(VAR_8);

 FUNC_1(VAR_2);
 FUNC_5(VAR_8);
 VAR_7[VAR_6] = ((void*)0);

 return VAR_7;
}
