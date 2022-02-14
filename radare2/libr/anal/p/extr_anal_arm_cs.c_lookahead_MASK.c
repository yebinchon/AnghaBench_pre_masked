
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int csh ;
struct TYPE_4__ {int address; } ;
typedef TYPE_1__ cs_insn ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int,int const,int,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static ut64 FUNC_2(csh VAR_1, const ut64 VAR_2, const ut8 *VAR_3, int VAR_4, int VAR_5) {
 cs_insn *VAR_6 = ((void*)0);
 int VAR_7 = FUNC_0 (VAR_1, VAR_3, VAR_4, VAR_2, VAR_5, &VAR_6);
 if (VAR_7 < 1) {
  return VAR_0;
 }
 ut64 VAR_8 = VAR_6[VAR_7 - 1].address;
 FUNC_1 (VAR_6, VAR_7);
 return VAR_8;
}
