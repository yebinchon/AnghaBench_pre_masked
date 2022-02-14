
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltParserContextPtr ;
typedef int xmlChar ;
struct TYPE_4__ {int error; } ;


 char VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int *,int) ;

__attribute__((used)) static void
FUNC_3(xsltParserContextPtr VAR_5, xmlChar *VAR_6, int VAR_7) {
    FUNC_2(VAR_5, VAR_6, VAR_7);
    if (VAR_5->error)
 goto error;
    VAR_2;
    while ((VAR_0 != 0) && (VAR_0 != '|')) {
 if ((VAR_0 == '/') && (FUNC_0(1) == '/')) {
     FUNC_1(VAR_3, ((void*)0), ((void*)0), VAR_7);
     VAR_1;
     VAR_1;
     VAR_2;
     FUNC_2(VAR_5, ((void*)0), VAR_7);
 } else if (VAR_0 == '/') {
     FUNC_1(VAR_4, ((void*)0), ((void*)0), VAR_7);
     VAR_1;
     VAR_2;
     if ((VAR_0 != 0) && (VAR_0 != '|')) {
  FUNC_3(VAR_5, ((void*)0), VAR_7);
     }
 } else {
     VAR_5->error = 1;
 }
 if (VAR_5->error)
     goto error;
 VAR_2;
    }
error:
    return;
}
