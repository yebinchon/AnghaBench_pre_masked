
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
struct TYPE_4__ {int disableSAX; scalar_t__ instate; int errNo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *,int *,TYPE_1__*,int *,int ,int ,int ,int *,int ,char const*,int *,int *,int ,int ,char*,...) ;

void
FUNC_1(xmlParserCtxtPtr VAR_4, const char *VAR_5)
{
    if ((VAR_4 != ((void*)0)) && (VAR_4->disableSAX != 0) &&
        (VAR_4->instate == VAR_3))
 return;
    if (VAR_4 != ((void*)0)) {
        VAR_4->errNo = VAR_1;
        VAR_4->instate = VAR_3;
        VAR_4->disableSAX = 1;
    }
    if (VAR_5)
        FUNC_0(((void*)0), ((void*)0), ((void*)0), VAR_4, ((void*)0), VAR_2,
                        VAR_1, VAR_0, ((void*)0), 0, VAR_5,
                        ((void*)0), ((void*)0), 0, 0,
                        "Memory allocation failed : %s\n", VAR_5);
    else
        FUNC_0(((void*)0), ((void*)0), ((void*)0), VAR_4, ((void*)0), VAR_2,
                        VAR_1, VAR_0, ((void*)0), 0, ((void*)0),
                        ((void*)0), ((void*)0), 0, 0, "Memory allocation failed\n");
}
