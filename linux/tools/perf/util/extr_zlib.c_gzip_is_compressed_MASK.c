
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int const*,int) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int,char*,int) ;

bool FUNC_4(const char *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1, VAR_0);
 const uint8_t VAR_3[2] = { 0x1f, 0x8b };
 char VAR_4[2] = { 0 };
 ssize_t VAR_5;

 if (VAR_2 < 0)
  return -1;

 VAR_5 = FUNC_3(VAR_2, VAR_4, sizeof(VAR_4));
 FUNC_0(VAR_2);
 return VAR_5 == sizeof(VAR_4) ?
        FUNC_1(VAR_4, VAR_3, sizeof(VAR_4)) == 0 : 0;
}
