
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int php_stream ;
typedef int a ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static unsigned int FUNC_1(php_stream * VAR_0)
{
 unsigned char VAR_1[4];


 if ((FUNC_0(VAR_0, (char*)VAR_1, sizeof(VAR_1))) != sizeof(VAR_1)) return 0;

 return (((unsigned int)VAR_1[0]) << 24)
      + (((unsigned int)VAR_1[1]) << 16)
      + (((unsigned int)VAR_1[2]) << 8)
      + (((unsigned int)VAR_1[3]));
}
