
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (void*,int ,size_t) ;
 int VAR_3 ;
 int FUNC_2 (char*,void*) ;
 int FUNC_3 (int *) ;

void *FUNC_4(size_t VAR_4, gfp_t VAR_5)
{
 void *VAR_6;

 if (!(VAR_5 & VAR_0))
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_4);
 FUNC_3(&VAR_3);
 if (VAR_2)
  FUNC_2("Allocating %p from malloc\n", VAR_6);
 if (VAR_5 & VAR_1)
  FUNC_1(VAR_6, 0, VAR_4);
 return VAR_6;
}
