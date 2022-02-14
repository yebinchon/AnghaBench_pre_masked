
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_17__ {int buf; } ;
typedef TYPE_1__ strbuf_t ;
struct TYPE_18__ {int nItems; int indentLevel; struct TYPE_18__* next; int merge; struct TYPE_18__* items; struct TYPE_18__* keyword; } ;
typedef int IndexSubItem ;
typedef TYPE_2__ IndexItem ;
typedef int IStream ;
typedef int HHInfo ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_8 (int *,TYPE_1__*) ;
 TYPE_2__* FUNC_9 (int *,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static void FUNC_14(HHInfo *VAR_0, IStream *VAR_1, IndexItem *VAR_2)
{
    stream_t VAR_3;
    strbuf_t VAR_4, VAR_5;
    int VAR_6 = -1;

    FUNC_11(&VAR_4);
    FUNC_11(&VAR_5);

    FUNC_13(&VAR_3, VAR_1);

    while(FUNC_8(&VAR_3, &VAR_4)) {
        FUNC_3(&VAR_4, &VAR_5);

        FUNC_0("%s\n", VAR_4.buf);

        if(!FUNC_2(VAR_5.buf, "li", -1)) {
            IndexItem *VAR_7;

            VAR_7 = FUNC_9(VAR_0, &VAR_3);
            if(VAR_7 && VAR_2->keyword && FUNC_6(VAR_7->keyword, VAR_2->keyword) == 0) {
                int VAR_8 = VAR_2->nItems;

                FUNC_5(VAR_2, VAR_8+1);
                FUNC_7(&VAR_2->items[VAR_8], &VAR_7->items[0], sizeof(IndexSubItem));
                FUNC_4(VAR_7->keyword);
                FUNC_4(VAR_7->items);
                FUNC_4(VAR_7);
            } else if(VAR_7) {
                VAR_2->next = VAR_7;
                VAR_2->next->merge = VAR_2->merge;
                VAR_2 = VAR_2->next;
                VAR_2->indentLevel = VAR_6;
            }
        }else if(!FUNC_2(VAR_5.buf, "ul", -1)) {
            VAR_6++;
        }else if(!FUNC_2(VAR_5.buf, "/ul", -1)) {
            VAR_6--;
        }else {
            FUNC_1("Unhandled tag! %s\n", VAR_5.buf);
        }

        FUNC_12(&VAR_4);
    }

    FUNC_10(&VAR_4);
    FUNC_10(&VAR_5);
}
