
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT32 ;
struct TYPE_9__ {int EncodeFlagMask; int Encoding; } ;
struct TYPE_8__ {TYPE_2__* bits; } ;
typedef TYPE_1__ RDebug ;
typedef TYPE_2__* PHEAP_ENTRY ;
typedef TYPE_2__* PHEAP ;
typedef int BYTE ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static bool FUNC_1(RDebug *VAR_1, PHEAP VAR_2, PHEAP_ENTRY VAR_3) {
 FUNC_0 (VAR_2 && VAR_3, 0);
 if (VAR_1->bits == VAR_0) {
  VAR_3 = (WPARAM)VAR_3 + VAR_1->bits;
 }
 if (VAR_2->EncodeFlagMask && (*(UINT32 *)VAR_3 & VAR_2->EncodeFlagMask)) {
  if (VAR_1->bits == VAR_0) {
   VAR_2 = (WPARAM)VAR_2 + VAR_1->bits;
  }
  *(WPARAM *)VAR_3 ^= *(WPARAM *)&VAR_2->Encoding;
 }
 return !(((BYTE *)VAR_3)[0] ^ ((BYTE *)VAR_3)[1] ^ ((BYTE *)VAR_3)[2] ^ ((BYTE *)VAR_3)[3]);
}
