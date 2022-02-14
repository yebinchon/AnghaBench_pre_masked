
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef size_t ut32 ;
typedef int ut16 ;
typedef scalar_t__ tableType_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const ut8* FUNC_0(ut32 VAR_2, void* VAR_3, tableType_t VAR_4, const ut8* VAR_5) {
 if (VAR_4 == VAR_0) { const ut8** VAR_6 = (const ut8**) VAR_3; return VAR_6[VAR_2]; }
 if (VAR_4 == VAR_1) { const ut32* const VAR_7 = (ut32*) VAR_3; return VAR_7[VAR_2] + VAR_5; }
 { const ut16* const VAR_8 = (ut16*) VAR_3; return VAR_8[VAR_2] + VAR_5; }
}
