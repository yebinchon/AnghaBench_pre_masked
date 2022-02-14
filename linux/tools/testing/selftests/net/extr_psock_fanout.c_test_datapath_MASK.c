
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (int*,scalar_t__) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int*,int,int ) ;
 int FUNC_8 (int,int ) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (int*,char**,int const*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_13(uint16_t VAR_6, int VAR_7,
    const int VAR_8[], const int VAR_9[])
{
 const int VAR_10[] = { 0, 0 };
 char *VAR_11[2];
 uint8_t VAR_12 = VAR_6 & 0xFF;
 int VAR_13[2], VAR_14[2][2], VAR_15;

 FUNC_2(VAR_5, "\ntest: datapath 0x%x ports %ld,%ld\n",
  VAR_6, VAR_3, VAR_3 + VAR_7);

 VAR_13[0] = FUNC_8(VAR_6, 0);
 VAR_13[1] = FUNC_8(VAR_6, 0);
 if (VAR_13[0] == -1 || VAR_13[1] == -1) {
  FUNC_2(VAR_5, "ERROR: failed open\n");
  FUNC_1(1);
 }
 if (VAR_12 == VAR_1)
  FUNC_11(VAR_13[0]);
 else if (VAR_12 == VAR_2)
  FUNC_12(VAR_13[0]);

 VAR_11[0] = FUNC_9(VAR_13[0]);
 VAR_11[1] = FUNC_9(VAR_13[1]);
 FUNC_5(VAR_14[0], VAR_3);
 FUNC_5(VAR_14[1], VAR_3 + VAR_7);
 FUNC_10(VAR_13, VAR_11, VAR_10);


 FUNC_6(VAR_14[0], 15);
 FUNC_7(VAR_14[1], 5, VAR_0);
 VAR_15 = FUNC_10(VAR_13, VAR_11, VAR_8);


 FUNC_7(VAR_14[0], 15, VAR_0);

 VAR_15 |= FUNC_10(VAR_13, VAR_11, VAR_9);

 if (FUNC_4(VAR_11[1], VAR_4 * FUNC_3()) ||
     FUNC_4(VAR_11[0], VAR_4 * FUNC_3())) {
  FUNC_2(VAR_5, "close rings\n");
  FUNC_1(1);
 }
 if (FUNC_0(VAR_14[1][1]) || FUNC_0(VAR_14[1][0]) ||
     FUNC_0(VAR_14[0][1]) || FUNC_0(VAR_14[0][0]) ||
     FUNC_0(VAR_13[1]) || FUNC_0(VAR_13[0])) {
  FUNC_2(VAR_5, "close datapath\n");
  FUNC_1(1);
 }

 return VAR_15;
}
