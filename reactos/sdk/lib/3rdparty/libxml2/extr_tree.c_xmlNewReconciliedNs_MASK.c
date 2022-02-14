
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef TYPE_2__* xmlNodePtr ;
typedef int xmlDocPtr ;
typedef int xmlChar ;
typedef int prefix ;
struct TYPE_13__ {scalar_t__ type; } ;
struct TYPE_12__ {scalar_t__ type; int href; int * prefix; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int ,int *) ;
 TYPE_1__* FUNC_3 (int ,TYPE_2__*,int *) ;
 TYPE_1__* FUNC_4 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static xmlNsPtr
FUNC_5(xmlDocPtr VAR_3, xmlNodePtr VAR_4, xmlNsPtr VAR_5) {
    xmlNsPtr VAR_6;
    xmlChar VAR_7[50];
    int VAR_8 = 1;

    if ((VAR_4 == ((void*)0)) || (VAR_4->type != VAR_0)) {




 return(((void*)0));
    }
    if ((VAR_5 == ((void*)0)) || (VAR_5->type != VAR_1)) {




 return(((void*)0));
    }



    VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5->href);
    if (VAR_6 != ((void*)0))
        return(VAR_6);





    if (VAR_5->prefix == ((void*)0))
 FUNC_0((char *) VAR_7, sizeof(VAR_7), "default");
    else
 FUNC_0((char *) VAR_7, sizeof(VAR_7), "%.20s", (char *)VAR_5->prefix);

    VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_7);
    while (VAR_6 != ((void*)0)) {
        if (VAR_8 > 1000) return(((void*)0));
 if (VAR_5->prefix == ((void*)0))
     FUNC_0((char *) VAR_7, sizeof(VAR_7), "default%d", VAR_8++);
 else
     FUNC_0((char *) VAR_7, sizeof(VAR_7), "%.20s%d",
  (char *)VAR_5->prefix, VAR_8++);
 VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_7);
    }




    VAR_6 = FUNC_2(VAR_4, VAR_5->href, VAR_7);
    return(VAR_6);
}
