
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int fullpath ;
typedef int Size ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,char*,...) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (char*,int,char*,char const*,char const*) ;

char *
FUNC_7(const char *VAR_3, const char *VAR_4, size_t *VAR_5)
{
 int VAR_6;
 char *VAR_7;
 struct stat VAR_8;
 char VAR_9[VAR_0];
 int VAR_10;
 int VAR_11;

 FUNC_6(VAR_9, sizeof(VAR_9), "%s/%s", VAR_3, VAR_4);

 if ((VAR_6 = FUNC_2(VAR_9, VAR_1 | VAR_2, 0)) == -1)
  FUNC_3("could not open file \"%s\" for reading: %m",
     VAR_9);

 if (FUNC_1(VAR_6, &VAR_8) < 0)
  FUNC_3("could not open file \"%s\" for reading: %m",
     VAR_9);

 VAR_10 = VAR_8.st_size;

 VAR_7 = FUNC_4(VAR_10 + 1);

 VAR_11 = FUNC_5(VAR_6, VAR_7, VAR_10);
 if (VAR_11 != VAR_10)
 {
  if (VAR_11 < 0)
   FUNC_3("could not read file \"%s\": %m",
      VAR_9);
  else
   FUNC_3("could not read file \"%s\": read %d of %zu",
      VAR_9, VAR_11, (Size) VAR_10);
 }
 FUNC_0(VAR_6);


 VAR_7[VAR_10] = '\0';

 if (VAR_5)
  *VAR_5 = VAR_10;
 return VAR_7;
}
