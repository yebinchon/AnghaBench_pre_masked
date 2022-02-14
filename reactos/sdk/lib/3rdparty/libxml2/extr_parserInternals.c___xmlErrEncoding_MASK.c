
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xmlParserErrors ;
typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_4__ {int disableSAX; scalar_t__ instate; scalar_t__ recovery; scalar_t__ wellFormed; int errNo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,int *,TYPE_1__*,int *,int ,int ,int ,int *,int ,char const*,char const*,int *,int ,int ,char const*,int const*,int const*) ;

void
FUNC_1(xmlParserCtxtPtr VAR_3, xmlParserErrors VAR_4,
                 const char *VAR_5, const xmlChar * VAR_6, const xmlChar * VAR_7)
{
    if ((VAR_3 != ((void*)0)) && (VAR_3->disableSAX != 0) &&
        (VAR_3->instate == VAR_2))
 return;
    if (VAR_3 != ((void*)0))
        VAR_3->errNo = VAR_4;
    FUNC_0(((void*)0), ((void*)0), ((void*)0),
                    VAR_3, ((void*)0), VAR_1, VAR_4, VAR_0,
                    ((void*)0), 0, (const char *) VAR_6, (const char *) VAR_7,
                    ((void*)0), 0, 0, VAR_5, VAR_6, VAR_7);
    if (VAR_3 != ((void*)0)) {
        VAR_3->wellFormed = 0;
        if (VAR_3->recovery == 0)
            VAR_3->disableSAX = 1;
    }
}
