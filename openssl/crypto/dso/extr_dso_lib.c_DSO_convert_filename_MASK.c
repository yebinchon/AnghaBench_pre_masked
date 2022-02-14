
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* filename; int flags; char* (* name_converter ) (TYPE_2__*,char const*) ;TYPE_1__* meth; } ;
struct TYPE_6__ {char* (* dso_name_converter ) (TYPE_2__*,char const*) ;} ;
typedef TYPE_2__ DSO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (TYPE_2__*,char const*) ;
 char* FUNC_3 (TYPE_2__*,char const*) ;

char *FUNC_4(DSO *VAR_5, const char *VAR_6)
{
    char *VAR_7 = ((void*)0);

    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_4);
        return ((void*)0);
    }
    if (VAR_6 == ((void*)0))
        VAR_6 = VAR_5->filename;
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_2);
        return ((void*)0);
    }
    if ((VAR_5->flags & VAR_0) == 0) {
        if (VAR_5->name_converter != ((void*)0))
            VAR_7 = VAR_5->name_converter(VAR_5, VAR_6);
        else if (VAR_5->meth->dso_name_converter != ((void*)0))
            VAR_7 = VAR_5->meth->dso_name_converter(VAR_5, VAR_6);
    }
    if (VAR_7 == ((void*)0)) {
        VAR_7 = FUNC_1(VAR_6);
        if (VAR_7 == ((void*)0)) {
            FUNC_0(VAR_1, VAR_3);
            return ((void*)0);
        }
    }
    return VAR_7;
}
