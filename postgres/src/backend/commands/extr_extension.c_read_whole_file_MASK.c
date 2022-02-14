
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int FILE ;


 int * FUNC_0 (char const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char*,int,size_t,int *) ;
 scalar_t__ FUNC_8 (size_t) ;
 scalar_t__ FUNC_9 (char const*,struct stat*) ;

__attribute__((used)) static char *
FUNC_10(const char *VAR_4, int *VAR_5)
{
 char *VAR_6;
 FILE *VAR_7;
 size_t VAR_8;
 struct stat VAR_9;

 if (FUNC_9(VAR_4, &VAR_9) < 0)
  FUNC_2(VAR_1,
    (FUNC_4(),
     FUNC_5("could not stat file \"%s\": %m", VAR_4)));

 if (VAR_9.st_size > (VAR_2 - 1))
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_5("file \"%s\" is too large", VAR_4)));
 VAR_8 = (size_t) VAR_9.st_size;

 if ((VAR_7 = FUNC_0(VAR_4, VAR_3)) == ((void*)0))
  FUNC_2(VAR_1,
    (FUNC_4(),
     FUNC_5("could not open file \"%s\" for reading: %m",
      VAR_4)));

 VAR_6 = (char *) FUNC_8(VAR_8 + 1);

 *VAR_5 = FUNC_7(VAR_6, 1, VAR_8, VAR_7);

 if (FUNC_6(VAR_7))
  FUNC_2(VAR_1,
    (FUNC_4(),
     FUNC_5("could not read file \"%s\": %m", VAR_4)));

 FUNC_1(VAR_7);

 VAR_6[*VAR_5] = '\0';
 return VAR_6;
}
