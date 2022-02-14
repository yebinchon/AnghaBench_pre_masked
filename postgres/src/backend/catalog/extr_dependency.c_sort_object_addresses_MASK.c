
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numrefs; scalar_t__ refs; } ;
typedef TYPE_1__ ObjectAddresses ;
typedef int ObjectAddress ;


 int VAR_0 ;
 int FUNC_0 (void*,int,int,int ) ;

void
FUNC_1(ObjectAddresses *VAR_1)
{
 if (VAR_1->numrefs > 1)
  FUNC_0((void *) VAR_1->refs, VAR_1->numrefs,
     sizeof(ObjectAddress),
     VAR_0);
}
