
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct list {int dummy; } ;
struct TYPE_11__ {int entry; struct TYPE_11__* data; struct TYPE_11__* header; } ;
typedef TYPE_1__ http_header_t ;
typedef TYPE_1__ WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_1__ const*,int) ;
 TYPE_1__* FUNC_2 (struct list*,TYPE_1__ const*,int) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (TYPE_1__ const*,int) ;
 int FUNC_6 (struct list*,int *) ;

HRESULT FUNC_7(struct list *VAR_2, const WCHAR *VAR_3, int VAR_4,
        const WCHAR *VAR_5, int VAR_6)
{
    http_header_t *VAR_7;

    FUNC_0("%s: %s\n", FUNC_1(VAR_3, VAR_4), FUNC_1(VAR_5, VAR_6));

    VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
    if(VAR_7) {
        WCHAR *VAR_8;

        VAR_8 = FUNC_5(VAR_5, VAR_6);
        if(!VAR_8)
            return VAR_0;

        FUNC_4(VAR_7->data);
        VAR_7->data = VAR_8;
    }else {
        VAR_7 = FUNC_3(sizeof(http_header_t));
        if(!VAR_7)
            return VAR_0;

        VAR_7->header = FUNC_5(VAR_3, VAR_4);
        VAR_7->data = FUNC_5(VAR_5, VAR_6);
        if(!VAR_7->header || !VAR_7->data) {
            FUNC_4(VAR_7->header);
            FUNC_4(VAR_7->data);
            FUNC_4(VAR_7);
            return VAR_0;
        }

        FUNC_6(VAR_2, &VAR_7->entry);
    }

    return VAR_1;
}
