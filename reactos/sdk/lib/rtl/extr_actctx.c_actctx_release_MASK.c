
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct dll_redirect* info; } ;
struct dll_redirect {unsigned int num_dlls; scalar_t__ MagicMarker; int id; int entities; struct dll_redirect* compat_contexts; struct dll_redirect* directory; TYPE_1__ manifest; struct dll_redirect* dlls; struct dll_redirect* hash; struct dll_redirect* name; } ;
struct assembly {unsigned int num_dlls; scalar_t__ MagicMarker; int id; int entities; struct assembly* compat_contexts; struct assembly* directory; TYPE_1__ manifest; struct assembly* dlls; struct assembly* hash; struct assembly* name; } ;
struct TYPE_9__ {struct dll_redirect* info; } ;
struct TYPE_8__ {struct dll_redirect* info; } ;
struct TYPE_10__ {unsigned int num_assemblies; struct dll_redirect* progid_section; struct dll_redirect* clrsurrogate_section; struct dll_redirect* ifaceps_section; struct dll_redirect* comserver_section; struct dll_redirect* tlib_section; struct dll_redirect* wndclass_section; struct dll_redirect* dllredirect_section; struct dll_redirect* assemblies; TYPE_3__ appdir; TYPE_2__ config; int RefCount; } ;
typedef struct dll_redirect* PACTIVATION_CONTEXT_WRAPPED ;
typedef TYPE_4__ ACTIVATION_CONTEXT ;


 int VAR_0 ;
 int VAR_1 ;
 struct dll_redirect* FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,struct dll_redirect*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6( ACTIVATION_CONTEXT *VAR_2 )
{
    PACTIVATION_CONTEXT_WRAPPED VAR_3;

    if (FUNC_1(&VAR_2->RefCount, -1) == 1)
    {
        unsigned int VAR_4, VAR_5;

        for (VAR_4 = 0; VAR_4 < VAR_2->num_assemblies; VAR_4++)
        {
            struct assembly *VAR_6 = &VAR_2->assemblies[VAR_4];
            for (VAR_5 = 0; VAR_5 < VAR_6->num_dlls; VAR_5++)
            {
                struct dll_redirect *VAR_7 = &VAR_6->dlls[VAR_5];
                FUNC_5( &VAR_7->entities );
                FUNC_2( FUNC_3(), 0, VAR_7->name );
                FUNC_2( FUNC_3(), 0, VAR_7->hash );
            }
            FUNC_2( FUNC_3(), 0, VAR_6->dlls );
            FUNC_2( FUNC_3(), 0, VAR_6->manifest.info );
            FUNC_2( FUNC_3(), 0, VAR_6->directory );
            FUNC_2( FUNC_3(), 0, VAR_6->compat_contexts );
            FUNC_5( &VAR_6->entities );
            FUNC_4(&VAR_6->id);
        }
        FUNC_2( FUNC_3(), 0, VAR_2->config.info );
        FUNC_2( FUNC_3(), 0, VAR_2->appdir.info );
        FUNC_2( FUNC_3(), 0, VAR_2->assemblies );
        FUNC_2( FUNC_3(), 0, VAR_2->dllredirect_section );
        FUNC_2( FUNC_3(), 0, VAR_2->wndclass_section );
        FUNC_2( FUNC_3(), 0, VAR_2->tlib_section );
        FUNC_2( FUNC_3(), 0, VAR_2->comserver_section );
        FUNC_2( FUNC_3(), 0, VAR_2->ifaceps_section );
        FUNC_2( FUNC_3(), 0, VAR_2->clrsurrogate_section );
        FUNC_2( FUNC_3(), 0, VAR_2->progid_section );

        VAR_3 = FUNC_0(VAR_2, VAR_0, VAR_1);
        VAR_3->MagicMarker = 0;
        FUNC_2(FUNC_3(), 0, VAR_3);
    }
}
