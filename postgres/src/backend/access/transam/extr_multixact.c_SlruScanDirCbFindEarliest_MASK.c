
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int earliestExistingPage; } ;
typedef TYPE_1__ mxtruncinfo ;
struct TYPE_5__ {scalar_t__ (* PagePrecedes ) (int,int) ;} ;
typedef TYPE_2__* SlruCtl ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static bool
FUNC_1(SlruCtl VAR_0, char *VAR_1, int VAR_2, void *VAR_3)
{
 mxtruncinfo *VAR_4 = (mxtruncinfo *) VAR_3;

 if (VAR_4->earliestExistingPage == -1 ||
  VAR_0->PagePrecedes(VAR_2, VAR_4->earliestExistingPage))
 {
  VAR_4->earliestExistingPage = VAR_2;
 }

 return 0;
}
