
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlValidCtxtPtr ;
typedef int * xmlParserCtxtPtr ;
typedef int * xmlGenericErrorFunc ;
struct TYPE_3__ {scalar_t__ finishDtd; int * userData; int * error; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,void*,int *,int *,int ,int ,int ,int *,int ,char const*,int *,int *,int ,int ,char*,...) ;

__attribute__((used)) static void
FUNC_1(xmlValidCtxtPtr VAR_5, const char *VAR_6)
{
    xmlGenericErrorFunc VAR_7 = ((void*)0);
    xmlParserCtxtPtr VAR_8 = ((void*)0);
    void *VAR_9 = ((void*)0);

    if (VAR_5 != ((void*)0)) {
        VAR_7 = VAR_5->error;
        VAR_9 = VAR_5->userData;


 if ((VAR_5->finishDtd == VAR_0) ||
     (VAR_5->finishDtd == VAR_1)) {
     long VAR_10 = (char *) VAR_5 - (char *) VAR_5->userData;
     if ((VAR_10 > 0) && (VAR_10 < 250))
  VAR_8 = VAR_5->userData;
 }
    }
    if (VAR_6)
        FUNC_0(((void*)0), VAR_7, VAR_9,
                        VAR_8, ((void*)0), VAR_4, VAR_3,
                        VAR_2, ((void*)0), 0, VAR_6, ((void*)0), ((void*)0), 0, 0,
                        "Memory allocation failed : %s\n", VAR_6);
    else
        FUNC_0(((void*)0), VAR_7, VAR_9,
                        VAR_8, ((void*)0), VAR_4, VAR_3,
                        VAR_2, ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0), 0, 0,
                        "Memory allocation failed\n");
}
