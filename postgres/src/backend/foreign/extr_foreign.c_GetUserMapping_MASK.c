
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int options; void* serverid; void* userid; int umid; } ;
typedef TYPE_1__ UserMapping ;
struct TYPE_5__ {int oid; } ;
typedef void* Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_user_mapping ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* VAR_3 ;
 int FUNC_2 (void*) ;
 int VAR_4 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 int VAR_5 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ) ;

UserMapping *
FUNC_12(Oid VAR_6, Oid VAR_7)
{
 Datum VAR_8;
 HeapTuple VAR_9;
 bool VAR_10;
 UserMapping *VAR_11;

 VAR_9 = FUNC_5(VAR_5,
       FUNC_3(VAR_6),
       FUNC_3(VAR_7));

 if (!FUNC_1(VAR_9))
 {

  VAR_9 = FUNC_5(VAR_5,
        FUNC_3(VAR_3),
        FUNC_3(VAR_7));
 }

 if (!FUNC_1(VAR_9))
  FUNC_7(VAR_2,
    (FUNC_8(VAR_1),
     FUNC_9("user mapping not found for \"%s\"",
      FUNC_2(VAR_6))));

 VAR_11 = (UserMapping *) FUNC_10(sizeof(UserMapping));
 VAR_11->umid = ((Form_pg_user_mapping) FUNC_0(VAR_9))->oid;
 VAR_11->userid = VAR_6;
 VAR_11->serverid = VAR_7;


 VAR_8 = FUNC_6(VAR_5,
       VAR_9,
       VAR_0,
       &VAR_10);
 if (VAR_10)
  VAR_11->options = VAR_4;
 else
  VAR_11->options = FUNC_11(VAR_8);

 FUNC_4(VAR_9);

 return VAR_11;
}
