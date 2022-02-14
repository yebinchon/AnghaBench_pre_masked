
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* xsltParserContextPtr ;
typedef int xmlChar ;
struct TYPE_8__ {int error; TYPE_1__* comp; } ;
struct TYPE_7__ {double priority; } ;


 char VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *,int,int,int ) ;
 int FUNC_5 (TYPE_2__*,int *,int) ;
 int * FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int *,int *,char*) ;

__attribute__((used)) static void
FUNC_8(xsltParserContextPtr VAR_6, int VAR_7) {
    VAR_2;
    if ((VAR_0 == '/') && (FUNC_0(1) == '/')) {




 VAR_1;
 VAR_1;
 VAR_6->comp->priority = 0.5;
 FUNC_5(VAR_6, ((void*)0), VAR_7);
    } else if (VAR_0 == '/') {



 VAR_1;
 VAR_2;
 FUNC_1(VAR_5, ((void*)0), ((void*)0), VAR_7);
 if ((VAR_0 != 0) && (VAR_0 != '|')) {
     FUNC_1(VAR_4, ((void*)0), ((void*)0), VAR_7);
     FUNC_5(VAR_6, ((void*)0), VAR_7);
 }
    } else if (VAR_0 == '*') {
 FUNC_5(VAR_6, ((void*)0), VAR_7);
    } else if (VAR_0 == '@') {
 FUNC_5(VAR_6, ((void*)0), VAR_7);
    } else {
 xmlChar *VAR_8;
 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8 == ((void*)0)) {
     FUNC_7(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileLocationPathPattern : Name expected\n");
     VAR_6->error = 1;
     return;
 }
 VAR_2;
 if ((VAR_0 == '(') && !FUNC_3(VAR_8)) {
     FUNC_4(VAR_6, VAR_8, 1, VAR_7, 0);
     FUNC_2(VAR_8);
     VAR_8 = ((void*)0);
     if ((VAR_0 == '/') && (FUNC_0(1) == '/')) {
  FUNC_1(VAR_3, ((void*)0), ((void*)0), VAR_7);
  VAR_1;
  VAR_1;
  VAR_2;
  FUNC_5(VAR_6, ((void*)0), VAR_7);
     } else if (VAR_0 == '/') {
  FUNC_1(VAR_4, ((void*)0), ((void*)0), VAR_7);
  VAR_1;
  VAR_2;
  FUNC_5(VAR_6, ((void*)0), VAR_7);
     }
     return;
 }
 FUNC_5(VAR_6, VAR_8, VAR_7);
    }
error:
    return;
}
