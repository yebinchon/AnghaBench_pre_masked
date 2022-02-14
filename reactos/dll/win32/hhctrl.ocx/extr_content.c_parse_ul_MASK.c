
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int sz_text_sitemap ;
typedef int stream_t ;
struct TYPE_8__ {int buf; } ;
typedef TYPE_1__ strbuf_t ;
typedef int insert_type_t ;
typedef int HHInfo ;
typedef int ContentItem ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 char* FUNC_2 (int ,char*,int*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int * FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (char const*,char const*,int) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*) ;
 int * FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static ContentItem *FUNC_11(HHInfo *VAR_1, stream_t *VAR_2, ContentItem *VAR_3)
{
    strbuf_t VAR_4, VAR_5;
    ContentItem *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    insert_type_t VAR_9;

    FUNC_9(&VAR_4);
    FUNC_9(&VAR_5);

    while(FUNC_6(VAR_2, &VAR_4)) {
        FUNC_3(&VAR_4, &VAR_5);

        FUNC_0("%s\n", VAR_4.buf);

        if(!FUNC_1(VAR_5.buf, "object", -1)) {
            const char *VAR_10;
            int VAR_11;

            static const char VAR_12[] = "text/sitemap";

            VAR_10 = FUNC_2(VAR_4.buf, "type", &VAR_11);

            if(VAR_10 && VAR_11 == sizeof(VAR_12)-1
               && !FUNC_5(VAR_10, VAR_12, VAR_11)) {
                VAR_8 = FUNC_7(VAR_1, VAR_2, VAR_3, &VAR_9);
                VAR_7 = FUNC_4(VAR_7, VAR_8, VAR_9);
                if(!VAR_6)
                    VAR_6 = VAR_7;
            }
        }else if(!FUNC_1(VAR_5.buf, "ul", -1)) {
            VAR_8 = FUNC_11(VAR_1, VAR_2, VAR_3);
            FUNC_4(VAR_7, VAR_8, VAR_0);
        }else if(!FUNC_1(VAR_5.buf, "/ul", -1)) {
            break;
        }

        FUNC_10(&VAR_4);
    }

    FUNC_8(&VAR_4);
    FUNC_8(&VAR_5);

    return VAR_6;
}
