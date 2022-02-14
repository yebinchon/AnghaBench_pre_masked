
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* footer; } ;
typedef TYPE_2__ printTableContent ;
struct TYPE_13__ {int data; } ;
struct TYPE_11__ {scalar_t__ data; } ;
typedef TYPE_3__ PQExpBufferData ;
typedef int PGresult ;
typedef scalar_t__ Oid ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_2__* const,int ) ;
 int FUNC_8 (TYPE_2__* const,int ) ;
 int FUNC_9 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_11(printTableContent *const VAR_6, char VAR_7,
       Oid VAR_8, const bool VAR_9)
{

 if (VAR_7 == VAR_4 ||
  VAR_7 == VAR_1 ||
  VAR_7 == VAR_0 ||
  VAR_7 == VAR_3 ||
  VAR_7 == VAR_2 ||
  VAR_7 == VAR_5)
 {





  if (VAR_8 != 0)
  {
   PGresult *VAR_10 = ((void*)0);
   PQExpBufferData VAR_11;

   FUNC_6(&VAR_11);
   FUNC_9(&VAR_11,
         "SELECT spcname FROM pg_catalog.pg_tablespace\n"
         "WHERE oid = '%u';", VAR_8);
   VAR_10 = FUNC_3(VAR_11.data);
   if (!VAR_10)
   {
    FUNC_10(&VAR_11);
    return;
   }

   if (FUNC_2(VAR_10) > 0)
   {
    if (VAR_9)
    {

     FUNC_9(&VAR_11, FUNC_4("Tablespace: \"%s\""),
           FUNC_1(VAR_10, 0, 0));
     FUNC_7(VAR_6, VAR_11.data);
    }
    else
    {

     FUNC_9(&VAR_11, "%s", VAR_6->footer->data);




     FUNC_5(&VAR_11, FUNC_4(", tablespace \"%s\""),
           FUNC_1(VAR_10, 0, 0));
     FUNC_8(VAR_6, VAR_11.data);
    }
   }
   FUNC_0(VAR_10);
   FUNC_10(&VAR_11);
  }
 }
}
