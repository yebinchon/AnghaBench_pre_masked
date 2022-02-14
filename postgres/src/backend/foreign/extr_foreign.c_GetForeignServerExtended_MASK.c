
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bits16 ;
struct TYPE_5__ {int options; int * serverversion; int * servertype; int fdwid; int owner; int servername; int serverid; } ;
struct TYPE_4__ {int srvfdw; int srvowner; int srvname; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_foreign_server ;
typedef TYPE_2__ ForeignServer ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

ForeignServer *
FUNC_12(Oid VAR_7, bits16 VAR_8)
{
 Form_pg_foreign_server VAR_9;
 ForeignServer *VAR_10;
 HeapTuple VAR_11;
 Datum VAR_12;
 bool VAR_13;

 VAR_11 = FUNC_5(VAR_4, FUNC_3(VAR_7));

 if (!FUNC_1(VAR_11))
 {
  if ((VAR_8 & VAR_5) == 0)
   FUNC_8(VAR_3, "cache lookup failed for foreign server %u", VAR_7);
  return ((void*)0);
 }

 VAR_9 = (Form_pg_foreign_server) FUNC_0(VAR_11);

 VAR_10 = (ForeignServer *) FUNC_9(sizeof(ForeignServer));
 VAR_10->serverid = VAR_7;
 VAR_10->servername = FUNC_10(FUNC_2(VAR_9->srvname));
 VAR_10->owner = VAR_9->srvowner;
 VAR_10->fdwid = VAR_9->srvfdw;


 VAR_12 = FUNC_6(VAR_4,
       VAR_11,
       VAR_1,
       &VAR_13);
 VAR_10->servertype = VAR_13 ? ((void*)0) : FUNC_7(VAR_12);


 VAR_12 = FUNC_6(VAR_4,
       VAR_11,
       VAR_2,
       &VAR_13);
 VAR_10->serverversion = VAR_13 ? ((void*)0) : FUNC_7(VAR_12);


 VAR_12 = FUNC_6(VAR_4,
       VAR_11,
       VAR_0,
       &VAR_13);
 if (VAR_13)
  VAR_10->options = VAR_6;
 else
  VAR_10->options = FUNC_11(VAR_12);

 FUNC_4(VAR_11);

 return VAR_10;
}
