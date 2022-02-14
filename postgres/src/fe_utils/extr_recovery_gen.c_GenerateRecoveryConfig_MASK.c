
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ len; int data; } ;
struct TYPE_16__ {char* keyword; char* val; } ;
typedef TYPE_1__ PQconninfoOption ;
typedef TYPE_2__ PQExpBufferData ;
typedef TYPE_2__* PQExpBuffer ;
typedef int PGconn ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,char*,char*) ;
 int FUNC_8 (TYPE_2__*,char) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 TYPE_2__* FUNC_10 () ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (TYPE_2__*) ;

PQExpBuffer
FUNC_18(PGconn *VAR_1, char *VAR_2)
{
 PQconninfoOption *VAR_3;
 PQExpBufferData VAR_4;
 char *VAR_5;
 PQExpBuffer VAR_6;

 FUNC_0(VAR_1 != ((void*)0));

 VAR_6 = FUNC_10();
 if (!VAR_6)
 {
  FUNC_15("out of memory");
  FUNC_12(1);
 }





 if (FUNC_5(VAR_1) < VAR_0)
  FUNC_9(VAR_6, "standby_mode = 'on'\n");

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 == ((void*)0))
 {
  FUNC_15("out of memory");
  FUNC_12(1);
 }

 FUNC_14(&VAR_4);
 for (PQconninfoOption *VAR_7 = VAR_3; VAR_7 && VAR_7->keyword; VAR_7++)
 {

  if (FUNC_16(VAR_7->keyword, "replication") == 0 ||
   FUNC_16(VAR_7->keyword, "dbname") == 0 ||
   FUNC_16(VAR_7->keyword, "fallback_application_name") == 0 ||
   (VAR_7->val == ((void*)0)) ||
   (VAR_7->val != ((void*)0) && VAR_7->val[0] == '\0'))
   continue;


  if (VAR_4.len != 0)
   FUNC_8(&VAR_4, ' ');





  FUNC_7(&VAR_4, "%s=", VAR_7->keyword);
  FUNC_6(&VAR_4, VAR_7->val);
 }
 if (FUNC_2(VAR_4))
 {
  FUNC_15("out of memory");
  FUNC_12(1);
 }






 VAR_5 = FUNC_11(VAR_4.data);
 FUNC_17(&VAR_4);
 FUNC_7(VAR_6, "primary_conninfo = '%s'\n", VAR_5);
 FUNC_13(VAR_5);

 if (VAR_2)
 {

  FUNC_7(VAR_6, "primary_slot_name = '%s'\n",
        VAR_2);
 }

 if (FUNC_1(VAR_6))
 {
  FUNC_15("out of memory");
  FUNC_12(1);
 }

 FUNC_4(VAR_3);

 return VAR_6;
}
