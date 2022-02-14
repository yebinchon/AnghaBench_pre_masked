
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xmlChar ;
typedef TYPE_1__* xmlBufferPtr ;
struct TYPE_3__ {int use; int * content; } ;
typedef int FILE ;


 int FUNC_0 (int *,int,int ,int *) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;

int
FUNC_2(FILE *VAR_2, xmlBufferPtr VAR_3) {
    int VAR_4;

    if (VAR_3 == ((void*)0)) {




 return(0);
    }
    if (VAR_3->content == ((void*)0)) {




 return(0);
    }
    if (VAR_2 == ((void*)0))
 VAR_2 = VAR_0;
    VAR_4 = FUNC_0(VAR_3->content, sizeof(xmlChar), VAR_3->use, VAR_2);
    return(VAR_4);
}
