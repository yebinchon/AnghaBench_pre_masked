
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dll_redirect {int dummy; } ;
struct assembly {int allocated_dlls; int num_dlls; struct dll_redirect* dlls; } ;


 int FUNC_0 (char*,struct assembly*,int) ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ,int ,struct dll_redirect*,unsigned int) ;

__attribute__((used)) static struct dll_redirect* FUNC_4(struct assembly* VAR_1)
{
    FUNC_0("add_dll_redirect() to assembly %p, num_dlls %d\n", VAR_1, VAR_1->allocated_dlls);

    if (VAR_1->num_dlls == VAR_1->allocated_dlls)
    {
        void *VAR_2;
        unsigned int VAR_3;
        if (VAR_1->dlls)
        {
            VAR_3 = VAR_1->allocated_dlls * 2;
            VAR_2 = FUNC_3( FUNC_2(), VAR_0,
                                     VAR_1->dlls, VAR_3 * sizeof(*VAR_1->dlls) );
        }
        else
        {
            VAR_3 = 4;
            VAR_2 = FUNC_1( FUNC_2(), VAR_0, VAR_3 * sizeof(*VAR_1->dlls) );
        }
        if (!VAR_2) return ((void*)0);
        VAR_1->dlls = VAR_2;
        VAR_1->allocated_dlls = VAR_3;
    }
    return &VAR_1->dlls[VAR_1->num_dlls++];
}
