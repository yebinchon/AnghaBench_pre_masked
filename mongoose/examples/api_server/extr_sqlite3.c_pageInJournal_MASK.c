
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pgno; TYPE_1__* pPager; } ;
struct TYPE_4__ {int pInJournal; } ;
typedef TYPE_2__ PgHdr ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(PgHdr *VAR_0){
  return FUNC_0(VAR_0->pPager->pInJournal, VAR_0->pgno);
}
