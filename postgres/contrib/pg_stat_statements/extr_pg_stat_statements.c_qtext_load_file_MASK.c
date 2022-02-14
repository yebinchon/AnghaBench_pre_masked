
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ Size ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int,struct stat*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int,char*,scalar_t__) ;

__attribute__((used)) static char *
FUNC_11(Size *VAR_8)
{
 char *VAR_9;
 int VAR_10;
 struct stat VAR_11;

 VAR_10 = FUNC_1(VAR_5, VAR_4 | VAR_6);
 if (VAR_10 < 0)
 {
  if (VAR_7 != VAR_0)
   FUNC_2(VAR_2,
     (FUNC_4(),
      FUNC_6("could not read file \"%s\": %m",
       VAR_5)));
  return ((void*)0);
 }


 if (FUNC_8(VAR_10, &VAR_11))
 {
  FUNC_2(VAR_2,
    (FUNC_4(),
     FUNC_6("could not stat file \"%s\": %m",
      VAR_5)));
  FUNC_0(VAR_10);
  return ((void*)0);
 }


 if (VAR_11.st_size <= VAR_3)
  VAR_9 = (char *) FUNC_9(VAR_11.st_size);
 else
  VAR_9 = ((void*)0);
 if (VAR_9 == ((void*)0))
 {
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_6("out of memory"),
     FUNC_5("Could not allocate enough memory to read file \"%s\".",
         VAR_5)));
  FUNC_0(VAR_10);
  return ((void*)0);
 }
 VAR_7 = 0;
 if (FUNC_10(VAR_10, VAR_9, VAR_11.st_size) != VAR_11.st_size)
 {
  if (VAR_7)
   FUNC_2(VAR_2,
     (FUNC_4(),
      FUNC_6("could not read file \"%s\": %m",
       VAR_5)));
  FUNC_7(VAR_9);
  FUNC_0(VAR_10);
  return ((void*)0);
 }

 if (FUNC_0(VAR_10) != 0)
  FUNC_2(VAR_2,
    (FUNC_4(),
     FUNC_6("could not close file \"%s\": %m", VAR_5)));

 *VAR_8 = VAR_11.st_size;
 return VAR_9;
}
