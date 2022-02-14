
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int totalsize; } ;
typedef TYPE_1__ PGShmemHeader ;


 void* VAR_0 ;
 char* VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_0(void *VAR_3)
{
 PGShmemHeader *VAR_4 = (PGShmemHeader *) VAR_3;

 VAR_2 = VAR_4;
 VAR_0 = (void *) VAR_4;
 VAR_1 = (char *) VAR_0 + VAR_4->totalsize;
}
