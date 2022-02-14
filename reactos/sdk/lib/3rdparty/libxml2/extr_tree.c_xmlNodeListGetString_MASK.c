
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; char* content; char* name; struct TYPE_7__* next; TYPE_1__* parent; } ;
typedef TYPE_2__ xmlNode ;
typedef TYPE_3__* xmlEntityPtr ;
typedef int xmlDocPtr ;
typedef char xmlChar ;
struct TYPE_8__ {TYPE_2__* children; } ;
struct TYPE_6__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int VAR_4 ;
 TYPE_3__* FUNC_4 (int ,char*) ;
 char* FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,char*,int) ;

xmlChar *
FUNC_7(xmlDocPtr VAR_5, const xmlNode *VAR_6, int VAR_7)
{
    const xmlNode *VAR_8 = VAR_6;
    xmlChar *VAR_9 = ((void*)0);
    xmlEntityPtr VAR_10;
    int VAR_11;

    if (VAR_6 == ((void*)0))
        return (((void*)0));
    if ((VAR_6->parent != ((void*)0)) && (VAR_6->parent->type == VAR_0))
        VAR_11 = 1;
    else
        VAR_11 = 0;

    while (VAR_8 != ((void*)0)) {
        if ((VAR_8->type == VAR_3) ||
            (VAR_8->type == VAR_1)) {
            if (VAR_7) {
                VAR_9 = FUNC_5(VAR_9, VAR_8->content);
            } else {
                xmlChar *VAR_12;

  if (VAR_11)
      VAR_12 = FUNC_0(VAR_5, VAR_8->content);
  else
      VAR_12 = FUNC_1(VAR_5, VAR_8->content);
                if (VAR_12 != ((void*)0)) {
                    VAR_9 = FUNC_5(VAR_9, VAR_12);
                    FUNC_2(VAR_12);
                }
            }
        } else if (VAR_8->type == VAR_2) {
            if (VAR_7) {
                VAR_10 = FUNC_4(VAR_5, VAR_8->name);
                if (VAR_10 != ((void*)0)) {
                    xmlChar *VAR_13;
                    VAR_13 = FUNC_7(VAR_5, VAR_10->children, 1);
                    if (VAR_13 != ((void*)0)) {
                        VAR_9 = FUNC_5(VAR_9, VAR_13);
                        FUNC_2(VAR_13);
                    }
                } else {
                    VAR_9 = FUNC_5(VAR_9, VAR_8->content);
                }
            } else {
                xmlChar VAR_14[2];

                VAR_14[0] = '&';
                VAR_14[1] = 0;
                VAR_9 = FUNC_6(VAR_9, VAR_14, 1);
                VAR_9 = FUNC_5(VAR_9, VAR_8->name);
                VAR_14[0] = ';';
                VAR_14[1] = 0;
                VAR_9 = FUNC_6(VAR_9, VAR_14, 1);
            }
        }







        VAR_8 = VAR_8->next;
    }
    return (VAR_9);
}
