
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_22__ {char* attributes; void* installed; void** clr_version; struct TYPE_22__* display_name; struct TYPE_22__* application; struct TYPE_22__* manifest; struct TYPE_22__* feature; } ;
struct TYPE_21__ {int Component; } ;
struct TYPE_20__ {int * cache_net; int cache_sxs; int db; } ;
struct TYPE_19__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIPACKAGE ;
typedef TYPE_3__ MSICOMPONENT ;
typedef TYPE_4__ MSIASSEMBLY ;


 size_t VAR_0 ;
 void* VAR_1 ;
 char* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*,char*) ;
 void* VAR_2 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int ,int ,TYPE_4__*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_7 (size_t) ;
 void* FUNC_8 (int ,TYPE_4__*) ;
 TYPE_4__* FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (int ) ;

MSIASSEMBLY *FUNC_13( MSIPACKAGE *VAR_4, MSICOMPONENT *VAR_5 )
{
    MSIRECORD *VAR_6;
    MSIASSEMBLY *VAR_7;

    if (!(VAR_6 = FUNC_6( VAR_4, VAR_5->Component ))) return ((void*)0);
    if (!(VAR_7 = FUNC_9( sizeof(MSIASSEMBLY) )))
    {
        FUNC_11( &VAR_6->hdr );
        return ((void*)0);
    }
    VAR_7->feature = FUNC_12( FUNC_1( VAR_6, 2 ) );
    FUNC_2("feature %s\n", FUNC_4(VAR_7->feature));

    VAR_7->manifest = FUNC_12( FUNC_1( VAR_6, 3 ) );
    FUNC_2("manifest %s\n", FUNC_4(VAR_7->manifest));

    VAR_7->application = FUNC_12( FUNC_1( VAR_6, 4 ) );
    FUNC_2("application %s\n", FUNC_4(VAR_7->application));

    VAR_7->attributes = FUNC_0( VAR_6, 5 );
    FUNC_2("attributes %u\n", VAR_7->attributes);

    if (!(VAR_7->display_name = FUNC_5( VAR_4->db, VAR_5->Component, VAR_7 )))
    {
        FUNC_3("can't get display name\n");
        FUNC_11( &VAR_6->hdr );
        FUNC_10( VAR_7->feature );
        FUNC_10( VAR_7->manifest );
        FUNC_10( VAR_7->application );
        FUNC_10( VAR_7 );
        return ((void*)0);
    }
    FUNC_2("display name %s\n", FUNC_4(VAR_7->display_name));

    if (VAR_7->application)
    {




        VAR_7->installed = VAR_1;
    }
    else
    {
        if (VAR_7->attributes == VAR_3)
            VAR_7->installed = FUNC_8( VAR_4->cache_sxs, VAR_7->display_name );
        else
        {
            UINT VAR_8;
            for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
            {
                VAR_7->clr_version[VAR_8] = FUNC_8( VAR_4->cache_net[VAR_8], VAR_7->display_name );
                if (VAR_7->clr_version[VAR_8])
                {
                    FUNC_2("runtime version %s\n", FUNC_4(FUNC_7( VAR_8 )));
                    VAR_7->installed = VAR_2;
                    break;
                }
            }
        }
    }
    FUNC_2("assembly is %s\n", VAR_7->installed ? "installed" : "not installed");
    FUNC_11( &VAR_6->hdr );
    return VAR_7;
}
