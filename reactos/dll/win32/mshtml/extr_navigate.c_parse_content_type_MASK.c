
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* nschannel; } ;
typedef TYPE_2__ nsChannelBSC ;
typedef int nsACString ;
typedef int charsetW ;
typedef char WCHAR ;
struct TYPE_4__ {int nsIHttpChannel_iface; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 size_t FUNC_1 (int ,int ,char const*,size_t,char*,size_t,int *,int *) ;
 int FUNC_2 (char const*,size_t) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const) ;
 int FUNC_6 (char const*,char const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int *) ;
 char* FUNC_10 (char const*,char) ;
 size_t FUNC_11 (char const*) ;

__attribute__((used)) static void FUNC_12(nsChannelBSC *VAR_1, const WCHAR *VAR_2)
{
    const WCHAR *VAR_3;
    size_t VAR_4;

    static const WCHAR VAR_5[] = {'c','h','a','r','s','e','t','='};

    VAR_3 = FUNC_10(VAR_2, ';');
    if(!VAR_3)
        return;

    VAR_3++;
    while(*VAR_3 && FUNC_5(*VAR_3))
        VAR_3++;

    VAR_4 = FUNC_11(VAR_2);
    if(VAR_3 + sizeof(VAR_5)/sizeof(WCHAR) < VAR_2+VAR_4 && !FUNC_6(VAR_3, VAR_5, sizeof(VAR_5)/sizeof(WCHAR))) {
        size_t VAR_6, VAR_7;
        nsACString VAR_8;
        const WCHAR *VAR_9;
        char *VAR_10;

        VAR_3 += sizeof(VAR_5)/sizeof(WCHAR);

        if(*VAR_3 == '\'') {
            FUNC_0("Quoted value\n");
            return;
        }else {
            VAR_9 = VAR_3;
            while(*VAR_3 && *VAR_3 != ',')
                VAR_3++;
            VAR_6 = VAR_3-VAR_9;
        }

        VAR_7 = FUNC_1(VAR_0, 0, VAR_9, VAR_6, ((void*)0), 0, ((void*)0), ((void*)0));
        VAR_10 = FUNC_3(VAR_7+1);
        if(!VAR_10)
            return;

        FUNC_1(VAR_0, 0, VAR_9, VAR_6, VAR_10, VAR_7, ((void*)0), ((void*)0));
        VAR_10[VAR_7] = 0;

        FUNC_8(&VAR_8, VAR_10);
        FUNC_9(&VAR_1->nschannel->nsIHttpChannel_iface, &VAR_8);
        FUNC_7(&VAR_8);
        FUNC_4(VAR_10);
    }else {
        FUNC_0("unhandled: %s\n", FUNC_2(VAR_3, VAR_4 - (VAR_3-VAR_2)));
    }
}
