
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int name; } ;
struct TYPE_6__ {scalar_t__* event_vector; } ;
typedef TYPE_1__ HTMLDocumentNode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(HTMLDocumentNode *VAR_3)
{
    if(VAR_3->event_vector) {
        int VAR_4;

        for(VAR_4=0; VAR_4 < VAR_0; VAR_4++) {
            if(VAR_3->event_vector[VAR_4]) {
                FUNC_0(VAR_3, VAR_2[VAR_4].name);
                VAR_3->event_vector[VAR_4] = VAR_1;
            }
        }
    }

    FUNC_1(VAR_3);
}
