
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int rd_smgr; } ;
typedef TYPE_1__* Relation ;
typedef scalar_t__ Oid ;
typedef int LOCKMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,int,int,int,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_15 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_16(Oid VAR_6, bool VAR_7, bool VAR_8,
      bool VAR_9)
{
 Oid VAR_10;
 Relation VAR_11;
 Relation VAR_12;
 LOCKMODE VAR_13;

 if (VAR_7)
  VAR_13 = VAR_5;
 else
  VAR_13 = VAR_0;
 VAR_10 = FUNC_0(VAR_6, 1);
 if (FUNC_1(VAR_10))
  VAR_12 = FUNC_15(VAR_10, VAR_13);
 else
  VAR_12 = ((void*)0);
 VAR_11 = FUNC_12(VAR_6, VAR_13);






 if (VAR_12 == ((void*)0) || VAR_10 != FUNC_0(VAR_6, 0))
  FUNC_8(VAR_3,
    (FUNC_9(VAR_2),
     FUNC_10("could not open parent table of index %s",
      FUNC_2(VAR_11))));


 FUNC_6(VAR_11);

 if (FUNC_7(VAR_11))
 {
  bool VAR_14;

  FUNC_3(VAR_11);
  if (!FUNC_13(VAR_11->rd_smgr, VAR_4))
   FUNC_8(VAR_3,
     (FUNC_9(VAR_1),
      FUNC_10("index \"%s\" lacks a main relation fork",
       FUNC_2(VAR_11))));


  VAR_14 = FUNC_4(VAR_11);
  FUNC_5(VAR_11, VAR_12, VAR_14, VAR_7,
        VAR_8, VAR_9);
 }






 FUNC_11(VAR_11, VAR_13);
 if (VAR_12)
  FUNC_14(VAR_12, VAR_13);
}
