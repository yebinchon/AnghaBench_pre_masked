
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char WCHAR ;
typedef int ULONG ;
struct TYPE_10__ {char* pwcsName; int type; } ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_1__ SearchItem ;
typedef TYPE_2__ STATSTG ;
typedef int IStorage ;
typedef int IEnumSTATSTG ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int *,int,TYPE_2__*,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int ,int **) ;
 scalar_t__ VAR_0 ;


 scalar_t__ VAR_1 ;
 char* FUNC_4 (int *,char*,char const*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int *,char*,char const*) ;
 TYPE_1__* FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char const*) ;

__attribute__((used)) static SearchItem *FUNC_9(SearchItem *VAR_2, IStorage *VAR_3,
                                     const char *VAR_4)
{
    static const WCHAR VAR_5[] = {'.','h','t','m',0};
    IEnumSTATSTG *VAR_6 = ((void*)0);
    WCHAR *VAR_7 = ((void*)0);
    STATSTG VAR_8;
    HRESULT VAR_9;
    ULONG VAR_10;

    VAR_9 = FUNC_3(VAR_3, 0, ((void*)0), 0, &VAR_6);
    if(VAR_9 != VAR_1)
    {
        FUNC_0("Could not enumerate '/' storage elements: %08x\n", VAR_9);
        return ((void*)0);
    }
    while (FUNC_1(VAR_6, 1, &VAR_8, &VAR_10) == VAR_0)
    {
        VAR_7 = VAR_8.pwcsName;
        while(FUNC_7(VAR_7, '/'))
            VAR_7 = FUNC_7(VAR_7, '/')+1;
        switch(VAR_8.type) {
        case 129:
            VAR_2 = FUNC_5(VAR_2, VAR_3, VAR_7, VAR_4);
            break;
        case 128:
            if(FUNC_8(VAR_7, VAR_5))
            {
                WCHAR *VAR_11 = FUNC_4(VAR_3, VAR_7, VAR_4);

                if(VAR_11)
                {
                    VAR_2->next = FUNC_6(VAR_11, VAR_8.pwcsName);
                    VAR_2 = VAR_2->next;
                }
            }
            break;
        default:
            FUNC_0("Unhandled IStorage stream element.\n");
        }
    }
    FUNC_2(VAR_6);
    return VAR_2;
}
