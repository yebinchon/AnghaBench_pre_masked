
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int terminate; } ;
struct vo {struct vo_internal* in; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0)
{
    struct vo *VAR_1 = VAR_0;
    struct vo_internal *VAR_2 = VAR_1->in;
    VAR_2->terminate = 1;
}
