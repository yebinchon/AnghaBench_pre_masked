
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 int VAR_0 ;
 int FUNC_0 (char,char,char,char,char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*) ;
 char* FUNC_14 (int ) ;

void
FUNC_15(int VAR_6, PGresult *VAR_7, PGconn *VAR_8,
       bool VAR_9, const char *VAR_10)
{

 FUNC_3();
 {
  char *VAR_11 = FUNC_6(VAR_7, VAR_5);
  char *VAR_12 = FUNC_6(VAR_7, VAR_4);
  char *VAR_13 = FUNC_6(VAR_7, VAR_2);
  char *VAR_14 = FUNC_6(VAR_7, VAR_3);
  char *VAR_15 = FUNC_6(VAR_7, VAR_1);
  int VAR_16;

  if (VAR_11)
   VAR_16 = FUNC_0(VAR_11[0],
          VAR_11[1],
          VAR_11[2],
          VAR_11[3],
          VAR_11[4]);
  else
   VAR_16 = VAR_0;






  if (VAR_12 == ((void*)0))
   VAR_12 = FUNC_14(FUNC_5(VAR_8));

  FUNC_7(VAR_6,
    (FUNC_8(VAR_16),
     VAR_12 ? FUNC_13("%s", VAR_12) :
     FUNC_12("could not obtain message string for remote error"),
     VAR_13 ? FUNC_10("%s", VAR_13) : 0,
     VAR_14 ? FUNC_11("%s", VAR_14) : 0,
     VAR_15 ? FUNC_9("%s", VAR_15) : 0,
     VAR_10 ? FUNC_9("remote SQL command: %s", VAR_10) : 0));
 }
 FUNC_2();
 {
  if (VAR_9)
   FUNC_4(VAR_7);
 }
 FUNC_1();
}
