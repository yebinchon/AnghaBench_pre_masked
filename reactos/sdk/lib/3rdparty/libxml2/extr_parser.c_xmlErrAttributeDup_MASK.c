
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_4__ {int disableSAX; scalar_t__ instate; scalar_t__ recovery; scalar_t__ wellFormed; int errNo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *,int *,TYPE_1__*,int *,int ,int ,int ,int *,int ,char const*,char const*,int *,int ,int ,char*,int const*,...) ;

__attribute__((used)) static void
FUNC_1(xmlParserCtxtPtr VAR_4, const xmlChar * VAR_5,
                   const xmlChar * VAR_6)
{
    if ((VAR_4 != ((void*)0)) && (VAR_4->disableSAX != 0) &&
        (VAR_4->instate == VAR_3))
 return;
    if (VAR_4 != ((void*)0))
 VAR_4->errNo = VAR_0;

    if (VAR_5 == ((void*)0))
        FUNC_0(((void*)0), ((void*)0), ((void*)0), VAR_4, ((void*)0), VAR_2,
                        VAR_0, VAR_1, ((void*)0), 0,
                        (const char *) VAR_6, ((void*)0), ((void*)0), 0, 0,
                        "Attribute %s redefined\n", VAR_6);
    else
        FUNC_0(((void*)0), ((void*)0), ((void*)0), VAR_4, ((void*)0), VAR_2,
                        VAR_0, VAR_1, ((void*)0), 0,
                        (const char *) VAR_5, (const char *) VAR_6,
                        ((void*)0), 0, 0, "Attribute %s:%s redefined\n", VAR_5,
                        VAR_6);
    if (VAR_4 != ((void*)0)) {
 VAR_4->wellFormed = 0;
 if (VAR_4->recovery == 0)
     VAR_4->disableSAX = 1;
    }
}
