
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nentries; scalar_t__ maxentries; } ;
typedef TYPE_1__ TIDBitmap ;
typedef int BlockNumber ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void
FUNC_2(TIDBitmap *VAR_0, BlockNumber VAR_1)
{

 FUNC_1(VAR_0, VAR_1);

 if (VAR_0->nentries > VAR_0->maxentries)
  FUNC_0(VAR_0);
}
