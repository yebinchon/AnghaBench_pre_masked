
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int flags; int const dependee; } ;
struct TYPE_9__ {int numrefs; TYPE_3__* extras; int * refs; } ;
struct TYPE_8__ {scalar_t__ len; char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ ObjectAddresses ;
typedef TYPE_3__ ObjectAddressExtra ;
typedef int ObjectAddress ;
typedef scalar_t__ DropBehavior ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,...) ;
 int FUNC_2 (TYPE_1__*,char) ;
 int VAR_16 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*,int,int) ;
 char* FUNC_11 (int const*) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_17 ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15(const ObjectAddresses *VAR_18,
        DropBehavior VAR_19,
        int VAR_20,
        const ObjectAddress *VAR_21)
{
 int VAR_22 = (VAR_20 & VAR_15) ? VAR_0 : VAR_14;
 bool VAR_23 = 1;
 StringInfoData VAR_24;
 StringInfoData VAR_25;
 int VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28;
 for (VAR_28 = 0; VAR_28 < VAR_18->numrefs; VAR_28++)
 {
  const ObjectAddressExtra *VAR_29 = &VAR_18->extras[VAR_28];

  if ((VAR_29->flags & VAR_4) &&
   !(VAR_29->flags & VAR_6))
  {
   const ObjectAddress *VAR_30 = &VAR_18->refs[VAR_28];
   char *VAR_31 = FUNC_11(&VAR_29->dependee);

   FUNC_3(VAR_11,
     (FUNC_4(VAR_10),
      FUNC_8("cannot drop %s because %s requires it",
       FUNC_11(VAR_30), VAR_31),
      FUNC_7("You can drop %s instead.", VAR_31)));
  }
 }
 if (VAR_19 == VAR_8 &&
  VAR_22 < VAR_16 &&
  (VAR_22 < VAR_17 || VAR_17 == VAR_12))
  return;
 FUNC_12(&VAR_24);
 FUNC_12(&VAR_25);





 for (VAR_28 = VAR_18->numrefs - 1; VAR_28 >= 0; VAR_28--)
 {
  const ObjectAddress *VAR_32 = &VAR_18->refs[VAR_28];
  const ObjectAddressExtra *VAR_33 = &VAR_18->extras[VAR_28];
  char *VAR_34;


  if (VAR_33->flags & VAR_5)
   continue;


  if (VAR_33->flags & VAR_7)
   continue;

  VAR_34 = FUNC_11(VAR_32);






  if (VAR_33->flags & (VAR_1 |
       VAR_3 |
       VAR_6 |
       VAR_2))
  {






   FUNC_3(VAR_0,
     (FUNC_8("drop auto-cascades to %s",
       VAR_34)));
  }
  else if (VAR_19 == VAR_9)
  {
   char *VAR_35 = FUNC_11(&VAR_33->dependee);

   if (VAR_26 < 100)
   {

    if (VAR_24.len != 0)
     FUNC_2(&VAR_24, '\n');
    FUNC_1(&VAR_24, FUNC_0("%s depends on %s"),
         VAR_34, VAR_35);
    VAR_26++;
   }
   else
    VAR_27++;

   if (VAR_25.len != 0)
    FUNC_2(&VAR_25, '\n');
   FUNC_1(&VAR_25, FUNC_0("%s depends on %s"),
        VAR_34, VAR_35);
   FUNC_14(VAR_35);
   VAR_23 = 0;
  }
  else
  {
   if (VAR_26 < 100)
   {

    if (VAR_24.len != 0)
     FUNC_2(&VAR_24, '\n');
    FUNC_1(&VAR_24, FUNC_0("drop cascades to %s"),
         VAR_34);
    VAR_26++;
   }
   else
    VAR_27++;

   if (VAR_25.len != 0)
    FUNC_2(&VAR_25, '\n');
   FUNC_1(&VAR_25, FUNC_0("drop cascades to %s"),
        VAR_34);
  }

  FUNC_14(VAR_34);
 }

 if (VAR_27 > 0)
  FUNC_1(&VAR_24, FUNC_13("\nand %d other object "
             "(see server log for list)",
             "\nand %d other objects "
             "(see server log for list)",
             VAR_27),
       VAR_27);

 if (!VAR_23)
 {
  if (VAR_21)
   FUNC_3(VAR_11,
     (FUNC_4(VAR_10),
      FUNC_8("cannot drop %s because other objects depend on it",
       FUNC_11(VAR_21)),
      FUNC_5("%s", VAR_24.data),
      FUNC_6("%s", VAR_25.data),
      FUNC_7("Use DROP ... CASCADE to drop the dependent objects too.")));
  else
   FUNC_3(VAR_11,
     (FUNC_4(VAR_10),
      FUNC_8("cannot drop desired object(s) because other objects depend on them"),
      FUNC_5("%s", VAR_24.data),
      FUNC_6("%s", VAR_25.data),
      FUNC_7("Use DROP ... CASCADE to drop the dependent objects too.")));
 }
 else if (VAR_26 > 1)
 {
  FUNC_3(VAR_22,

    (FUNC_10("drop cascades to %d other object",
          "drop cascades to %d other objects",
          VAR_26 + VAR_27,
          VAR_26 + VAR_27),
     FUNC_5("%s", VAR_24.data),
     FUNC_6("%s", VAR_25.data)));
 }
 else if (VAR_26 == 1)
 {

  FUNC_3(VAR_22,
    (FUNC_9("%s", VAR_24.data)));
 }

 FUNC_14(VAR_24.data);
 FUNC_14(VAR_25.data);
}
