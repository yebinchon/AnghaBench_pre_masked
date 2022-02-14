
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TypeCacheEnumData ;
struct TYPE_6__ {int type_id; int * enumData; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_7__ {scalar_t__ sort_order; } ;
typedef int Oid ;
typedef TYPE_2__ EnumItem ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(TypeCacheEntry *VAR_1, Oid VAR_2, Oid VAR_3)
{
 TypeCacheEnumData *VAR_4;
 EnumItem *VAR_5;
 EnumItem *VAR_6;





 if (VAR_2 == VAR_3)
  return 0;


 if (VAR_1->enumData == ((void*)0))
  FUNC_4(VAR_1);
 VAR_4 = VAR_1->enumData;




 if (FUNC_1(VAR_4, VAR_2) &&
  FUNC_1(VAR_4, VAR_3))
 {
  if (VAR_2 < VAR_3)
   return -1;
  else
   return 1;
 }




 VAR_5 = FUNC_2(VAR_4, VAR_2);
 VAR_6 = FUNC_2(VAR_4, VAR_3);

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {





  FUNC_4(VAR_1);
  VAR_4 = VAR_1->enumData;

  VAR_5 = FUNC_2(VAR_4, VAR_2);
  VAR_6 = FUNC_2(VAR_4, VAR_3);





  if (VAR_5 == ((void*)0))
   FUNC_0(VAR_0, "enum value %u not found in cache for enum %s",
     VAR_2, FUNC_3(VAR_1->type_id));
  if (VAR_6 == ((void*)0))
   FUNC_0(VAR_0, "enum value %u not found in cache for enum %s",
     VAR_3, FUNC_3(VAR_1->type_id));
 }

 if (VAR_5->sort_order < VAR_6->sort_order)
  return -1;
 else if (VAR_5->sort_order > VAR_6->sort_order)
  return 1;
 else
  return 0;
}
