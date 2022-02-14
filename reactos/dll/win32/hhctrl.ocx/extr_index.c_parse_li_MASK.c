
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int sz_text_sitemap ;
typedef int stream_t ;
struct TYPE_8__ {int buf; } ;
typedef TYPE_1__ strbuf_t ;
typedef int IndexItem ;
typedef int HHInfo ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,int) ;
 char* FUNC_4 (int ,char*,int*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (char const*,char const*,int) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static IndexItem *FUNC_12(HHInfo *VAR_0, stream_t *VAR_1)
{
    strbuf_t VAR_2, VAR_3;
    IndexItem *VAR_4 = ((void*)0);

    FUNC_10(&VAR_2);
    FUNC_10(&VAR_3);

    while(FUNC_7(VAR_1, &VAR_2)) {
        FUNC_5(&VAR_2, &VAR_3);

        FUNC_1("%s\n", VAR_2.buf);

        if(!FUNC_3(VAR_3.buf, "object", -1)) {
            const char *VAR_5;
            int VAR_6;

            static const char VAR_7[] = "text/sitemap";

            VAR_5 = FUNC_4(VAR_2.buf, "type", &VAR_6);

            if(VAR_5 && VAR_6 == sizeof(VAR_7)-1
               && !FUNC_6(VAR_5, VAR_7, VAR_6)) {
                VAR_4 = FUNC_8(VAR_0, VAR_1);
                break;
            }
        }else {
            FUNC_2("Unhandled tag! %s\n", VAR_3.buf);
        }

        FUNC_11(&VAR_2);
    }
    if(!VAR_4)
        FUNC_0("Failed to parse <li> tag!\n");

    FUNC_9(&VAR_2);
    FUNC_9(&VAR_3);

    return VAR_4;
}
