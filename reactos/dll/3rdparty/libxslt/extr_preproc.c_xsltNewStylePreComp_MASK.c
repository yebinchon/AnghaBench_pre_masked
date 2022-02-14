
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef int xsltStyleType ;
typedef TYPE_2__* xsltStylePreCompPtr ;
typedef int xsltStylePreComp ;
typedef int xsltStyleItemWithParam ;
typedef int xsltStyleItemWhen ;
typedef int xsltStyleItemVariable ;
typedef int xsltStyleItemValueOf ;
typedef int xsltStyleItemText ;
typedef int xsltStyleItemSort ;
typedef int xsltStyleItemParam ;
typedef int xsltStyleItemPI ;
typedef int xsltStyleItemOtherwise ;
typedef int xsltStyleItemNumber ;
typedef int xsltStyleItemIf ;
typedef int xsltStyleItemForEach ;
typedef int xsltStyleItemElement ;
typedef int xsltStyleItemDocument ;
typedef int xsltStyleItemCopyOf ;
typedef int xsltStyleItemCopy ;
typedef int xsltStyleItemComment ;
typedef int xsltStyleItemChoose ;
typedef int xsltStyleItemCallTemplate ;
typedef int xsltStyleItemAttribute ;
typedef int xsltStyleItemApplyTemplates ;
typedef int xsltStyleItemApplyImports ;
typedef scalar_t__ xsltElemPreCompPtr ;
struct TYPE_8__ {int type; scalar_t__ next; int * func; } ;
struct TYPE_7__ {scalar_t__ preComps; int errors; } ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int FUNC_2 (int *,TYPE_1__*,int *,char*,...) ;
 int * VAR_16 ;

__attribute__((used)) static xsltStylePreCompPtr
FUNC_3(xsltStylesheetPtr VAR_17, xsltStyleType VAR_18) {
    xsltStylePreCompPtr VAR_19;




    if (VAR_17 == ((void*)0))
        return(((void*)0));
    VAR_19 = (xsltStylePreCompPtr) FUNC_1(sizeof(xsltStylePreComp));
    if (VAR_19 == ((void*)0)) {
 FUNC_2(((void*)0), VAR_17, ((void*)0),
  "xsltNewStylePreComp : malloc failed\n");
 VAR_17->errors++;
 return(((void*)0));
    }
    FUNC_0(VAR_19, 0, sizeof(xsltStylePreComp));





    VAR_19->type = VAR_18;
    switch (VAR_19->type) {
        case 143:
            VAR_19->func = VAR_6;break;
        case 133:
            VAR_19->func = VAR_14;break;
        case 132:
            VAR_19->func = VAR_15;break;
        case 140:
            VAR_19->func = VAR_9;break;
        case 147:
            VAR_19->func = VAR_2;break;
        case 144:
            VAR_19->func = VAR_5;break;
        case 134:
            VAR_19->func = VAR_13;
     break;
        case 142:
            VAR_19->func = VAR_7;break;
        case 131:
            VAR_19->func = VAR_16;break;
        case 137:
            VAR_19->func = VAR_12;break;
        case 149:
            VAR_19->func = VAR_0;break;
        case 146:
            VAR_19->func = VAR_3;break;
        case 148:
            VAR_19->func = VAR_1;break;
        case 145:
            VAR_19->func = VAR_4;break;
        case 138:
            VAR_19->func = VAR_11;break;
        case 139:
            VAR_19->func = VAR_10;break;
        case 141:
            VAR_19->func = VAR_8;break;
 case 128:
 case 135:
 case 130:
 case 129:
     break;
 default:
 if (VAR_19->func == ((void*)0)) {
     FUNC_2(((void*)0), VAR_17, ((void*)0),
      "xsltNewStylePreComp : no function for type %d\n", VAR_18);
     VAR_17->errors++;
 }
    }
    VAR_19->next = VAR_17->preComps;
    VAR_17->preComps = (xsltElemPreCompPtr) VAR_19;

    return(VAR_19);
}
