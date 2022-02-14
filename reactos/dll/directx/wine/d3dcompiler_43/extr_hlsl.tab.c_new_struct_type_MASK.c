
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list {int dummy; } ;
struct TYPE_3__ {struct list* elements; } ;
struct hlsl_type {char const* name; int dimx; int dimy; int entry; TYPE_1__ e; int modifiers; int type; } ;
struct TYPE_4__ {int types; } ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct hlsl_type* FUNC_1 (int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static struct hlsl_type *FUNC_3(const char *VAR_2, DWORD VAR_3, struct list *VAR_4)
{
    struct hlsl_type *VAR_5 = FUNC_1(sizeof(*VAR_5));

    if (!VAR_5)
    {
        FUNC_0("Out of memory.\n");
        return ((void*)0);
    }
    VAR_5->type = VAR_0;
    VAR_5->name = VAR_2;
    VAR_5->dimx = VAR_5->dimy = 1;
    VAR_5->modifiers = VAR_3;
    VAR_5->e.elements = VAR_4;

    FUNC_2(&VAR_1.types, &VAR_5->entry);

    return VAR_5;
}
