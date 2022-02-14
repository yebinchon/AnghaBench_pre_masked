
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * xmlStructuredErrorFunc ;
typedef TYPE_2__* xmlParserCtxtPtr ;
typedef int * xmlGenericErrorFunc ;
typedef int xmlErrorLevel ;
struct TYPE_5__ {scalar_t__ disableSAX; scalar_t__ instate; void* userData; TYPE_1__* sax; scalar_t__ validate; } ;
struct TYPE_4__ {scalar_t__ initialized; int * serror; int * warning; int * error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int *,void*,TYPE_2__*,int *,int ,int ,int ,int *,int ,char const*,int *,int *,int ,int ,char const*,char const*) ;

void
FUNC_1(void *VAR_6, const char *VAR_7, const char *VAR_8)
{
    xmlParserCtxtPtr VAR_9 = (xmlParserCtxtPtr) VAR_6;
    xmlStructuredErrorFunc VAR_10 = ((void*)0);
    xmlGenericErrorFunc VAR_11 = ((void*)0);
    void *VAR_12 = ((void*)0);
    xmlErrorLevel VAR_13 = VAR_0;

    if ((VAR_9 != ((void*)0)) && (VAR_9->disableSAX != 0) &&
        (VAR_9->instate == VAR_4))
 return;
    if ((VAR_9 != ((void*)0)) && (VAR_9->sax != ((void*)0))) {
        if (VAR_9->validate) {
     VAR_11 = VAR_9->sax->error;
     VAR_13 = VAR_0;
 } else {
     VAR_11 = VAR_9->sax->warning;
     VAR_13 = VAR_1;
 }
 if (VAR_9->sax->initialized == VAR_5)
     VAR_10 = VAR_9->sax->serror;
 VAR_12 = VAR_9->userData;
    }
    FUNC_0(VAR_10, VAR_11, VAR_12, VAR_9, ((void*)0), VAR_2,
                    VAR_3, VAR_13, ((void*)0), 0,
      VAR_8, ((void*)0), ((void*)0), 0, 0,
      VAR_7, VAR_8);

}
