
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entrysize; int keysize; } ;
typedef int ShmemIndexEnt ;
typedef TYPE_1__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,TYPE_1__*,int) ;

void
FUNC_1(void)
{
 HASHCTL VAR_4;
 int VAR_5;
 VAR_4.keysize = VAR_1;
 VAR_4.entrysize = sizeof(ShmemIndexEnt);
 VAR_5 = VAR_0;

 VAR_3 = FUNC_0("ShmemIndex",
          VAR_2, VAR_2,
          &VAR_4, VAR_5);
}
