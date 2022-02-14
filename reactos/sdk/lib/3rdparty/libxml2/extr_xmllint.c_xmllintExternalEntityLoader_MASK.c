
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * xmlParserInputPtr ;
typedef TYPE_2__* xmlParserCtxtPtr ;
typedef char xmlChar ;
typedef int (* warningSAXFunc ) (TYPE_2__*,char*,char const*) ;
typedef int * errorSAXFunc ;
struct TYPE_7__ {TYPE_1__* sax; } ;
struct TYPE_6__ {int (* warning ) (TYPE_2__*,char*,char const*) ;int * error; } ;


 int * FUNC_0 (char const*,char const*,TYPE_2__*) ;
 int FUNC_1 (int ,char*,char const*,char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static xmlParserInputPtr
FUNC_5(const char *VAR_4, const char *VAR_5,
        xmlParserCtxtPtr VAR_6) {
    xmlParserInputPtr VAR_7;
    warningSAXFunc VAR_8 = ((void*)0);
    errorSAXFunc VAR_9 = ((void*)0);

    int VAR_10;
    const char *VAR_11 = VAR_4;
    const char *VAR_12 = VAR_4;

    if ((VAR_1 > 0) && (VAR_12 != ((void*)0))) {
 while (*VAR_12 != 0) {
     if (*VAR_12 == '/')
  VAR_11 = VAR_12 + 1;
     VAR_12++;
 }
    }

    if ((VAR_6 != ((void*)0)) && (VAR_6->sax != ((void*)0))) {
 VAR_8 = VAR_6->sax->warning;
 VAR_9 = VAR_6->sax->error;
 VAR_6->sax->warning = ((void*)0);
 VAR_6->sax->error = ((void*)0);
    }

    if (&FUNC_0 != ((void*)0)) {
 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if (VAR_7 != ((void*)0)) {
     if (VAR_8 != ((void*)0))
  VAR_6->sax->warning = VAR_8;
     if (VAR_9 != ((void*)0))
  VAR_6->sax->error = VAR_9;
     if (VAR_0) {
  FUNC_1 (VAR_3,

    "Loaded URL=\"%s\" ID=\"%s\"\n",
    VAR_4 ? VAR_4 : "(null)",
    VAR_5 ? VAR_5 : "(null)");
     }
     return(VAR_7);
 }
    }
    for (VAR_10 = 0;VAR_10 < VAR_1;VAR_10++) {
 xmlChar *VAR_13;

 VAR_13 = FUNC_4((const xmlChar *) VAR_2[VAR_10]);
 VAR_13 = FUNC_3(VAR_13, (const xmlChar *) "/");
 VAR_13 = FUNC_3(VAR_13, (const xmlChar *) VAR_11);
 if (VAR_13 != ((void*)0)) {
     VAR_7 = FUNC_0((const char *)VAR_13, VAR_5, VAR_6);
     if (VAR_7 != ((void*)0)) {
  if (VAR_8 != ((void*)0))
      VAR_6->sax->warning = VAR_8;
  if (VAR_9 != ((void*)0))
      VAR_6->sax->error = VAR_9;
  if (VAR_0) {
      FUNC_1 (VAR_3,

    "Loaded URL=\"%s\" ID=\"%s\"\n",
    VAR_13,
    VAR_5 ? VAR_5 : "(null)");
  }
  FUNC_2(VAR_13);
  return(VAR_7);
     }
     FUNC_2(VAR_13);
 }
    }
    if (VAR_9 != ((void*)0))
        VAR_6->sax->error = VAR_9;
    if (VAR_8 != ((void*)0)) {
 VAR_6->sax->warning = VAR_8;
 if (VAR_4 != ((void*)0))
     VAR_8(VAR_6, "failed to load external entity \"%s\"\n", VAR_4);
 else if (VAR_5 != ((void*)0))
     VAR_8(VAR_6, "failed to load external entity \"%s\"\n", VAR_5);
    }
    return(((void*)0));
}
