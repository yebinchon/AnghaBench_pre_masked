
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dsm_op ;
typedef int dsm_handle ;
typedef scalar_t__ Size ;


 int FUNC_0 (int) ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int ,scalar_t__,void**,void**,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__,void**,void**,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__,void**,void**,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__,void**,void**,scalar_t__*,int) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,int) ;

bool
FUNC_6(dsm_op VAR_4, dsm_handle VAR_5, Size VAR_6,
   void **VAR_7, void **VAR_8, Size *VAR_9,
   int VAR_10)
{
 FUNC_0(VAR_4 == VAR_1 || VAR_6 == 0);
 FUNC_0((VAR_4 != VAR_1 && VAR_4 != VAR_0) ||
     (*VAR_8 == ((void*)0) && *VAR_9 == 0));

 switch (VAR_3)
 {
  default:
   FUNC_5(VAR_2, "unexpected dynamic shared memory type: %d",
     VAR_3);
   return 0;
 }
}
