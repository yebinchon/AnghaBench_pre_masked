
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (int const*,int) ;

__attribute__((used)) static void FUNC_2 (const ut8 *VAR_0, int VAR_1) {
 ut32 VAR_2 = FUNC_1 (VAR_0, VAR_1);
 ut8 *VAR_3 = (ut8*)&VAR_2;
 FUNC_0 ("%02x%02x%02x%02x\n", VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3]);
}
