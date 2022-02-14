
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int const*,int *) ;

__attribute__((used)) static int FUNC_3(const u8 VAR_0[16],
    const u8 VAR_1[16], const u8 VAR_2[16], u8 VAR_3[16])
{
 int VAR_4;


 FUNC_1(VAR_3, VAR_2, 8);
 FUNC_1(VAR_3 + 8, VAR_1, 8);

 VAR_4 = FUNC_2(VAR_0, VAR_3);
 if (VAR_4)
  FUNC_0("Encrypt data error");

 return VAR_4;
}
