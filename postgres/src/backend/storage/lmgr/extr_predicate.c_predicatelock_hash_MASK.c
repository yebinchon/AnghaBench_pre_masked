
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {TYPE_1__* myTarget; } ;
struct TYPE_4__ {int tag; } ;
typedef int Size ;
typedef TYPE_2__ PREDICATELOCKTAG ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__ const*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static uint32
FUNC_3(const void *VAR_0, Size VAR_1)
{
 const PREDICATELOCKTAG *VAR_2 = (const PREDICATELOCKTAG *) VAR_0;
 uint32 VAR_3;

 FUNC_0(VAR_1 == sizeof(PREDICATELOCKTAG));


 VAR_3 = FUNC_2(&VAR_2->myTarget->tag);

 return FUNC_1(VAR_2, VAR_3);
}
