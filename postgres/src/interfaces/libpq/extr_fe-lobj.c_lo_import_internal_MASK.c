
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int sebuf ;
struct TYPE_8__ {int errorMessage; } ;
typedef TYPE_1__ PGconn ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_6 (TYPE_1__*,int,char*,int) ;
 int FUNC_7 (char const*,int,int) ;
 int FUNC_8 (int *,int ,char const*,int ) ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (int,char*,int) ;

__attribute__((used)) static Oid
FUNC_11(PGconn *VAR_8, const char *VAR_9, Oid VAR_10)
{
 int VAR_11;
 int VAR_12,
    VAR_13;
 char VAR_14[VAR_3];
 Oid VAR_15;
 int VAR_16;
 char VAR_17[VAR_6];




 VAR_11 = FUNC_7(VAR_9, VAR_4 | VAR_5, 0666);
 if (VAR_11 < 0)
 {
  FUNC_8(&VAR_8->errorMessage,
        FUNC_1("could not open file \"%s\": %s\n"),
        VAR_9, FUNC_10(VAR_7, VAR_17, sizeof(VAR_17)));
  return VAR_2;
 }




 if (VAR_10 == VAR_2)
  VAR_15 = FUNC_3(VAR_8, VAR_0 | VAR_1);
 else
  VAR_15 = FUNC_4(VAR_8, VAR_10);

 if (VAR_15 == VAR_2)
 {

  (void) FUNC_0(VAR_11);
  return VAR_2;
 }

 VAR_16 = FUNC_5(VAR_8, VAR_15, VAR_1);
 if (VAR_16 == -1)
 {

  (void) FUNC_0(VAR_11);
  return VAR_2;
 }




 while ((VAR_12 = FUNC_9(VAR_11, VAR_14, VAR_3)) > 0)
 {
  VAR_13 = FUNC_6(VAR_8, VAR_16, VAR_14, VAR_12);
  if (VAR_13 != VAR_12)
  {






   (void) FUNC_0(VAR_11);
   return VAR_2;
  }
 }

 if (VAR_12 < 0)
 {

  int VAR_18 = VAR_7;

  (void) FUNC_2(VAR_8, VAR_16);
  (void) FUNC_0(VAR_11);
  FUNC_8(&VAR_8->errorMessage,
        FUNC_1("could not read from file \"%s\": %s\n"),
        VAR_9,
        FUNC_10(VAR_18, VAR_17, sizeof(VAR_17)));
  return VAR_2;
 }

 (void) FUNC_0(VAR_11);

 if (FUNC_2(VAR_8, VAR_16) != 0)
 {

  return VAR_2;
 }

 return VAR_15;
}
