
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int datum; scalar_t__ isnull; } ;
typedef TYPE_1__ keyEntryData ;
struct TYPE_4__ {int haveDups; int collation; int cmpDatumFunc; } ;
typedef TYPE_2__ cmpEntriesArg ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 const keyEntryData *VAR_3 = (const keyEntryData *) VAR_0;
 const keyEntryData *VAR_4 = (const keyEntryData *) VAR_1;
 cmpEntriesArg *VAR_5 = (cmpEntriesArg *) VAR_2;
 int VAR_6;

 if (VAR_3->isnull)
 {
  if (VAR_4->isnull)
   VAR_6 = 0;
  else
   VAR_6 = 1;
 }
 else if (VAR_4->isnull)
  VAR_6 = -1;
 else
  VAR_6 = FUNC_0(FUNC_1(VAR_5->cmpDatumFunc,
             VAR_5->collation,
             VAR_3->datum, VAR_4->datum));






 if (VAR_6 == 0)
  VAR_5->haveDups = 1;

 return VAR_6;
}
