
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int attrcollid; int attrtypid; } ;
typedef TYPE_1__ VacAttrStats ;
struct TYPE_6__ {scalar_t__ lt_opr; } ;
typedef TYPE_2__ TypeCacheEntry ;
typedef int MultiSortSupport ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int,scalar_t__,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static MultiSortSupport
FUNC_4(VacAttrStats **VAR_3, int VAR_4)
{
 int VAR_5;


 MultiSortSupport VAR_6 = FUNC_3(VAR_4);


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  VacAttrStats *VAR_7 = VAR_3[VAR_5];
  TypeCacheEntry *VAR_8;

  VAR_8 = FUNC_1(VAR_7->attrtypid, VAR_2);
  if (VAR_8->lt_opr == VAR_1)
   FUNC_0(VAR_0, "cache lookup failed for ordering operator for type %u",
     VAR_7->attrtypid);

  FUNC_2(VAR_6, VAR_5, VAR_8->lt_opr, VAR_7->attrcollid);
 }

 return VAR_6;
}
