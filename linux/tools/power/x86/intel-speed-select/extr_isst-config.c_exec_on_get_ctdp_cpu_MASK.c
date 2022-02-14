
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ,void*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(int VAR_1, void *VAR_2, void *VAR_3, void *VAR_4,
     void *VAR_5)
{
 int (*VAR_6)(int VAR_7, void *VAR_8);
 int VAR_9;

 VAR_6 = VAR_2;
 VAR_9 = VAR_6(VAR_1, VAR_3);
 if (VAR_9)
  FUNC_1("get_tdp_*");
 else
  FUNC_0(VAR_1, VAR_0, VAR_4,
         *(unsigned int *)VAR_5);
}
