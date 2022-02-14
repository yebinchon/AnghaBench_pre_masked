
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_6__ {int BaseAddress; scalar_t__ EncodeFlagMask; } ;
struct TYPE_5__ {scalar_t__ bits; } ;
typedef TYPE_1__ RDebug ;
typedef int PHEAP_USERDATA_HEADER ;
typedef int PHEAP_ENTRY ;
typedef TYPE_2__* PHEAP ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static bool FUNC_2(RDebug *VAR_1, PHEAP VAR_2, PHEAP_ENTRY VAR_3, PHEAP_USERDATA_HEADER VAR_4, WPARAM VAR_5, WPARAM VAR_6) {
 FUNC_1 (VAR_2 && VAR_3, 0);
 if (VAR_1->bits == VAR_0) {
  VAR_3 = (WPARAM)VAR_3 + VAR_1->bits;
 }

 if (VAR_2->EncodeFlagMask) {
  *(DWORD *)VAR_3 ^= FUNC_0 (VAR_2->BaseAddress) ^ (DWORD)(((DWORD)VAR_6 - FUNC_0 (VAR_4)) << 0xC) ^ (DWORD)VAR_5 ^ (VAR_6 >> 4);
 }
 return !(((BYTE *)VAR_3)[0] ^ ((BYTE *)VAR_3)[1] ^ ((BYTE *)VAR_3)[2] ^ ((BYTE *)VAR_3)[3]);
}
