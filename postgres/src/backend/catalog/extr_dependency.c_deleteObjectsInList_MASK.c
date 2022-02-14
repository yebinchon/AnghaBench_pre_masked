
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int numrefs; TYPE_2__* extras; int * refs; } ;
typedef int Relation ;
typedef TYPE_1__ ObjectAddresses ;
typedef TYPE_2__ ObjectAddressExtra ;
typedef int ObjectAddress ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(ObjectAddresses *VAR_5, Relation *VAR_6,
     int VAR_7)
{
 int VAR_8;




 if (FUNC_4() && !(VAR_7 & VAR_3))
 {
  for (VAR_8 = 0; VAR_8 < VAR_5->numrefs; VAR_8++)
  {
   const ObjectAddress *VAR_9 = &VAR_5->refs[VAR_8];
   const ObjectAddressExtra *VAR_10 = &VAR_5->extras[VAR_8];
   bool VAR_11 = 0;
   bool VAR_12 = 0;

   if (VAR_10->flags & VAR_1)
    VAR_11 = 1;
   if (VAR_10->flags & VAR_0)
    VAR_12 = 1;
   if (VAR_10->flags & VAR_2)
    VAR_12 = 1;

   if (FUNC_1(FUNC_3(VAR_9)))
   {
    FUNC_0(VAR_9, VAR_11, VAR_12);
   }
  }
 }





 for (VAR_8 = 0; VAR_8 < VAR_5->numrefs; VAR_8++)
 {
  ObjectAddress *VAR_13 = VAR_5->refs + VAR_8;
  ObjectAddressExtra *VAR_14 = VAR_5->extras + VAR_8;

  if ((VAR_7 & VAR_4) &&
   (VAR_14->flags & VAR_1))
   continue;

  FUNC_2(VAR_13, VAR_6, VAR_7);
 }
}
