
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int remoteVersion; } ;
typedef int PGresult ;
typedef int PGconn ;
typedef int Oid ;
typedef TYPE_1__ Archive ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int * FUNC_1 (TYPE_1__*,char const*,int ) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int * FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,char*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int *,int,char*,int) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int
FUNC_16(Archive *VAR_3, void *VAR_4)
{
 const char *VAR_5;
 const char *VAR_6;
 PGconn *VAR_7 = FUNC_3(VAR_3);
 PGresult *VAR_8;
 char VAR_9[VAR_1];
 int VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_15("saving large objects");





 if (VAR_3->remoteVersion >= 90000)
  VAR_5 =
   "DECLARE bloboid CURSOR FOR "
   "SELECT oid FROM pg_largeobject_metadata ORDER BY 1";
 else
  VAR_5 =
   "DECLARE bloboid CURSOR FOR "
   "SELECT DISTINCT loid FROM pg_largeobject ORDER BY 1";

 FUNC_2(VAR_3, VAR_5);


 VAR_6 = "FETCH 1000 IN bloboid";

 do
 {

  VAR_8 = FUNC_1(VAR_3, VAR_6, VAR_2);


  VAR_10 = FUNC_7(VAR_8);
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  {
   Oid VAR_13;
   int VAR_14;

   VAR_13 = FUNC_10(FUNC_6(VAR_8, VAR_11, 0));

   VAR_14 = FUNC_13(VAR_7, VAR_13, VAR_0);
   if (VAR_14 == -1)
    FUNC_11("could not open large object %u: %s",
       VAR_13, FUNC_5(VAR_7));

   FUNC_8(VAR_3, VAR_13);


   do
   {
    VAR_12 = FUNC_14(VAR_7, VAR_14, VAR_9, VAR_1);
    if (VAR_12 < 0)
     FUNC_11("error reading large object %u: %s",
        VAR_13, FUNC_5(VAR_7));

    FUNC_9(VAR_3, VAR_9, VAR_12);
   } while (VAR_12 > 0);

   FUNC_12(VAR_7, VAR_14);

   FUNC_0(VAR_3, VAR_13);
  }

  FUNC_4(VAR_8);
 } while (VAR_10 > 0);

 return 1;
}
