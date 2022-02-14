
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; char* (* merger ) (TYPE_2__*,char const*,char const*) ;TYPE_1__* meth; } ;
struct TYPE_6__ {char* (* dso_merger ) (TYPE_2__*,char const*,char const*) ;} ;
typedef TYPE_2__ DSO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 char* FUNC_1 (TYPE_2__*,char const*,char const*) ;
 char* FUNC_2 (TYPE_2__*,char const*,char const*) ;

char *FUNC_3(DSO *VAR_3, const char *VAR_4, const char *VAR_5)
{
    char *VAR_6 = ((void*)0);

    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_2);
        return ((void*)0);
    }
    if ((VAR_3->flags & VAR_0) == 0) {
        if (VAR_3->merger != ((void*)0))
            VAR_6 = VAR_3->merger(VAR_3, VAR_4, VAR_5);
        else if (VAR_3->meth->dso_merger != ((void*)0))
            VAR_6 = VAR_3->meth->dso_merger(VAR_3, VAR_4, VAR_5);
    }
    return VAR_6;
}
