
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rtekind; TYPE_1__* eref; int relid; TYPE_2__* alias; } ;
struct TYPE_6__ {int colnames; } ;
struct TYPE_5__ {int aliasname; int colnames; } ;
typedef TYPE_3__ RangeTblEntry ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,int ) ;
 char* FUNC_1 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 char* FUNC_4 (int ) ;

char *
FUNC_5(RangeTblEntry *VAR_3, AttrNumber VAR_4)
{
 if (VAR_4 == VAR_1)
  return "*";




 if (VAR_3->alias &&
  VAR_4 > 0 && VAR_4 <= FUNC_2(VAR_3->alias->colnames))
  return FUNC_4(FUNC_3(VAR_3->alias->colnames, VAR_4 - 1));







 if (VAR_3->rtekind == VAR_2)
  return FUNC_1(VAR_3->relid, VAR_4, 0);




 if (VAR_4 > 0 && VAR_4 <= FUNC_2(VAR_3->eref->colnames))
  return FUNC_4(FUNC_3(VAR_3->eref->colnames, VAR_4 - 1));


 FUNC_0(VAR_0, "invalid attnum %d for rangetable entry %s",
   VAR_4, VAR_3->eref->aliasname);
 return ((void*)0);
}
