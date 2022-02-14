
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SFPO_DATA_V2 ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, int VAR_1, int *VAR_2, SFPO_DATA_V2 *VAR_3)
{
 int VAR_4 = *VAR_2;

 FUNC_0(VAR_3, VAR_0, sizeof(SFPO_DATA_V2));
 *VAR_2 += sizeof(SFPO_DATA_V2);

 return (*VAR_2 - VAR_4);
}
