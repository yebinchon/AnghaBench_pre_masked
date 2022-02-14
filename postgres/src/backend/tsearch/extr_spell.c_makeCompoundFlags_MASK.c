
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int nAffixData; int * AffixData; } ;
typedef TYPE_1__ IspellDict ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static uint32
FUNC_2(IspellDict *VAR_1, int VAR_2)
{
 FUNC_0(VAR_2 < VAR_1->nAffixData);

 return (FUNC_1(VAR_1, VAR_1->AffixData[VAR_2]) &
   VAR_0);
}
