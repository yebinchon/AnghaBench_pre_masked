
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int*,int) ;
 scalar_t__ FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;

__attribute__((used)) static bool
FUNC_5(void)
{
 uint64 VAR_6 = 42;
 int VAR_7;





 FUNC_3(VAR_2, VAR_4);
 if (FUNC_4(VAR_5, 1) == 0)
 {

  VAR_7 = (FUNC_1(0, &VAR_6, sizeof(VAR_6)) ==
      FUNC_2(0, &VAR_6, sizeof(VAR_6)));
 }
 else
 {

  VAR_7 = -1;
 }
 FUNC_3(VAR_2, VAR_3);



 if (VAR_7 == 0)
  FUNC_0(VAR_1, "crc32 hardware and software results disagree");

 FUNC_0(VAR_0, "using armv8 crc32 hardware = %d", (VAR_7 > 0));


 return (VAR_7 > 0);
}
