
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rm_lastRevmapPage; int rm_pagesPerRange; } ;
typedef TYPE_1__ BrinRevmap ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static BlockNumber
FUNC_1(BrinRevmap *VAR_1, BlockNumber VAR_2)
{
 BlockNumber VAR_3;


 VAR_3 = FUNC_0(VAR_1->rm_pagesPerRange, VAR_2) + 1;


 if (VAR_3 <= VAR_1->rm_lastRevmapPage)
  return VAR_3;

 return VAR_0;
}
