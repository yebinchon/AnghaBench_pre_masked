
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ contiguous_pages; scalar_t__ free_pages; } ;
typedef scalar_t__ Size ;
typedef TYPE_1__ FreePageManager ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

void
FUNC_6(FreePageManager *VAR_0, Size VAR_1, Size VAR_2)
{
 Size VAR_3;

 FUNC_0(VAR_2 > 0);


 VAR_3 =
  FUNC_3(VAR_0, VAR_1, VAR_2, 0);





 if (VAR_3 > VAR_2)
 {
  Size VAR_4;

  VAR_4 = FUNC_1(VAR_0);
  if (VAR_4 > VAR_3)
   VAR_3 = VAR_4;
 }


 if (VAR_0->contiguous_pages < VAR_3)
  VAR_0->contiguous_pages = VAR_3;






 FUNC_4(VAR_0);






}
