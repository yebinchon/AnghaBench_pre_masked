
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_2__ {int version; int paddr; int psize; int vaddr; int code_pa; int sign_va; int sign_sz; int cert_sz; int cert_va; int load_index; } ;
typedef int SblHeader ;
typedef int RBuffer ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int ,int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static bool FUNC_4(RBuffer *VAR_1) {
 FUNC_3 (VAR_1, 0);
 ut64 VAR_2 = FUNC_2 (VAR_1);
 if (sizeof (SblHeader) < VAR_2) {
  int VAR_3 = FUNC_1 (VAR_1, 0, (ut8*)&VAR_0, "10i", 1);
  if (!VAR_3) {
   return 0;
  }
  if (VAR_0.version != 3) {
   return 0;
  }
  if (VAR_0.paddr + sizeof (SblHeader) > VAR_2) {
   return 0;
  }
  if (VAR_0.vaddr < 0x100 || VAR_0.psize > VAR_2) {
   return 0;
  }
  if (VAR_0.cert_va < VAR_0.vaddr) {
   return 0;
  }
  if (VAR_0.cert_sz >= 0xf0000) {
   return 0;
  }
  if (VAR_0.sign_va < VAR_0.vaddr) {
   return 0;
  }
  if (VAR_0.sign_sz >= 0xf0000) {
   return 0;
  }
  if (VAR_0.load_index < 1 || VAR_0.load_index > 0x40) {
   return 0;
  }

  return 1;
 }
 return 0;
}
