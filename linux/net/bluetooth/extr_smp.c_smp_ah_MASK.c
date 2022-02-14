
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int const*,int const*,int) ;
 int FUNC_2 (int const*,int ,int) ;
 int FUNC_3 (int const*,int const*) ;

__attribute__((used)) static int FUNC_4(const u8 VAR_0[16], const u8 VAR_1[3], u8 VAR_2[3])
{
 u8 VAR_3[16];
 int VAR_4;


 FUNC_1(VAR_3, VAR_1, 3);
 FUNC_2(VAR_3 + 3, 0, 13);

 VAR_4 = FUNC_3(VAR_0, VAR_3);
 if (VAR_4) {
  FUNC_0("Encrypt error");
  return VAR_4;
 }







 FUNC_1(VAR_2, VAR_3, 3);

 return 0;
}
