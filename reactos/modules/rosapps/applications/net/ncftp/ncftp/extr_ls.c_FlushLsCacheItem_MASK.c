
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {int fil; scalar_t__ expiration; int * itempath; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*,int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_3(int VAR_1)
{
 FUNC_1(1, "flush ls cache item: %s\n", VAR_0[VAR_1].itempath);
 if (VAR_0[VAR_1].itempath != ((void*)0))
  FUNC_2(VAR_0[VAR_1].itempath);
 VAR_0[VAR_1].itempath = ((void*)0);
 VAR_0[VAR_1].expiration = (time_t) 0;
 FUNC_0(&VAR_0[VAR_1].fil);
}
