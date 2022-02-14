
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_9__ {TYPE_1__* anal; } ;
struct TYPE_8__ {int reg; } ;
typedef TYPE_2__ RAnalEsil ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,char*,scalar_t__*) ;
 char* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,char*,scalar_t__*,int *) ;

__attribute__((used)) static bool FUNC_5 (RAnalEsil *VAR_0) {
 if (!VAR_0 || !VAR_0->anal || !VAR_0->anal->reg) {
  return 0;
 }
 char *VAR_1 = FUNC_2(VAR_0);
 ut64 VAR_2;
 if (!VAR_1 || !FUNC_1(VAR_0, VAR_1, &VAR_2)) {
  return 0;
 }
 FUNC_0 (VAR_1);
 ut8 VAR_3 = (ut8)VAR_2;
 FUNC_4 (VAR_0, "H", &VAR_2, ((void*)0));
 const ut8 VAR_4 = (ut8)VAR_2;
 FUNC_4 (VAR_0, "C", &VAR_2, ((void*)0));
 const ut8 VAR_5 = (ut8)VAR_2;
 FUNC_4 (VAR_0, "N", &VAR_2, ((void*)0));
 if (VAR_2) {
  if (VAR_5) {
   VAR_3 = (VAR_3 - 0x60) & 0xff;
  }
  if (VAR_4) {
   VAR_3 = (VAR_3 - 0x06) & 0xff;
  }
 } else {
  if (VAR_5 || (VAR_3 > 0x99)) {
   VAR_3 = (VAR_3 + 0x60) & 0xff;
  }
  if (VAR_4 || ((VAR_3 & 0x0f) > 0x09)) {
   VAR_3 += 0x06;
  };
 }
 return FUNC_3(VAR_0, VAR_3);
}
