
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nscontext {int max_alloc; struct nscontext* ns; void* uri; void* prefix; scalar_t__ count; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct nscontext*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct nscontext* FUNC_3(void)
{
    struct nscontext *VAR_3;

    VAR_3 = FUNC_1(sizeof(*VAR_3));
    if (!VAR_3) return ((void*)0);

    VAR_3->count = 0;
    VAR_3->max_alloc = VAR_0;
    VAR_3->ns = FUNC_1(VAR_3->max_alloc*sizeof(*VAR_3->ns));
    if (!VAR_3->ns)
    {
        FUNC_2(VAR_3);
        return ((void*)0);
    }


    VAR_3->ns[0].prefix = FUNC_0(VAR_1);
    VAR_3->ns[0].uri = FUNC_0(VAR_2);
    VAR_3->count++;
    if (!VAR_3->ns[0].prefix || !VAR_3->ns[0].uri)
    {
        FUNC_2(VAR_3->ns);
        FUNC_2(VAR_3);
        return ((void*)0);
    }

    return VAR_3;
}
