
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int insert_type_t ;
struct TYPE_5__ {struct TYPE_5__* child; struct TYPE_5__* next; } ;
typedef TYPE_1__ ContentItem ;





__attribute__((used)) static ContentItem *FUNC_0(ContentItem *VAR_0, ContentItem *VAR_1, insert_type_t VAR_2)
{
    if(!VAR_0)
        return VAR_1;

    if(!VAR_1)
        return VAR_0;

    switch(VAR_2) {
    case 128:
        VAR_0->next = VAR_1;
        return VAR_1;
    case 129:
        if(VAR_0->child) {
            ContentItem *VAR_3 = VAR_0->child;
            while(VAR_3->next)
                VAR_3 = VAR_3->next;
            VAR_3->next = VAR_1;
        }else {
            VAR_0->child = VAR_1;
        }
        return VAR_0;
    }

    return ((void*)0);
}
