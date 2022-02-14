
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sebuf ;
struct TYPE_6__ {int errorMessage; } ;
typedef TYPE_1__ PGconn ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int,char*,int) ;
 int FUNC_5 (char const*,int,int) ;
 int FUNC_6 (int *,int ,char const*,int ) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int,char*,int) ;

int
FUNC_9(PGconn *VAR_8, Oid VAR_9, const char *VAR_10)
{
 int VAR_11 = 1;
 int VAR_12;
 int VAR_13,
    VAR_14;
 char VAR_15[VAR_1];
 int VAR_16;
 char VAR_17[VAR_6];




 VAR_16 = FUNC_3(VAR_8, VAR_9, VAR_0);
 if (VAR_16 == -1)
 {

  return -1;
 }




 VAR_12 = FUNC_5(VAR_10, VAR_2 | VAR_4 | VAR_3 | VAR_5, 0666);
 if (VAR_12 < 0)
 {

  int VAR_18 = VAR_7;

  (void) FUNC_2(VAR_8, VAR_16);
  FUNC_6(&VAR_8->errorMessage,
        FUNC_1("could not open file \"%s\": %s\n"),
        VAR_10,
        FUNC_7(VAR_18, VAR_17, sizeof(VAR_17)));
  return -1;
 }




 while ((VAR_13 = FUNC_4(VAR_8, VAR_16, VAR_15, VAR_1)) > 0)
 {
  VAR_14 = FUNC_8(VAR_12, VAR_15, VAR_13);
  if (VAR_14 != VAR_13)
  {

   int VAR_19 = VAR_7;

   (void) FUNC_2(VAR_8, VAR_16);
   (void) FUNC_0(VAR_12);
   FUNC_6(&VAR_8->errorMessage,
         FUNC_1("could not write to file \"%s\": %s\n"),
         VAR_10,
         FUNC_7(VAR_19, VAR_17, sizeof(VAR_17)));
   return -1;
  }
 }







 if (VAR_13 < 0 ||
  FUNC_2(VAR_8, VAR_16) != 0)
 {

  VAR_11 = -1;
 }


 if (FUNC_0(VAR_12) != 0 && VAR_11 >= 0)
 {
  FUNC_6(&VAR_8->errorMessage,
        FUNC_1("could not write to file \"%s\": %s\n"),
        VAR_10, FUNC_7(VAR_7, VAR_17, sizeof(VAR_17)));
  VAR_11 = -1;
 }

 return VAR_11;
}
