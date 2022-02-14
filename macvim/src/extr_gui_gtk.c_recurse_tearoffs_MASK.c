
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; struct TYPE_3__* children; int * tearoff_handle; int * submenu_id; struct TYPE_3__* next; } ;
typedef TYPE_1__ vimmenu_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(vimmenu_T *VAR_0, int VAR_1)
{
    for (; VAR_0 != ((void*)0); VAR_0 = VAR_0->next)
    {
 if (VAR_0->submenu_id != ((void*)0) && VAR_0->tearoff_handle != ((void*)0)
  && VAR_0->name[0] != ']' && !FUNC_2(VAR_0->name))
 {
     if (VAR_1)
  FUNC_1(VAR_0->tearoff_handle);
     else
  FUNC_0(VAR_0->tearoff_handle);
 }
 FUNC_3(VAR_0->children, VAR_1);
    }
}
