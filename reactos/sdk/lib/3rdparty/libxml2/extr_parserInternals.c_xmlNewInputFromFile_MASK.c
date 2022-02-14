
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* xmlParserInputPtr ;
typedef TYPE_2__* xmlParserInputBufferPtr ;
typedef TYPE_3__* xmlParserCtxtPtr ;
typedef int const xmlChar ;
struct TYPE_16__ {char* directory; } ;
struct TYPE_15__ {int buffer; } ;
struct TYPE_14__ {char* filename; char* directory; TYPE_2__* buf; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,char const*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int const*) ;
 TYPE_1__* FUNC_3 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,char const*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_6 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 char* FUNC_7 (char const*) ;
 TYPE_2__* FUNC_8 (char const*,int ) ;
 int const* FUNC_9 (int const*) ;

xmlParserInputPtr
FUNC_10(xmlParserCtxtPtr VAR_3, const char *VAR_4) {
    xmlParserInputBufferPtr VAR_5;
    xmlParserInputPtr VAR_6;
    char *VAR_7 = ((void*)0);
    xmlChar *VAR_8 = ((void*)0);

    if (VAR_2)
 FUNC_5(VAR_1,
  "new input from file: %s\n", VAR_4);
    if (VAR_3 == ((void*)0)) return(((void*)0));
    VAR_5 = FUNC_8(VAR_4, VAR_0);
    if (VAR_5 == ((void*)0)) {
 if (VAR_4 == ((void*)0))
     FUNC_0(VAR_3,
                    "failed to load external entity: NULL filename \n",
      ((void*)0));
 else
     FUNC_0(VAR_3, "failed to load external entity \"%s\"\n",
      (const char *) VAR_4);
 return(((void*)0));
    }

    VAR_6 = FUNC_6(VAR_3);
    if (VAR_6 == ((void*)0))
 return(((void*)0));

    VAR_6->buf = VAR_5;
    VAR_6 = FUNC_3(VAR_3, VAR_6);
    if (VAR_6 == ((void*)0))
        return(((void*)0));

    if (VAR_6->filename == ((void*)0))
 VAR_8 = FUNC_9((xmlChar *) VAR_4);
    else
 VAR_8 = FUNC_9((xmlChar *) VAR_6->filename);
    VAR_7 = FUNC_7((const char *) VAR_8);
    if (VAR_6->filename != ((void*)0)) FUNC_4((char *)VAR_6->filename);
    VAR_6->filename = (char *) FUNC_2((const xmlChar *) VAR_8);
    if (VAR_8 != ((void*)0)) FUNC_4((char *) VAR_8);
    VAR_6->directory = VAR_7;

    FUNC_1(VAR_6->buf->buffer, VAR_6);
    if ((VAR_3->directory == ((void*)0)) && (VAR_7 != ((void*)0)))
        VAR_3->directory = (char *) FUNC_9((const xmlChar *) VAR_7);
    return(VAR_6);
}
