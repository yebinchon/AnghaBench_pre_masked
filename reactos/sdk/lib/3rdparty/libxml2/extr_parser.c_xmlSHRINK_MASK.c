
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
struct TYPE_6__ {scalar_t__* cur; } ;
struct TYPE_5__ {TYPE_3__* input; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2 (xmlParserCtxtPtr VAR_1) {
    FUNC_1(VAR_1->input);
    if (*VAR_1->input->cur == 0)
        FUNC_0(VAR_1->input, VAR_0);
}
