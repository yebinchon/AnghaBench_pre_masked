
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (unsigned char*,size_t,int ,int ) ;

__attribute__((used)) static bool FUNC_1(unsigned char **VAR_2, size_t *VAR_3)
{
 unsigned char *VAR_4;

 VAR_4 = FUNC_0(*VAR_2, *VAR_3, VAR_1, VAR_0);
 if (VAR_4) {
  *VAR_3 -= VAR_4 - *VAR_2;
  *VAR_2 = VAR_4;
  return 1;
 }
 return 0;
}
