
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_5__ {int relname; int schemaname; scalar_t__ catalogname; } ;
typedef TYPE_1__ RangeVar ;
typedef scalar_t__ Oid ;
typedef int LOCKMODE ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (int ,scalar_t__,int ,int ) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,scalar_t__,int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (scalar_t__,int ) ;
 scalar_t__ FUNC_20 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_21 (scalar_t__,int ) ;

Oid
FUNC_22(RangeVar *VAR_12,
          LOCKMODE VAR_13,
          Oid *VAR_14)
{
 uint64 VAR_15;
 Oid VAR_16;
 Oid VAR_17 = VAR_6;
 Oid VAR_18;
 Oid VAR_19 = VAR_6;
 bool VAR_20 = 0;




 if (VAR_12->catalogname)
 {
  if (FUNC_21(VAR_12->catalogname, FUNC_14(VAR_7)) != 0)
   FUNC_11(VAR_5,
     (FUNC_12(VAR_4),
      FUNC_13("cross-database references are not implemented: \"%s.%s.%s\"",
       VAR_12->catalogname, VAR_12->schemaname,
       VAR_12->relname)));
 }







 for (;;)
 {
  AclResult VAR_21;

  VAR_15 = VAR_11;


  VAR_18 = FUNC_7(VAR_12);
  FUNC_0(FUNC_5(VAR_18));
  if (VAR_14 != ((void*)0))
   VAR_16 = FUNC_18(VAR_12->relname, VAR_18);
  else
   VAR_16 = VAR_6;






  if (FUNC_2())
   break;


  VAR_21 = FUNC_20(VAR_18, FUNC_1(), VAR_2);
  if (VAR_21 != VAR_1)
   FUNC_10(VAR_21, VAR_10,
         FUNC_15(VAR_18));

  if (VAR_20)
  {

   if (VAR_16 == VAR_17 && VAR_18 == VAR_19)
    break;

   if (VAR_18 != VAR_19)
    FUNC_8(VAR_8, VAR_19, 0,
          VAR_3);

   if (VAR_16 != VAR_17 && FUNC_5(VAR_17) && VAR_13 != VAR_9)
    FUNC_9(VAR_17, VAR_13);
  }


  if (VAR_18 != VAR_19)
   FUNC_3(VAR_8, VAR_18, 0, VAR_3);


  if (VAR_13 != VAR_9 && FUNC_5(VAR_16))
  {
   if (!FUNC_19(VAR_16, FUNC_1()))
    FUNC_10(VAR_0, FUNC_17(FUNC_16(VAR_16)),
          VAR_12->relname);
   if (VAR_16 != VAR_17)
    FUNC_4(VAR_16, VAR_13);
  }


  if (VAR_15 == VAR_11)
   break;


  VAR_20 = 1;
  VAR_17 = VAR_16;
  VAR_19 = VAR_18;
 }

 FUNC_6(VAR_12, VAR_18);
 if (VAR_14 != ((void*)0))
  *VAR_14 = VAR_16;
 return VAR_18;
}
