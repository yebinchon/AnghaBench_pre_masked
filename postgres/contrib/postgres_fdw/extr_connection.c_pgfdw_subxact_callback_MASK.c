
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sql ;
struct TYPE_3__ {int xact_depth; int changing_xact_state; int have_error; int * conn; } ;
typedef scalar_t__ SubXactEvent ;
typedef int SubTransactionId ;
typedef int HASH_SEQ_STATUS ;
typedef TYPE_1__ ConnCacheEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*,int,char*,int,...) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_11(SubXactEvent VAR_6, SubTransactionId VAR_7,
        SubTransactionId VAR_8, void *VAR_9)
{
 HASH_SEQ_STATUS VAR_10;
 ConnCacheEntry *VAR_11;
 int VAR_12;


 if (!(VAR_6 == VAR_4 ||
    VAR_6 == VAR_3))
  return;


 if (!VAR_5)
  return;





 VAR_12 = FUNC_0();
 FUNC_4(&VAR_10, VAR_0);
 while ((VAR_11 = (ConnCacheEntry *) FUNC_5(&VAR_10)))
 {
  char VAR_13[100];





  if (VAR_11->conn == ((void*)0) || VAR_11->xact_depth < VAR_12)
   continue;

  if (VAR_11->xact_depth > VAR_12)
   FUNC_3(VAR_1, "missed cleaning up remote subtransaction at level %d",
     VAR_11->xact_depth);

  if (VAR_6 == VAR_4)
  {




   FUNC_9(VAR_11);


   FUNC_10(VAR_13, sizeof(VAR_13), "RELEASE SAVEPOINT s%d", VAR_12);
   VAR_11->changing_xact_state = 1;
   FUNC_2(VAR_11->conn, VAR_13);
   VAR_11->changing_xact_state = 0;
  }
  else if (FUNC_6())
  {




   VAR_11->changing_xact_state = 1;
  }
  else if (!VAR_11->changing_xact_state)
  {
   bool VAR_14 = 0;


   VAR_11->changing_xact_state = 1;


   VAR_11->have_error = 1;
   if (FUNC_1(VAR_11->conn) == VAR_2 &&
    !FUNC_7(VAR_11->conn))
    VAR_14 = 1;
   else
   {

    FUNC_10(VAR_13, sizeof(VAR_13),
       "ROLLBACK TO SAVEPOINT s%d; RELEASE SAVEPOINT s%d",
       VAR_12, VAR_12);
    if (!FUNC_8(VAR_11->conn, VAR_13, 0))
     VAR_14 = 1;
   }


   VAR_11->changing_xact_state = VAR_14;
  }


  VAR_11->xact_depth--;
 }
}
