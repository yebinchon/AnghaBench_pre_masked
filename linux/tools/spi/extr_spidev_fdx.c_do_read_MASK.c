
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int,unsigned char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(int VAR_1, int VAR_2)
{
 unsigned char VAR_3[32], *VAR_4;
 int VAR_5;


 if (VAR_2 < 2)
  VAR_2 = 2;
 else if (VAR_2 > sizeof(VAR_3))
  VAR_2 = sizeof(VAR_3);
 FUNC_1(VAR_3, 0, sizeof VAR_3);

 VAR_5 = FUNC_4(VAR_1, VAR_3, VAR_2);
 if (VAR_5 < 0) {
  FUNC_2("read");
  return;
 }
 if (VAR_5 != VAR_2) {
  FUNC_0(VAR_0, "short read\n");
  return;
 }

 FUNC_3("read(%2d, %2d): %02x %02x,", VAR_2, VAR_5,
  VAR_3[0], VAR_3[1]);
 VAR_5 -= 2;
 VAR_4 = VAR_3 + 2;
 while (VAR_5-- > 0)
  FUNC_3(" %02x", *VAR_4++);
 FUNC_3("\n");
}
