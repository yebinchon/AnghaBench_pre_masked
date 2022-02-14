
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
typedef int ut16 ;


 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (void*,int ,int) ;

__attribute__((used)) static inline void FUNC_4(void *VAR_0, ut64 VAR_1, bool VAR_2, int VAR_3) {
 switch (VAR_3) {
 case 8:
  ((ut8*)VAR_0)[0] = (ut8) VAR_1;
  break;
 case 16:
  FUNC_0 (VAR_0, (ut16) VAR_1, VAR_2);
  break;
 case 24:
  FUNC_1 (VAR_0, (ut32) VAR_1, VAR_2);
  break;
 case 32:
  FUNC_2 (VAR_0, (ut32) VAR_1, VAR_2);
  break;
 case 64:
  FUNC_3 (VAR_0, VAR_1, VAR_2);
  break;
 default:
  break;
 }
}
