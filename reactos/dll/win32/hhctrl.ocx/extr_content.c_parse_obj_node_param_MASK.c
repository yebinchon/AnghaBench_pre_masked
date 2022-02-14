
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int chm_file; } ;
struct TYPE_5__ {TYPE_4__ merge; void* local; void* name; } ;
typedef void* LPWSTR ;
typedef TYPE_1__ ContentItem ;


 int FUNC_0 (TYPE_4__*,int ,void*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*,int) ;
 void* FUNC_4 (char const*,int,int ) ;
 char* FUNC_5 (char const*,char*,int*) ;
 int FUNC_6 (void*) ;
 char* FUNC_7 (char const*,char*) ;

__attribute__((used)) static void FUNC_8(ContentItem *VAR_0, ContentItem *VAR_1, const char *VAR_2, UINT VAR_3)
{
    const char *VAR_4;
    LPWSTR *VAR_5, VAR_6;
    int VAR_7;

    VAR_4 = FUNC_5(VAR_2, "name", &VAR_7);
    if(!VAR_4) {
        FUNC_1("name attr not found\n");
        return;
    }

    if(!FUNC_2("name", VAR_4, VAR_7)) {
        VAR_5 = &VAR_0->name;
    }else if(!FUNC_2("merge", VAR_4, VAR_7)) {
        VAR_5 = &VAR_6;
    }else if(!FUNC_2("local", VAR_4, VAR_7)) {
        VAR_5 = &VAR_0->local;
    }else {
        FUNC_1("unhandled param %s\n", FUNC_3(VAR_4, VAR_7));
        return;
    }

    VAR_4 = FUNC_5(VAR_2, "value", &VAR_7);
    if(!VAR_4) {
        FUNC_1("value attr not found\n");
        return;
    }






    if(VAR_5 == &VAR_0->local && FUNC_7(VAR_4, "::"))
    {
        const char *VAR_8 = FUNC_7(VAR_4, "::")+2;
        int VAR_9 = VAR_7-(VAR_8-VAR_4);

        VAR_0->local = FUNC_4(VAR_8, VAR_9, VAR_3);
        VAR_5 = &VAR_6;
    }

    *VAR_5 = FUNC_4(VAR_4, VAR_7, VAR_3);

    if(VAR_5 == &VAR_6) {
        FUNC_0(&VAR_0->merge, VAR_1->merge.chm_file, VAR_6);
        FUNC_6(VAR_6);
    }
}
