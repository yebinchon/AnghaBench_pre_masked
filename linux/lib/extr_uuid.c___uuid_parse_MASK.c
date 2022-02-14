
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, __u8 VAR_2[16], const u8 VAR_3[16])
{
 static const u8 VAR_4[16] = {0,2,4,6,9,11,14,16,19,21,24,26,28,30,32,34};
 unsigned int VAR_5;

 if (!FUNC_1(VAR_1))
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  int VAR_6 = FUNC_0(VAR_1[VAR_4[VAR_5] + 0]);
  int VAR_7 = FUNC_0(VAR_1[VAR_4[VAR_5] + 1]);

  VAR_2[VAR_3[VAR_5]] = (VAR_6 << 4) | VAR_7;
 }

 return 0;
}
