
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_archive {int * arch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mp_archive *VAR_0)
{
    if (VAR_0 && VAR_0->arch) {
        FUNC_0(VAR_0->arch);
        FUNC_1(VAR_0->arch);
        VAR_0->arch = ((void*)0);
    }
}
