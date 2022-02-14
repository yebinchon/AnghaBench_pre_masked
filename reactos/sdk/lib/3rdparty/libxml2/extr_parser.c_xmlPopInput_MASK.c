
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_7__ {scalar_t__* cur; } ;
struct TYPE_6__ {int inputNr; scalar_t__ inSubset; scalar_t__ instate; TYPE_3__* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (TYPE_3__*,int ) ;

xmlChar
FUNC_5(xmlParserCtxtPtr VAR_6) {
    if ((VAR_6 == ((void*)0)) || (VAR_6->inputNr <= 1)) return(0);
    if (VAR_5)
 FUNC_3(VAR_4,
  "Popping input %d\n", VAR_6->inputNr);
    if ((VAR_6->inputNr > 1) && (VAR_6->inSubset == 0) &&
        (VAR_6->instate != VAR_3))
        FUNC_1(VAR_6, VAR_2,
                    "Unfinished entity outside the DTD");
    FUNC_2(FUNC_0(VAR_6));
    if (*VAR_6->input->cur == 0)
        FUNC_4(VAR_6->input, VAR_1);
    return(VAR_0);
}
