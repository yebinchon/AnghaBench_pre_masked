
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int XactEvent ;
struct TYPE_4__ {scalar_t__ xact_depth; int changing_xact_state; int have_prep_stmt; int have_error; int * conn; } ;
typedef int PGresult ;
typedef int HASH_SEQ_STATUS ;
typedef TYPE_1__ ConnCacheEntry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char*,int) ;
 int FUNC_15 (TYPE_1__*) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_16(XactEvent VAR_9, void *VAR_10)
{
 HASH_SEQ_STATUS VAR_11;
 ConnCacheEntry *VAR_12;


 if (!VAR_8)
  return;





 FUNC_10(&VAR_11, VAR_1);
 while ((VAR_12 = (ConnCacheEntry *) FUNC_11(&VAR_11)))
 {
  PGresult *VAR_13;


  if (VAR_12->conn == ((void*)0))
   continue;


  if (VAR_12->xact_depth > 0)
  {
   bool VAR_14 = 0;

   FUNC_6(VAR_2, "closing remote transaction on connection %p",
     VAR_12->conn);

   switch (VAR_9)
   {
    case 131:
    case 129:





     FUNC_15(VAR_12);


     VAR_12->changing_xact_state = 1;
     FUNC_5(VAR_12->conn, "COMMIT TRANSACTION");
     VAR_12->changing_xact_state = 0;
     if (VAR_12->have_prep_stmt && VAR_12->have_error)
     {
      VAR_13 = FUNC_1(VAR_12->conn, "DEALLOCATE ALL");
      FUNC_0(VAR_13);
     }
     VAR_12->have_prep_stmt = 0;
     VAR_12->have_error = 0;
     break;
    case 128:
     FUNC_7(VAR_4,
       (FUNC_8(VAR_3),
        FUNC_9("cannot PREPARE a transaction that has operated on postgres_fdw foreign tables")));
     break;
    case 132:
    case 134:
    case 130:

     FUNC_6(VAR_4, "missed cleaning up connection during pre-commit");
     break;
    case 133:
    case 135:





     if (FUNC_12())
      VAR_12->changing_xact_state = 1;





     if (VAR_12->changing_xact_state)
      break;





     VAR_12->changing_xact_state = 1;


     VAR_12->have_error = 1;
     if (FUNC_3(VAR_12->conn) == VAR_5 &&
      !FUNC_13(VAR_12->conn))
     {

      VAR_14 = 1;
     }
     else if (!FUNC_14(VAR_12->conn,
                "ABORT TRANSACTION",
                0))
     {

      VAR_14 = 1;
     }
     else if (VAR_12->have_prep_stmt && VAR_12->have_error &&
        !FUNC_14(VAR_12->conn,
                "DEALLOCATE ALL",
                1))
     {

      VAR_14 = 1;
     }
     else
     {
      VAR_12->have_prep_stmt = 0;
      VAR_12->have_error = 0;
     }


     VAR_12->changing_xact_state = VAR_14;
     break;
   }
  }


  VAR_12->xact_depth = 0;





  if (FUNC_2(VAR_12->conn) != VAR_0 ||
   FUNC_3(VAR_12->conn) != VAR_6 ||
   VAR_12->changing_xact_state)
  {
   FUNC_6(VAR_2, "discarding connection %p", VAR_12->conn);
   FUNC_4(VAR_12);
  }
 }






 VAR_8 = 0;


 VAR_7 = 0;
}
