
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xslprocessor_params {int count; } ;
struct xslprocessor_par {int value; int name; int entry; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct xslprocessor_par*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct xslprocessor_params *VAR_0, struct xslprocessor_par *VAR_1)
{
    VAR_0->count--;
    FUNC_2(&VAR_1->entry);
    FUNC_0(VAR_1->name);
    FUNC_0(VAR_1->value);
    FUNC_1(VAR_1);
}
