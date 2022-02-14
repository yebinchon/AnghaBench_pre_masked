
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef scalar_t__ Oid ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_6 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*,struct stat*) ;

void
FUNC_15(Oid VAR_8, Oid VAR_9, bool VAR_10)
{
 struct stat VAR_11;
 char *VAR_12;





 if (VAR_8 == VAR_4)
  return;

 FUNC_0(FUNC_5(VAR_8));
 FUNC_0(FUNC_5(VAR_9));

 VAR_12 = FUNC_1(VAR_9, VAR_8);

 if (FUNC_14(VAR_12, &VAR_11) < 0)
 {

  if (VAR_7 == VAR_1)
  {




   FUNC_2(VAR_6, VAR_5);





   if (FUNC_14(VAR_12, &VAR_11) == 0 && FUNC_6(VAR_11.st_mode))
   {

   }
   else
   {

    if (FUNC_4(VAR_12) < 0)
    {
     char *VAR_13;


     if (VAR_7 != VAR_1 || !VAR_10)
      FUNC_7(VAR_3,
        (FUNC_9(),
         FUNC_10("could not create directory \"%s\": %m",
          VAR_12)));
     VAR_13 = FUNC_13(VAR_12);
     FUNC_11(VAR_13);
     FUNC_11(VAR_13);

     if (FUNC_4(VAR_13) < 0 && VAR_7 != VAR_0)
      FUNC_7(VAR_3,
        (FUNC_9(),
         FUNC_10("could not create directory \"%s\": %m",
          VAR_13)));
     FUNC_12(VAR_13);


     VAR_13 = FUNC_13(VAR_12);
     FUNC_11(VAR_13);

     if (FUNC_4(VAR_13) < 0 && VAR_7 != VAR_0)
      FUNC_7(VAR_3,
        (FUNC_9(),
         FUNC_10("could not create directory \"%s\": %m",
          VAR_13)));
     FUNC_12(VAR_13);


     if (FUNC_4(VAR_12) < 0)
      FUNC_7(VAR_3,
        (FUNC_9(),
         FUNC_10("could not create directory \"%s\": %m",
          VAR_12)));
    }
   }

   FUNC_3(VAR_6);
  }
  else
  {
   FUNC_7(VAR_3,
     (FUNC_9(),
      FUNC_10("could not stat directory \"%s\": %m", VAR_12)));
  }
 }
 else
 {

  if (!FUNC_6(VAR_11.st_mode))
   FUNC_7(VAR_3,
     (FUNC_8(VAR_2),
      FUNC_10("\"%s\" exists but is not a directory",
       VAR_12)));
 }

 FUNC_12(VAR_12);
}
