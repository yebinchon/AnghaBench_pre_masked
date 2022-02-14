
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct symt_function {scalar_t__ address; } ;
struct module {int dummy; } ;
struct location {scalar_t__ offset; int kind; } ;
struct TYPE_4__ {scalar_t__ Address; } ;
typedef TYPE_1__ IMAGEHLP_LINE64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct module*,struct symt_function*,int ,struct location*,int *) ;
 scalar_t__ FUNC_1 (struct module*,struct symt_function*,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct module*,TYPE_1__*) ;
 int FUNC_3 (struct module*,struct symt_function*) ;

__attribute__((used)) static void FUNC_4(struct module* VAR_2, struct symt_function* VAR_3)
{
    IMAGEHLP_LINE64 VAR_4;
    struct location VAR_5;

    if (!VAR_3) return;
    FUNC_3(VAR_2, VAR_3);



    if (FUNC_1(VAR_2, VAR_3, VAR_3->address, &VAR_4) &&
        FUNC_2(VAR_2, &VAR_4))
    {
        VAR_5.kind = VAR_1;
        VAR_5.offset = VAR_4.Address - VAR_3->address;
        FUNC_0(VAR_2, VAR_3, VAR_0,
                                &VAR_5, ((void*)0));
    }
}
