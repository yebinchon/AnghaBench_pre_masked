
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_15__ {int buf; } ;
typedef TYPE_2__ strbuf_t ;
struct TYPE_17__ {TYPE_1__* pCHMInfo; } ;
struct TYPE_16__ {int itemFlags; void* items; scalar_t__ nItems; } ;
struct TYPE_14__ {int codePage; } ;
typedef TYPE_3__ IndexItem ;
typedef TYPE_4__ HHInfo ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static IndexItem *FUNC_10(HHInfo *VAR_0, stream_t *VAR_1)
{
    strbuf_t VAR_2, VAR_3;
    IndexItem *VAR_4;

    FUNC_8(&VAR_2);
    FUNC_8(&VAR_3);

    VAR_4 = FUNC_4(sizeof(IndexItem));
    VAR_4->nItems = 0;
    VAR_4->items = FUNC_4(0);
    VAR_4->itemFlags = 0x11;

    while(FUNC_5(VAR_1, &VAR_2)) {
        FUNC_3(&VAR_2, &VAR_3);

        FUNC_0("%s\n", VAR_2.buf);

        if(!FUNC_2(VAR_3.buf, "param", -1)) {
            FUNC_6(VAR_4, VAR_2.buf, VAR_0->pCHMInfo->codePage);
        }else if(!FUNC_2(VAR_3.buf, "/object", -1)) {
            break;
        }else {
            FUNC_1("Unhandled tag! %s\n", VAR_3.buf);
        }

        FUNC_9(&VAR_2);
    }

    FUNC_7(&VAR_2);
    FUNC_7(&VAR_3);

    return VAR_4;
}
