
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* xmlParserInputPtr ;
typedef TYPE_3__* xmlParserCtxtPtr ;
struct TYPE_12__ {int inputNr; int options; scalar_t__ instate; TYPE_1__* input; } ;
struct TYPE_11__ {int cur; } ;
struct TYPE_10__ {int filename; int line; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int
FUNC_5(xmlParserCtxtPtr VAR_6, xmlParserInputPtr VAR_7) {
    int VAR_8;
    if (VAR_7 == ((void*)0)) return(-1);

    if (VAR_5) {
 if ((VAR_6->input != ((void*)0)) && (VAR_6->input->filename))
     FUNC_4(VAR_4,
      "%s(%d): ", VAR_6->input->filename,
      VAR_6->input->line);
 FUNC_4(VAR_4,
  "Pushing input %d : %.30s\n", VAR_6->inputNr+1, VAR_7->cur);
    }
    if (((VAR_6->inputNr > 40) && ((VAR_6->options & VAR_3) == 0)) ||
        (VAR_6->inputNr > 1024)) {
        FUNC_2(VAR_6, VAR_1, ((void*)0));
        while (VAR_6->inputNr > 1)
            FUNC_3(FUNC_0(VAR_6));
 return(-1);
    }
    VAR_8 = FUNC_1(VAR_6, VAR_7);
    if (VAR_6->instate == VAR_2)
        return(-1);
    VAR_0;
    return(VAR_8);
}
