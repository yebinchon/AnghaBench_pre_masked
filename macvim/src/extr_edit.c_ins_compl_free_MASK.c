
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int cp_flags; struct TYPE_7__** cp_text; struct TYPE_7__* cp_fname; struct TYPE_7__* cp_str; struct TYPE_7__* cp_next; } ;
typedef TYPE_1__ compl_T ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3()
{
    compl_T *VAR_7;
    int VAR_8;

    FUNC_2(VAR_5);
    VAR_5 = ((void*)0);
    FUNC_2(VAR_4);
    VAR_4 = ((void*)0);

    if (VAR_3 == ((void*)0))
 return;

    FUNC_0();
    FUNC_1();

    VAR_2 = VAR_3;
    do
    {
 VAR_7 = VAR_2;
 VAR_2 = VAR_2->cp_next;
 FUNC_2(VAR_7->cp_str);

 if (VAR_7->cp_flags & VAR_1)
     FUNC_2(VAR_7->cp_fname);
 for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8)
     FUNC_2(VAR_7->cp_text[VAR_8]);
 FUNC_2(VAR_7);
    } while (VAR_2 != ((void*)0) && VAR_2 != VAR_3);
    VAR_3 = VAR_2 = ((void*)0);
    VAR_6 = ((void*)0);
}
