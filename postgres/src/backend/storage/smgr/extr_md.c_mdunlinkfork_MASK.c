
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RelFileNodeBackend ;
typedef scalar_t__ ForkNumber ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 int VAR_5 ;
 int FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,scalar_t__,int) ;
 int FUNC_10 (int ,scalar_t__,int ) ;
 char* FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (char*,char*,char*,int) ;
 scalar_t__ FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15(RelFileNodeBackend VAR_6, ForkNumber VAR_7, bool VAR_8)
{
 char *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_11(VAR_6, VAR_7);




 if (VAR_8 || VAR_7 != VAR_1 || FUNC_2(VAR_6))
 {

  if (!FUNC_2(VAR_6))
   FUNC_9(VAR_6, VAR_7, 0 );


  VAR_10 = FUNC_14(VAR_9);
  if (VAR_10 < 0 && VAR_5 != VAR_0)
   FUNC_3(VAR_4,
     (FUNC_4(),
      FUNC_5("could not remove file \"%s\": %m", VAR_9)));
 }
 else
 {

  int VAR_11;

  VAR_11 = FUNC_1(VAR_9, VAR_2 | VAR_3);
  if (VAR_11 >= 0)
  {
   int VAR_12;

   VAR_10 = FUNC_6(VAR_11, 0);
   VAR_12 = VAR_5;
   FUNC_0(VAR_11);
   VAR_5 = VAR_12;
  }
  else
   VAR_10 = -1;
  if (VAR_10 < 0 && VAR_5 != VAR_0)
   FUNC_3(VAR_4,
     (FUNC_4(),
      FUNC_5("could not truncate file \"%s\": %m", VAR_9)));


  FUNC_10(VAR_6, VAR_7, 0 );
 }




 if (VAR_10 >= 0)
 {
  char *VAR_13 = (char *) FUNC_7(FUNC_13(VAR_9) + 12);
  BlockNumber VAR_14;





  for (VAR_14 = 1;; VAR_14++)
  {




   if (!FUNC_2(VAR_6))
    FUNC_9(VAR_6, VAR_7, VAR_14);

   FUNC_12(VAR_13, "%s.%u", VAR_9, VAR_14);
   if (FUNC_14(VAR_13) < 0)
   {

    if (VAR_5 != VAR_0)
     FUNC_3(VAR_4,
       (FUNC_4(),
        FUNC_5("could not remove file \"%s\": %m", VAR_13)));
    break;
   }
  }
  FUNC_8(VAR_13);
 }

 FUNC_8(VAR_9);
}
