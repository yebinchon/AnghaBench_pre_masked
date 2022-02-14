
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ut8 ;
struct TYPE_6__ {scalar_t__ opcode_base; } ;
typedef int RBinDwarfSMRegisters ;
typedef TYPE_1__ RBinDwarfLNPHeader ;
typedef int RBin ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_0 (int const*,scalar_t__ const*,size_t,TYPE_1__ const*,int *,int *,int) ;
 scalar_t__* FUNC_1 (int const*,scalar_t__ const*,size_t,TYPE_1__ const*,int *,scalar_t__,int *,int) ;
 scalar_t__* FUNC_2 (int const*,scalar_t__ const*,size_t,TYPE_1__ const*,int *,scalar_t__,int *,int) ;

__attribute__((used)) static const ut8* FUNC_3(const RBin *VAR_1, const ut8 *VAR_2,
  size_t VAR_3, const RBinDwarfLNPHeader *VAR_4,
  RBinDwarfSMRegisters *VAR_5, FILE *VAR_6, int VAR_7) {
 const ut8 *VAR_8, *VAR_9;
 ut8 VAR_10, VAR_11;

 if (!VAR_1 || !VAR_2 || VAR_3 < 8) {
  return ((void*)0);
 }
 VAR_8 = VAR_2;
 VAR_9 = VAR_2 + VAR_3;

 while (VAR_8 && VAR_8 + 1 < VAR_9) {
  VAR_10 = *VAR_8++;
  VAR_3--;
  if (!VAR_10) {
   VAR_11 = *VAR_8;
   VAR_8 = FUNC_0 (VAR_1, VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
   if (VAR_11 == VAR_0) {
    break;
   }
  } else if (VAR_10 >= VAR_4->opcode_base) {
   VAR_8 = FUNC_1 (VAR_1, VAR_8, VAR_3, VAR_4, VAR_5, VAR_10, VAR_6, VAR_7);
  } else {
   VAR_8 = FUNC_2 (VAR_1, VAR_8, VAR_3, VAR_4, VAR_5, VAR_10, VAR_6, VAR_7);
  }
  VAR_3 = (int)(VAR_9 - VAR_8);
 }
 return VAR_8;
}
