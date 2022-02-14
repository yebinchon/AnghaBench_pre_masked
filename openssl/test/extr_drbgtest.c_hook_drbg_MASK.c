
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int get_entropy; TYPE_1__* drbg; } ;
struct TYPE_8__ {int get_entropy; } ;
typedef TYPE_1__ RAND_DRBG ;
typedef TYPE_2__ HOOK_CTX ;


 int FUNC_0 (TYPE_1__*,int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_2(RAND_DRBG *VAR_2, HOOK_CTX *VAR_3)
{
    FUNC_1(VAR_3, 0, sizeof(*VAR_3));
    VAR_3->drbg = VAR_2;
    VAR_3->get_entropy = VAR_2->get_entropy;
    VAR_2->get_entropy = VAR_1;
    FUNC_0(VAR_2, VAR_0, VAR_3);
}
