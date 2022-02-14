
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int locktag_lockmethodid; } ;
typedef int LockMethod ;
typedef TYPE_1__ LOCKTAG ;
typedef size_t LOCKMETHODID ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 size_t FUNC_1 (int *) ;

LockMethod
FUNC_2(const LOCKTAG *VAR_1)
{
 LOCKMETHODID VAR_2 = (LOCKMETHODID) VAR_1->locktag_lockmethodid;

 FUNC_0(0 < VAR_2 && VAR_2 < FUNC_1(VAR_0));
 return VAR_0[VAR_2];
}
