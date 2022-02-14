
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(void)
{
 int VAR_2;
 int *VAR_3;

 VAR_3 = (int *) ((char *) VAR_0 - sizeof(int));
 FUNC_0(VAR_1);
 VAR_2 = (*VAR_3)++;
 FUNC_1(VAR_1);

 return VAR_2;
}
