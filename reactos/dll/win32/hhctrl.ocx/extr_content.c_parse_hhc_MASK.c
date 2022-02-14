
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_8__ {int buf; } ;
typedef TYPE_1__ strbuf_t ;
typedef int insert_type_t ;
typedef int IStream ;
typedef int HHInfo ;
typedef int ContentItem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int * FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 int * FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static ContentItem *FUNC_10(HHInfo *VAR_2, IStream *VAR_3, ContentItem *VAR_4,
        insert_type_t *VAR_5)
{
    stream_t VAR_6;
    strbuf_t VAR_7, VAR_8;
    ContentItem *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);

    *VAR_5 = VAR_1;

    FUNC_7(&VAR_7);
    FUNC_7(&VAR_8);

    FUNC_9(&VAR_6, VAR_3);

    while(FUNC_4(&VAR_6, &VAR_7)) {
        FUNC_2(&VAR_7, &VAR_8);

        FUNC_0("%s\n", VAR_7.buf);

        if(!FUNC_1(VAR_8.buf, "ul", -1)) {
            ContentItem *VAR_11 = FUNC_5(VAR_2, &VAR_6, VAR_4);
            VAR_10 = FUNC_3(VAR_10, VAR_11, VAR_0);
            if(!VAR_9)
                VAR_9 = VAR_10;
            *VAR_5 = VAR_0;
        }

        FUNC_8(&VAR_7);
    }

    FUNC_6(&VAR_7);
    FUNC_6(&VAR_8);

    return VAR_9;
}
