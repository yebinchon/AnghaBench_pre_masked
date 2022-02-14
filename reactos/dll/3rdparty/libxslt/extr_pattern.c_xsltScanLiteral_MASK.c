
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltParserContextPtr ;
typedef int xmlChar ;
struct TYPE_3__ {int error; } ;


 char VAR_0 ;
 int const* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int const*,int*) ;
 int * FUNC_2 (int const*,int) ;

__attribute__((used)) static xmlChar *
FUNC_3(xsltParserContextPtr VAR_4) {
    const xmlChar *VAR_5, *VAR_6;
    xmlChar *VAR_7 = ((void*)0);
    int VAR_8, VAR_9;

    VAR_3;
    if (VAR_0 == '"') {
        VAR_2;
 VAR_6 = VAR_5 = VAR_1;
 VAR_8 = FUNC_1(((void*)0), VAR_6, &VAR_9);
 while ((FUNC_0(VAR_8)) && (VAR_8 != '"')) {
     VAR_6 += VAR_9;
     VAR_8 = FUNC_1(((void*)0), VAR_6, &VAR_9);
 }
 if (!FUNC_0(VAR_8)) {
     VAR_4->error = 1;
     return(((void*)0));
 } else {
     VAR_7 = FUNC_2(VAR_5, VAR_6 - VAR_5);
        }
 VAR_6 += VAR_9;
 VAR_1 = VAR_6;
    } else if (VAR_0 == '\'') {
        VAR_2;
 VAR_6 = VAR_5 = VAR_1;
 VAR_8 = FUNC_1(((void*)0), VAR_6, &VAR_9);
 while ((FUNC_0(VAR_8)) && (VAR_8 != '\'')) {
     VAR_6 += VAR_9;
     VAR_8 = FUNC_1(((void*)0), VAR_6, &VAR_9);
 }
 if (!FUNC_0(VAR_8)) {
     VAR_4->error = 1;
     return(((void*)0));
 } else {
     VAR_7 = FUNC_2(VAR_5, VAR_6 - VAR_5);
        }
 VAR_6 += VAR_9;
 VAR_1 = VAR_6;
    } else {

 VAR_4->error = 1;
 return(((void*)0));
    }
    return(VAR_7);
}
