
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_3__ {size_t hashm_ovflpoint; size_t* hashm_spares; } ;
typedef TYPE_1__* HashMetaPage ;
typedef int BlockNumber ;


 size_t FUNC_0 (size_t) ;

__attribute__((used)) static BlockNumber
FUNC_1(HashMetaPage VAR_0, uint32 VAR_1)
{
 uint32 VAR_2 = VAR_0->hashm_ovflpoint;
 uint32 VAR_3;


 VAR_1 += 1;


 for (VAR_3 = 1;
   VAR_3 < VAR_2 && VAR_1 > VAR_0->hashm_spares[VAR_3];
   VAR_3++)
              ;





 return (BlockNumber) (FUNC_0(VAR_3) + VAR_1);
}
