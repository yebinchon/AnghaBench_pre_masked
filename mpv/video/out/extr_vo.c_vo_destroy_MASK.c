
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int thread; int dispatch; } ;
struct vo {struct vo_internal* in; } ;


 int FUNC_0 (struct vo*) ;
 int FUNC_1 (int ,int ,struct vo*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;

void FUNC_3(struct vo *VAR_1)
{
    struct vo_internal *VAR_2 = VAR_1->in;
    FUNC_1(VAR_2->dispatch, VAR_0, VAR_1);
    FUNC_2(VAR_1->in->thread, ((void*)0));
    FUNC_0(VAR_1);
}
