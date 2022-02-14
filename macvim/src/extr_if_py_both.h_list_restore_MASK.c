
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* li_prev; } ;
typedef TYPE_1__ listitem_T ;
typedef int list_T ;
typedef size_t Py_ssize_t ;


 int FUNC_0 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(Py_ssize_t VAR_0, Py_ssize_t VAR_1, Py_ssize_t VAR_2,
 list_T *VAR_3, listitem_T **VAR_4, listitem_T *VAR_5)
{
    while (VAR_1--)
    {
 FUNC_0(VAR_3, VAR_4[VAR_1], VAR_4[VAR_2 + VAR_1]);
 FUNC_1(VAR_3, VAR_4[VAR_2 + VAR_1]);
    }
    while (VAR_0--)
    {
 listitem_T *VAR_6;

 VAR_6 = VAR_5->li_prev;
 FUNC_1(VAR_3, VAR_5);
 VAR_5 = VAR_6;
    }
}
