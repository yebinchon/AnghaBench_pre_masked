
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef TYPE_2__ const* xmlNodePtr ;
struct TYPE_7__ {int type; int * content; int name; int doc; } ;
typedef TYPE_2__ xmlNode ;
typedef int * xmlEntityPtr ;
typedef int xmlChar ;
typedef int * xmlBufPtr ;
typedef int xmlAttrPtr ;
struct TYPE_6__ {int * href; } ;
 int * FUNC_0 () ;
 int * FUNC_1 (int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__ const*) ;
 int * FUNC_5 (int ,int ) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int *) ;

xmlChar *
FUNC_8(const xmlNode *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return (((void*)0));
    switch (VAR_0->type) {
        case 143:
        case 138:{
                xmlBufPtr VAR_1;
                xmlChar *VAR_2;

                VAR_1 = FUNC_1(64);
                if (VAR_1 == ((void*)0))
                    return (((void*)0));
  FUNC_4(VAR_1, VAR_0);
                VAR_2 = FUNC_2(VAR_1);
                FUNC_3(VAR_1);
                return (VAR_2);
            }
        case 147:
     return(FUNC_6((xmlAttrPtr) VAR_0));
        case 145:
        case 131:
            if (VAR_0->content != ((void*)0))
                return (FUNC_7(VAR_0->content));
            return (((void*)0));
        case 135:{
                xmlEntityPtr VAR_3;
                xmlBufPtr VAR_4;
                xmlChar *VAR_5;


                VAR_3 = FUNC_5(VAR_0->doc, VAR_0->name);
                if (VAR_3 == ((void*)0))
                    return (((void*)0));

                VAR_4 = FUNC_0();
                if (VAR_4 == ((void*)0))
                    return (((void*)0));

                FUNC_4(VAR_4, VAR_0);

                VAR_5 = FUNC_2(VAR_4);
                FUNC_3(VAR_4);
                return (VAR_5);
            }
        case 136:
        case 141:
        case 132:
        case 140:
        case 128:
        case 129:
            return (((void*)0));
        case 142:



        case 134: {
     xmlBufPtr VAR_6;
     xmlChar *VAR_7;

     VAR_6 = FUNC_0();
     if (VAR_6 == ((void*)0))
  return (((void*)0));

     FUNC_4(VAR_6, (xmlNodePtr) VAR_0);

     VAR_7 = FUNC_2(VAR_6);
     FUNC_3(VAR_6);
     return (VAR_7);
 }
        case 133: {
     xmlChar *VAR_8;

     VAR_8 = FUNC_7(((xmlNsPtr) VAR_0)->href);
            return (VAR_8);
 }
        case 139:

            return (((void*)0));
        case 148:

            return (((void*)0));
        case 137:

            return (((void*)0));
        case 146:
        case 130:
            if (VAR_0->content != ((void*)0))
                return (FUNC_7(VAR_0->content));
            return (((void*)0));
    }
    return (((void*)0));
}
