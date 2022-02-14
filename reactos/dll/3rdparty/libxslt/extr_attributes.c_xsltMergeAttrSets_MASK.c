
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xsltStylePreCompPtr ;
typedef TYPE_2__* xsltAttrSetPtr ;
typedef TYPE_3__* xsltAttrElemPtr ;
struct TYPE_10__ {TYPE_1__* psvi; } ;
struct TYPE_9__ {struct TYPE_9__* next; TYPE_4__* attr; } ;
struct TYPE_8__ {TYPE_3__* attrs; } ;
struct TYPE_7__ {scalar_t__ name; scalar_t__ ns; } ;


 void* FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_1(xsltAttrSetPtr VAR_0, xsltAttrSetPtr VAR_1) {
    xsltAttrElemPtr VAR_2;
    xsltAttrElemPtr VAR_3 = VAR_1->attrs;
    int VAR_4;

    while (VAR_3 != ((void*)0)) {



 VAR_2 = VAR_0->attrs;
 VAR_4 = 1;
 while (VAR_2 != ((void*)0)) {
            xsltStylePreCompPtr VAR_5 = VAR_2->attr->psvi;
            xsltStylePreCompPtr VAR_6 = VAR_3->attr->psvi;

            if ((VAR_5->name == VAR_6->name) &&
                (VAR_5->ns == VAR_6->ns)) {
                VAR_4 = 0;
                break;
            }
     if (VAR_2->next == ((void*)0))
  break;
            VAR_2 = VAR_2->next;
 }

 if (VAR_4 == 1) {
     if (VAR_2 == ((void*)0)) {
  VAR_0->attrs = FUNC_0(VAR_3->attr);
     } else if (VAR_4) {
  VAR_2->next = FUNC_0(VAR_3->attr);
     }
 }

 VAR_3 = VAR_3->next;
    }
}
