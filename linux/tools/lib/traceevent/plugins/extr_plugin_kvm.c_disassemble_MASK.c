
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (char*,char*,unsigned char) ;

__attribute__((used)) static const char *FUNC_1(unsigned char *VAR_0, int VAR_1, uint64_t VAR_2,
          int VAR_3, int VAR_4,
          int VAR_5, int VAR_6)
{
 static char VAR_7[15*3+1];
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8)
  FUNC_0(VAR_7 + VAR_8 * 3, "%02x ", VAR_0[VAR_8]);
 VAR_7[VAR_1*3-1] = '\0';
 return VAR_7;
}
