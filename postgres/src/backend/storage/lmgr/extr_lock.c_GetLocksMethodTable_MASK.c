
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LockMethod ;
typedef size_t LOCKMETHODID ;
typedef int LOCK ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int const) ;
 int * VAR_0 ;
 size_t FUNC_2 (int *) ;

LockMethod
FUNC_3(const LOCK *VAR_1)
{
 LOCKMETHODID VAR_2 = FUNC_1(*VAR_1);

 FUNC_0(0 < VAR_2 && VAR_2 < FUNC_2(VAR_0));
 return VAR_0[VAR_2];
}
