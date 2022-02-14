
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int line; struct TYPE_3__* parent; struct TYPE_3__* prev; struct TYPE_3__* next; struct TYPE_3__* children; int * psvi; } ;
typedef TYPE_1__ xmlNode ;
typedef scalar_t__ ptrdiff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static long
FUNC_0(const xmlNode *VAR_4, int VAR_5)
{
    long VAR_6 = -1;

    if (VAR_5 >= 5)
        return(-1);

    if (!VAR_4)
        return VAR_6;
    if ((VAR_4->type == VAR_1) ||
        (VAR_4->type == VAR_3) ||
 (VAR_4->type == VAR_0) ||
 (VAR_4->type == VAR_2)) {
 if (VAR_4->line == 65535) {
     if ((VAR_4->type == VAR_3) && (VAR_4->psvi != ((void*)0)))
         VAR_6 = (long) (ptrdiff_t) VAR_4->psvi;
     else if ((VAR_4->type == VAR_1) &&
              (VAR_4->children != ((void*)0)))
         VAR_6 = FUNC_0(VAR_4->children, VAR_5 + 1);
     else if (VAR_4->next != ((void*)0))
         VAR_6 = FUNC_0(VAR_4->next, VAR_5 + 1);
     else if (VAR_4->prev != ((void*)0))
         VAR_6 = FUNC_0(VAR_4->prev, VAR_5 + 1);
 }
 if ((VAR_6 == -1) || (VAR_6 == 65535))
     VAR_6 = (long) VAR_4->line;
    } else if ((VAR_4->prev != ((void*)0)) &&
             ((VAR_4->prev->type == VAR_1) ||
       (VAR_4->prev->type == VAR_3) ||
       (VAR_4->prev->type == VAR_0) ||
       (VAR_4->prev->type == VAR_2)))
        VAR_6 = FUNC_0(VAR_4->prev, VAR_5 + 1);
    else if ((VAR_4->parent != ((void*)0)) &&
             (VAR_4->parent->type == VAR_1))
        VAR_6 = FUNC_0(VAR_4->parent, VAR_5 + 1);

    return VAR_6;
}
