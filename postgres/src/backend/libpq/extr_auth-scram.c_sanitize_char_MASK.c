
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,int,char*,unsigned char) ;

__attribute__((used)) static char *
FUNC_1(char VAR_0)
{
 static char VAR_1[5];

 if (VAR_0 >= 0x21 && VAR_0 <= 0x7E)
  FUNC_0(VAR_1, sizeof(VAR_1), "'%c'", VAR_0);
 else
  FUNC_0(VAR_1, sizeof(VAR_1), "0x%02x", (unsigned char) VAR_0);
 return VAR_1;
}
