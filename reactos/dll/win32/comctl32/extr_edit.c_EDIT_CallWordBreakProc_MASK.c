
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ text; scalar_t__ (* word_break_proc ) (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;} ;
typedef scalar_t__ INT ;
typedef TYPE_1__ EDITSTATE ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static INT FUNC_2(EDITSTATE *VAR_0, INT VAR_1, INT VAR_2, INT VAR_3, INT VAR_4)
{
    INT VAR_5;

    if (VAR_0->word_break_proc)
        VAR_5 = VAR_0->word_break_proc(VAR_0->text + VAR_1, VAR_2, VAR_3, VAR_4);
    else
        VAR_5 = FUNC_0(VAR_0, VAR_0->text, VAR_2 + VAR_1, VAR_3 + VAR_1, VAR_4) - VAR_1;

    return VAR_5;
}
