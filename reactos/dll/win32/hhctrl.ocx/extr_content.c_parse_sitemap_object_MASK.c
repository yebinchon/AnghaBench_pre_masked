
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_20__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_19__ ;


typedef int stream_t ;
struct TYPE_22__ {int buf; } ;
typedef TYPE_1__ strbuf_t ;
typedef int insert_type_t ;
struct TYPE_23__ {int chm_file; scalar_t__ chm_index; } ;
struct TYPE_25__ {int name; TYPE_20__ merge; int child; } ;
struct TYPE_24__ {TYPE_19__* pCHMInfo; } ;
struct TYPE_21__ {int codePage; } ;
typedef int IStream ;
typedef TYPE_2__ HHInfo ;
typedef TYPE_3__ ContentItem ;


 int * FUNC_0 (TYPE_19__*,int ,TYPE_20__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 TYPE_3__* FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,int *,TYPE_3__*,int *) ;
 int FUNC_11 (TYPE_3__*,TYPE_3__*,int ,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static ContentItem *FUNC_15(HHInfo *VAR_1, stream_t *VAR_2, ContentItem *VAR_3,
        insert_type_t *VAR_4)
{
    strbuf_t VAR_5, VAR_6;
    ContentItem *VAR_7;

    *VAR_4 = VAR_0;

    FUNC_13(&VAR_5);
    FUNC_13(&VAR_6);

    VAR_7 = FUNC_8(sizeof(ContentItem));

    while(FUNC_9(VAR_2, &VAR_5)) {
        FUNC_7(&VAR_5, &VAR_6);

        FUNC_2("%s\n", VAR_5.buf);

        if(!FUNC_4(VAR_6.buf, "/object", -1))
            break;
        if(!FUNC_4(VAR_6.buf, "param", -1))
            FUNC_11(VAR_7, VAR_3, VAR_5.buf, VAR_1->pCHMInfo->codePage);

        FUNC_14(&VAR_5);
    }

    FUNC_12(&VAR_5);
    FUNC_12(&VAR_6);

    if(VAR_7->merge.chm_index) {
        IStream *VAR_8;

        VAR_8 = FUNC_0(VAR_1->pCHMInfo, VAR_7->merge.chm_file, &VAR_7->merge);
        if(VAR_8) {
            VAR_7->child = FUNC_10(VAR_1, VAR_8, VAR_3, VAR_4);
            FUNC_1(VAR_8);
        }else {
            FUNC_3("Could not get %s::%s stream\n", FUNC_5(VAR_7->merge.chm_file),
                 FUNC_5(VAR_7->merge.chm_file));

            if(!VAR_7->name) {
                FUNC_6(VAR_7);
                VAR_7 = ((void*)0);
            }
        }

    }

    return VAR_7;
}
