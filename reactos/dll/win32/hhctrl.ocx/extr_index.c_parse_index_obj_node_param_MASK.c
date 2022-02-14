
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int itemFlags; int nItems; TYPE_1__* items; int keyword; } ;
struct TYPE_5__ {int local; int name; } ;
typedef int LPWSTR ;
typedef TYPE_2__ IndexItem ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (char const*,int,int ) ;
 char* FUNC_4 (char const*,char*,int*) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_6(IndexItem *VAR_0, const char *VAR_1, UINT VAR_2)
{
    const char *VAR_3;
    LPWSTR *VAR_4;
    int VAR_5;

    VAR_3 = FUNC_4(VAR_1, "name", &VAR_5);
    if(!VAR_3) {
        FUNC_0("name attr not found\n");
        return;
    }




    if(VAR_0->itemFlags == 0x11 && (!FUNC_1("name", VAR_3, VAR_5) || !FUNC_1("local", VAR_3, VAR_5)))
        FUNC_5(VAR_0, VAR_0->nItems+1);
    if(!FUNC_1("keyword", VAR_3, VAR_5)) {
        VAR_4 = &VAR_0->keyword;
    }else if(!VAR_0->keyword && !FUNC_1("name", VAR_3, VAR_5)) {




        VAR_4 = &VAR_0->keyword;
    }else if(!FUNC_1("name", VAR_3, VAR_5)) {
        VAR_0->itemFlags |= 0x01;
        VAR_4 = &VAR_0->items[VAR_0->nItems-1].name;
    }else if(!FUNC_1("local", VAR_3, VAR_5)) {
        VAR_0->itemFlags |= 0x10;
        VAR_4 = &VAR_0->items[VAR_0->nItems-1].local;
    }else {
        FUNC_0("unhandled param %s\n", FUNC_2(VAR_3, VAR_5));
        return;
    }

    VAR_3 = FUNC_4(VAR_1, "value", &VAR_5);
    if(!VAR_3) {
        FUNC_0("value attr not found\n");
        return;
    }

    *VAR_4 = FUNC_3(VAR_3, VAR_5, VAR_2);
}
