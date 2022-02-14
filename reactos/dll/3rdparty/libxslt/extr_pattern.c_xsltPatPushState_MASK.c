
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
struct TYPE_12__ {int maxstates; int nbstates; TYPE_3__* states; } ;
typedef TYPE_2__ xsltStepStates ;
typedef TYPE_3__* xsltStepStatePtr ;
struct TYPE_13__ {int step; TYPE_5__* node; } ;
typedef TYPE_3__ xsltStepState ;
typedef TYPE_5__* xmlNodePtr ;
struct TYPE_14__ {char* name; } ;
struct TYPE_11__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(xsltTransformContextPtr VAR_3, xsltStepStates *VAR_4,
                 int VAR_5, xmlNodePtr VAR_6) {
    if ((VAR_4->states == ((void*)0)) || (VAR_4->maxstates <= 0)) {
        VAR_4->maxstates = 4;
 VAR_4->nbstates = 0;
 VAR_4->states = FUNC_1(4 * sizeof(xsltStepState));
    }
    else if (VAR_4->maxstates <= VAR_4->nbstates) {
        xsltStepState *VAR_7;

 VAR_7 = (xsltStepStatePtr) FUNC_2(VAR_4->states,
          2 * VAR_4->maxstates * sizeof(xsltStepState));
 if (VAR_7 == ((void*)0)) {
     FUNC_3(VAR_2,
      "xsltPatPushState: memory re-allocation failure.\n");
     VAR_3->state = VAR_0;
     return(-1);
 }
 VAR_4->states = VAR_7;
 VAR_4->maxstates *= 2;
    }
    VAR_4->states[VAR_4->nbstates].step = VAR_5;
    VAR_4->states[VAR_4->nbstates++].node = VAR_6;



    return(0);
}
