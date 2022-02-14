
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef TYPE_3__* xsltStylePreCompPtr ;
typedef TYPE_4__* xsltStyleItemWithParamPtr ;
typedef TYPE_5__* xsltStyleItemWhenPtr ;
typedef TYPE_6__* xsltStyleItemVariablePtr ;
typedef TYPE_7__* xsltStyleItemValueOfPtr ;
typedef TYPE_8__* xsltStyleItemSortPtr ;
typedef TYPE_9__* xsltStyleItemParamPtr ;
typedef TYPE_10__* xsltStyleItemNumberPtr ;
typedef TYPE_11__* xsltStyleItemIfPtr ;
typedef TYPE_12__* xsltStyleItemForEachPtr ;
typedef TYPE_13__* xsltStyleItemCopyOfPtr ;
typedef TYPE_14__* xsltStyleItemApplyTemplatesPtr ;
typedef scalar_t__ xsltLocale ;
struct TYPE_30__ {int * comp; } ;
struct TYPE_29__ {scalar_t__ locale; int * comp; } ;
struct TYPE_28__ {int * comp; } ;
struct TYPE_27__ {int * comp; } ;
struct TYPE_26__ {int * comp; } ;
struct TYPE_25__ {int * comp; } ;
struct TYPE_23__ {int * fromPat; int * countPat; } ;
struct TYPE_24__ {int type; scalar_t__ locale; struct TYPE_24__* nsList; TYPE_2__ numdata; int * comp; } ;
struct TYPE_22__ {int * fromPat; int * countPat; } ;
struct TYPE_21__ {int * comp; } ;
struct TYPE_20__ {int * comp; } ;
struct TYPE_19__ {int * comp; } ;
struct TYPE_18__ {int * comp; } ;
struct TYPE_17__ {TYPE_1__ numdata; } ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(xsltStylePreCompPtr VAR_0) {
    if (VAR_0 == ((void*)0))
 return;
    if (VAR_0->locale != (xsltLocale)0)
 FUNC_3(VAR_0->locale);
    if (VAR_0->comp != ((void*)0))
 FUNC_1(VAR_0->comp);
    if (VAR_0->numdata.countPat != ((void*)0))
        FUNC_2(VAR_0->numdata.countPat);
    if (VAR_0->numdata.fromPat != ((void*)0))
        FUNC_2(VAR_0->numdata.fromPat);
    if (VAR_0->nsList != ((void*)0))
 FUNC_0(VAR_0->nsList);


    FUNC_0(VAR_0);
}
