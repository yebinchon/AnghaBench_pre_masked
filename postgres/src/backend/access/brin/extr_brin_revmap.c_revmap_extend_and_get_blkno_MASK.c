
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rm_lastRevmapPage; int rm_pagesPerRange; } ;
typedef TYPE_1__ BrinRevmap ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static BlockNumber
FUNC_3(BrinRevmap *VAR_0, BlockNumber VAR_1)
{
 BlockNumber VAR_2;


 VAR_2 = FUNC_1(VAR_0->rm_pagesPerRange, VAR_1) + 1;


 while (VAR_2 > VAR_0->rm_lastRevmapPage)
 {
  FUNC_0();
  FUNC_2(VAR_0);
 }

 return VAR_2;
}
