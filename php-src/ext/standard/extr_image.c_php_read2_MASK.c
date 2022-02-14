
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int php_stream ;
typedef int a ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static unsigned short FUNC_1(php_stream * VAR_0)
{
 unsigned char VAR_1[2];


 if((FUNC_0(VAR_0, (char *) VAR_1, sizeof(VAR_1))) < sizeof(VAR_1)) return 0;

 return (((unsigned short)VAR_1[0]) << 8) + ((unsigned short)VAR_1[1]);
}
