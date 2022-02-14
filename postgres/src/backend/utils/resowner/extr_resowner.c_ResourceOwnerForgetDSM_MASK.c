
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dsm_segment ;
struct TYPE_3__ {int name; int dsmarr; } ;
typedef TYPE_1__* ResourceOwner ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ,int ) ;

void
FUNC_4(ResourceOwner VAR_1, dsm_segment *VAR_2)
{
 if (!FUNC_1(&(VAR_1->dsmarr), FUNC_0(VAR_2)))
  FUNC_3(VAR_0, "dynamic shared memory segment %u is not owned by resource owner %s",
    FUNC_2(VAR_2), VAR_1->name);
}
