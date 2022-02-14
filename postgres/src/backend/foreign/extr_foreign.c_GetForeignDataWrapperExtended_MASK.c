
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int bits16 ;
struct TYPE_5__ {int options; int fdwvalidator; int fdwhandler; int fdwname; int owner; int fdwid; } ;
struct TYPE_4__ {int fdwvalidator; int fdwhandler; int fdwname; int fdwowner; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_foreign_data_wrapper ;
typedef TYPE_2__ ForeignDataWrapper ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 int FUNC_7 (int ,char*,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

ForeignDataWrapper *
FUNC_11(Oid VAR_5, bits16 VAR_6)
{
 Form_pg_foreign_data_wrapper VAR_7;
 ForeignDataWrapper *VAR_8;
 Datum VAR_9;
 HeapTuple VAR_10;
 bool VAR_11;

 VAR_10 = FUNC_5(VAR_3, FUNC_3(VAR_5));

 if (!FUNC_1(VAR_10))
 {
  if ((VAR_6 & VAR_2) == 0)
   FUNC_7(VAR_1, "cache lookup failed for foreign-data wrapper %u", VAR_5);
  return ((void*)0);
 }

 VAR_7 = (Form_pg_foreign_data_wrapper) FUNC_0(VAR_10);

 VAR_8 = (ForeignDataWrapper *) FUNC_8(sizeof(ForeignDataWrapper));
 VAR_8->fdwid = VAR_5;
 VAR_8->owner = VAR_7->fdwowner;
 VAR_8->fdwname = FUNC_9(FUNC_2(VAR_7->fdwname));
 VAR_8->fdwhandler = VAR_7->fdwhandler;
 VAR_8->fdwvalidator = VAR_7->fdwvalidator;


 VAR_9 = FUNC_6(VAR_3,
       VAR_10,
       VAR_0,
       &VAR_11);
 if (VAR_11)
  VAR_8->options = VAR_4;
 else
  VAR_8->options = FUNC_10(VAR_9);

 FUNC_4(VAR_10);

 return VAR_8;
}
