
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int atomic_u32_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,unsigned int,char*,...) ;
 int FUNC_2 (unsigned int,unsigned int,char*) ;
 int FUNC_3 (int *,int,int ) ;
 unsigned int FUNC_4 (int *,unsigned int,int) ;

__attribute__((used)) static void
FUNC_5(bool VAR_1) {
 atomic_u32_t VAR_2, VAR_3;
 uint32_t VAR_4, VAR_5;
 unsigned VAR_6;

 FUNC_3(&VAR_2, 42, VAR_0);
 VAR_4 = FUNC_4(&VAR_2, 32, VAR_1);
 FUNC_3(&VAR_2, 42, VAR_0);
 VAR_5 = FUNC_4(&VAR_2, 32, VAR_1);
 FUNC_1(VAR_4, VAR_5,
     "Repeated generation should produce repeated results");

 FUNC_3(&VAR_3, 42, VAR_0);
 VAR_5 = FUNC_4(&VAR_3, 32, VAR_1);
 FUNC_1(VAR_4, VAR_5,
     "Equivalent generation should produce equivalent results");

 FUNC_3(&VAR_2, 42, VAR_0);
 VAR_4 = FUNC_4(&VAR_2, 32, VAR_1);
 VAR_5 = FUNC_4(&VAR_2, 32, VAR_1);
 FUNC_2(VAR_4, VAR_5,
     "Full-width results must not immediately repeat");

 FUNC_3(&VAR_2, 42, VAR_0);
 VAR_4 = FUNC_4(&VAR_2, 32, VAR_1);
 for (VAR_6 = 31; VAR_6 > 0; VAR_6--) {
  FUNC_3(&VAR_3, 42, VAR_0);
  VAR_5 = FUNC_4(&VAR_3, VAR_6, VAR_1);
  FUNC_1((VAR_5 & (FUNC_0(0xffffffff) << VAR_6)),
      0, "High order bits should be 0, lg_range=%u", VAR_6);
  FUNC_1(VAR_5, (VAR_4 >> (32 - VAR_6)),
      "Expected high order bits of full-width result, "
      "lg_range=%u", VAR_6);
 }
}
