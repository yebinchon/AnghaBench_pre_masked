
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static bool FUNC_3(unsigned char **VAR_1,
         int *VAR_2,
         int VAR_3,
         int VAR_4)
{
 unsigned char *VAR_5;

 VAR_5 = FUNC_1(VAR_3 + VAR_4, VAR_0);


 if (!VAR_5)
  return 0;

 FUNC_2(VAR_5, *VAR_1, VAR_3);
 FUNC_0(*VAR_1);
 *VAR_1 = VAR_5;
 *VAR_2 = VAR_3 + VAR_4;

 return 1;
}
