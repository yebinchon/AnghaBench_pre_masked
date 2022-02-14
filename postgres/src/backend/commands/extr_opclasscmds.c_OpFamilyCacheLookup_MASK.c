
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int amname; } ;
typedef int Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_am ;


 int VAR_0 ;
 int FUNC_0 (int *,char**,char**) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*) ;
 int * FUNC_10 (int ,int ) ;
 int * FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int ,int ) ;

__attribute__((used)) static HeapTuple
FUNC_16(Oid VAR_5, List *VAR_6, bool VAR_7)
{
 char *VAR_8;
 char *VAR_9;
 HeapTuple VAR_10;


 FUNC_0(VAR_6, &VAR_8, &VAR_9);

 if (VAR_8)
 {

  Oid VAR_11;

  VAR_11 = FUNC_3(VAR_8, VAR_7);
  if (!FUNC_7(VAR_11))
   VAR_10 = ((void*)0);
  else
   VAR_10 = FUNC_11(VAR_3,
           FUNC_6(VAR_5),
           FUNC_9(VAR_9),
           FUNC_6(VAR_11));
 }
 else
 {

  Oid VAR_12 = FUNC_8(VAR_5, VAR_9);

  if (!FUNC_7(VAR_12))
   VAR_10 = ((void*)0);
  else
   VAR_10 = FUNC_10(VAR_4, FUNC_6(VAR_12));
 }

 if (!FUNC_2(VAR_10) && !VAR_7)
 {
  HeapTuple VAR_13;

  VAR_13 = FUNC_10(VAR_0, FUNC_6(VAR_5));
  if (!FUNC_2(VAR_13))
   FUNC_12(VAR_2, "cache lookup failed for access method %u", VAR_5);
  FUNC_13(VAR_2,
    (FUNC_14(VAR_1),
     FUNC_15("operator family \"%s\" does not exist for access method \"%s\"",
      FUNC_4(VAR_6),
      FUNC_5(((Form_pg_am) FUNC_1(VAR_13))->amname))));
 }

 return VAR_10;
}
