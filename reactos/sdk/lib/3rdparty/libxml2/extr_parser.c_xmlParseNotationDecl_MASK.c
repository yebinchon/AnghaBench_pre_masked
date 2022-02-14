
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_3__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_12__ {int userData; TYPE_2__* sax; int disableSAX; TYPE_1__* input; } ;
struct TYPE_11__ {int (* notationDecl ) (int ,int const*,int *,int *) ;} ;
struct TYPE_10__ {int id; } ;


 scalar_t__ FUNC_0 (int ,char,char,char,char,char,char,char,char,char,char) ;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int const*,int *,int *) ;
 int FUNC_3 (TYPE_3__*,int ,int *) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,int ,char*,int const*,int *,int *) ;
 int * FUNC_7 (TYPE_3__*,int **,int ) ;
 int * FUNC_8 (TYPE_3__*) ;
 int * FUNC_9 (int const*,char) ;

void
FUNC_10(xmlParserCtxtPtr VAR_10) {
    const xmlChar *VAR_11;
    xmlChar *VAR_12;
    xmlChar *VAR_13;

    if (FUNC_0(VAR_0, '<', '!', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N')) {
 int VAR_14 = VAR_10->input->id;
 VAR_3;
 FUNC_1(10);
 if (VAR_4 == 0) {
     FUNC_4(VAR_10, VAR_8,
      "Space required after '<!NOTATION'\n");
     return;
 }

        VAR_11 = FUNC_8(VAR_10);
 if (VAR_11 == ((void*)0)) {
     FUNC_3(VAR_10, VAR_7, ((void*)0));
     return;
 }
 if (FUNC_9(VAR_11, ':') != ((void*)0)) {
     FUNC_6(VAR_10, VAR_9,
       "colons are forbidden from notation names '%s'\n",
       VAR_11, ((void*)0), ((void*)0));
 }
 if (VAR_4 == 0) {
     FUNC_4(VAR_10, VAR_8,
       "Space required after the NOTATION name'\n");
     return;
 }




 VAR_13 = FUNC_7(VAR_10, &VAR_12, 0);
 VAR_4;

 if (VAR_2 == '>') {
     if (VAR_14 != VAR_10->input->id) {
  FUNC_4(VAR_10, VAR_5,
                        "Notation declaration doesn't start and stop"
                               " in the same entity\n");
     }
     VAR_1;
     if ((VAR_10->sax != ((void*)0)) && (!VAR_10->disableSAX) &&
  (VAR_10->sax->notationDecl != ((void*)0)))
  VAR_10->sax->notationDecl(VAR_10->userData, VAR_11, VAR_12, VAR_13);
 } else {
     FUNC_3(VAR_10, VAR_6, ((void*)0));
 }
 if (VAR_13 != ((void*)0)) FUNC_5(VAR_13);
 if (VAR_12 != ((void*)0)) FUNC_5(VAR_12);
    }
}
