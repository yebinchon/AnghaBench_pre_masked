
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ClaimsSet; int ulUncompressedClaimsSetSize; int ulClaimsSetSize; int * member_6; int member_5; int member_4; int member_3; int member_2; int * member_1; int member_0; } ;
typedef int * PVOID ;
typedef int PCLAIMS_SET ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ CLAIMS_SET_METADATA ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int **,int *) ;
 int FUNC_2 (TYPE_1__**,int **,scalar_t__*) ;

BOOL FUNC_3(PCLAIMS_SET VAR_2, PVOID *VAR_3, DWORD *VAR_4)
{
 BOOL VAR_5 = VAR_1;
 CLAIMS_SET_METADATA VAR_6 = {0, ((void*)0), VAR_0, 0, 0, 0, ((void*)0)}, *VAR_7 = &VAR_6;
 *VAR_3 = ((void*)0);
 *VAR_4 = 0;
 if(FUNC_1(&VAR_2, (PVOID *) &VAR_6.ClaimsSet, &VAR_6.ulUncompressedClaimsSetSize))
 {
  VAR_6.ulClaimsSetSize = VAR_6.ulUncompressedClaimsSetSize;
  VAR_5 = FUNC_2(&VAR_7, VAR_3, VAR_4);
  FUNC_0(VAR_6.ClaimsSet);
 }
 return VAR_5;
}
