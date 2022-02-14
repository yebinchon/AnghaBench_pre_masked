
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int get_entropy; } ;
struct TYPE_7__ {int ex_data; int get_entropy; } ;
typedef TYPE_1__ RAND_DRBG ;
typedef TYPE_2__ HOOK_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int *) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(RAND_DRBG *VAR_1)
{
    HOOK_CTX *VAR_2 = FUNC_1(VAR_1);

    VAR_1->get_entropy = VAR_2->get_entropy;
    FUNC_0(VAR_0, VAR_1, &VAR_1->ex_data);
}
