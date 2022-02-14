
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bitmap_base; int sorted_values; } ;
typedef TYPE_1__ TypeCacheEnumData ;
typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline bool
FUNC_1(TypeCacheEnumData *VAR_1, Oid VAR_2)
{
 Oid VAR_3;

 if (VAR_2 < VAR_1->bitmap_base)
  return 0;
 VAR_3 = VAR_2 - VAR_1->bitmap_base;
 if (VAR_3 > (Oid) VAR_0)
  return 0;
 return FUNC_0((int) VAR_3, VAR_1->sorted_values);
}
