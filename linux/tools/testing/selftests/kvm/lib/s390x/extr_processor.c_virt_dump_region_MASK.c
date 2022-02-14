
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uint8_t ;
typedef scalar_t__ uint64_t ;
struct kvm_vm {int dummy; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* FUNC_0 (struct kvm_vm*,scalar_t__) ;
 int FUNC_1 (int *,char*,char*,char*,int,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,struct kvm_vm*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_3, struct kvm_vm *VAR_4, uint8_t VAR_5,
        uint64_t VAR_6)
{
 uint64_t VAR_7, *VAR_8;

 for (VAR_7 = VAR_6; VAR_7 < VAR_6 + 0x400 * 8; VAR_7 += 8) {
  VAR_8 = FUNC_0(VAR_4, VAR_7);
  if (*VAR_8 & VAR_0)
   continue;
  FUNC_1(VAR_3, "%*srt%lde @ 0x%lx: 0x%016lx\n",
   VAR_5, "", 4 - ((*VAR_8 & VAR_2) >> 2),
   VAR_7, *VAR_8);
  if (*VAR_8 & VAR_2) {
   FUNC_3(VAR_3, VAR_4, VAR_5 + 2,
      *VAR_8 & VAR_1);
  } else {
   FUNC_2(VAR_3, VAR_4, VAR_5 + 2,
           *VAR_8 & VAR_1);
  }
 }
}
