
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * Relids ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static Relids
FUNC_2(Relids VAR_0, int VAR_1)
{
 Relids VAR_2 = ((void*)0);
 int VAR_3;

 VAR_3 = -1;
 while ((VAR_3 = FUNC_1(VAR_0, VAR_3)) >= 0)
  VAR_2 = FUNC_0(VAR_2, VAR_3 + VAR_1);
 return VAR_2;
}
