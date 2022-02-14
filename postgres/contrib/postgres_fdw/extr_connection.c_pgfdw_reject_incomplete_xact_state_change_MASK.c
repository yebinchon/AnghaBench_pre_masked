
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int key; int changing_xact_state; int * conn; } ;
struct TYPE_8__ {int servername; } ;
struct TYPE_7__ {int umserver; } ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_user_mapping ;
typedef TYPE_2__ ForeignServer ;
typedef TYPE_3__ ConnCacheEntry ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ) ;

__attribute__((used)) static void
FUNC_11(ConnCacheEntry *VAR_3)
{
 HeapTuple VAR_4;
 Form_pg_user_mapping VAR_5;
 ForeignServer *VAR_6;


 if (VAR_3->conn == ((void*)0) || !VAR_3->changing_xact_state)
  return;


 FUNC_6(VAR_3);


 VAR_4 = FUNC_5(VAR_2,
        FUNC_3(VAR_3->key));
 if (!FUNC_2(VAR_4))
  FUNC_7(VAR_1, "cache lookup failed for user mapping %u", VAR_3->key);
 VAR_5 = (Form_pg_user_mapping) FUNC_0(VAR_4);
 VAR_6 = FUNC_1(VAR_5->umserver);
 FUNC_4(VAR_4);

 FUNC_8(VAR_1,
   (FUNC_9(VAR_0),
    FUNC_10("connection to server \"%s\" was lost",
     VAR_6->servername)));
}
