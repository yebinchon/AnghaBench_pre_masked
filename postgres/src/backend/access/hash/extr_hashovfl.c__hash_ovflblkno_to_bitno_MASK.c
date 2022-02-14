
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int hashm_ovflpoint; int* hashm_spares; } ;
typedef TYPE_1__* HashMetaPage ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__) ;

uint32
FUNC_4(HashMetaPage VAR_2, BlockNumber VAR_3)
{
 uint32 VAR_4 = VAR_2->hashm_ovflpoint;
 uint32 VAR_5;
 uint32 VAR_6;


 for (VAR_5 = 1; VAR_5 <= VAR_4; VAR_5++)
 {
  if (VAR_3 <= (BlockNumber) FUNC_0(VAR_5))
   break;
  VAR_6 = VAR_3 - FUNC_0(VAR_5);







  if (VAR_6 > VAR_2->hashm_spares[VAR_5 - 1] &&
   VAR_6 <= VAR_2->hashm_spares[VAR_5])
   return VAR_6 - 1;
 }

 FUNC_1(VAR_1,
   (FUNC_2(VAR_0),
    FUNC_3("invalid overflow block number %u", VAR_3)));
 return 0;
}
