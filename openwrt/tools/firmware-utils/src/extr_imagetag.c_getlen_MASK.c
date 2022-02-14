
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t,int ) ;
 size_t FUNC_1 (int *) ;

size_t FUNC_2(FILE *VAR_2)
{
 size_t VAR_3, VAR_4;

 if (!VAR_2)
  return 0;

 VAR_4 = FUNC_1(VAR_2);
 FUNC_0(VAR_2, 0, VAR_0);
 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_4, VAR_1);

 return VAR_3;
}
