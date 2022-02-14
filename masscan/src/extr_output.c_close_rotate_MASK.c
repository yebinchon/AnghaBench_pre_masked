
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Output {scalar_t__ format; int counts; TYPE_1__* funcs; int is_virgin_file; } ;
struct TYPE_2__ {int (* close ) (struct Output*,int *) ;} ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct Output*,int *) ;

__attribute__((used)) static void
FUNC_4(struct Output *VAR_1, FILE *VAR_2)
{
    if (VAR_1 == ((void*)0))
        return;
    if (VAR_2 == ((void*)0))
        return;




    if (!VAR_1->is_virgin_file)
        VAR_1->funcs->close(VAR_1, VAR_2);

    FUNC_2(&VAR_1->counts, 0, sizeof(VAR_1->counts));


    if (VAR_1->format == VAR_0)
        return;

    FUNC_1(VAR_2);
    FUNC_0(VAR_2);
}
