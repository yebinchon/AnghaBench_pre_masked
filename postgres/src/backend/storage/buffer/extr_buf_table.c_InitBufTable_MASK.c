
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keysize; int entrysize; int num_partitions; } ;
typedef TYPE_1__ HASHCTL ;
typedef int BufferTag ;
typedef int BufferLookupEnt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int,TYPE_1__*,int) ;

void
FUNC_1(int VAR_5)
{
 HASHCTL VAR_6;




 VAR_6.keysize = sizeof(BufferTag);
 VAR_6.entrysize = sizeof(BufferLookupEnt);
 VAR_6.num_partitions = VAR_3;

 VAR_4 = FUNC_0("Shared Buffer Lookup Table",
          VAR_5, VAR_5,
          &VAR_6,
          VAR_1 | VAR_0 | VAR_2);
}
