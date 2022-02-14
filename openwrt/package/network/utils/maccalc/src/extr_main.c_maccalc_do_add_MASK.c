
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(int VAR_2, const char *VAR_3[])
{
 unsigned char VAR_4[VAR_1];
 uint32_t VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_2 != 2) {
  FUNC_3();
  return VAR_0;
 }

 VAR_6 = FUNC_1(VAR_3[0], VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_7 = FUNC_0(VAR_3[1]);

 VAR_5 = (VAR_4[3] << 16) | (VAR_4[4] << 8) | VAR_4[5];
 VAR_5 += VAR_7;
 VAR_4[3] = (VAR_5 >> 16) & 0xff;
 VAR_4[4] = (VAR_5 >> 8) & 0xff;
 VAR_4[5] = VAR_5 & 0xff;

 FUNC_2(VAR_4);
 return 0;
}
