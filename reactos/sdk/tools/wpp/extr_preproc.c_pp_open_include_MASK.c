
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ debug; } ;
struct TYPE_3__ {char* (* lookup ) (char const*,int,char const*,int ,int ) ;void* (* open ) (char*,int) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*,int,char const*,int ,int ) ;
 void* FUNC_3 (char*,int) ;
 TYPE_1__* VAR_3 ;

void *FUNC_4(const char *VAR_4, int VAR_5, const char *VAR_6, char **VAR_7)
{
    char *VAR_8;
    void *VAR_9;

    if (!(VAR_8 = VAR_3->lookup(VAR_4, VAR_5, VAR_6, VAR_0,
                                       VAR_1))) return ((void*)0);
    VAR_9 = VAR_3->open(VAR_8, VAR_5);

    if (VAR_9)
    {
        if (VAR_2.debug)
            FUNC_1("Going to include <%s>\n", VAR_8);
        if (VAR_7) *VAR_7 = VAR_8;
        else FUNC_0( VAR_8 );
        return VAR_9;
    }
    FUNC_0( VAR_8 );
    return ((void*)0);
}
