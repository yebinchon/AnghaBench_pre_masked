
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pg_crc32 ;


 int FUNC_0 (scalar_t__,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char) ;

unsigned int
FUNC_4(char *VAR_0, int VAR_1)
{
 pg_crc32 VAR_2;
 char *VAR_3 = VAR_0;

 FUNC_2(VAR_2);
 while (VAR_1 > 0)
 {
  char VAR_4 = (char) FUNC_3(*VAR_3);

  FUNC_0(VAR_2, &VAR_4, 1);
  VAR_1--;
  VAR_3++;
 }
 FUNC_1(VAR_2);
 return (unsigned int) VAR_2;
}
