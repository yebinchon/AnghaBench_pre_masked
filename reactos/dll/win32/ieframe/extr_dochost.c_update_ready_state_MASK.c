
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int loading_pos; int position; } ;
struct TYPE_7__ {scalar_t__ doc_state; int browser_service; TYPE_1__ travellog; } ;
typedef scalar_t__ READYSTATE ;
typedef TYPE_2__ DocHost ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(DocHost *VAR_4, READYSTATE VAR_5)
{
    if(VAR_5 > VAR_3 && VAR_4->travellog.loading_pos != -1) {
        FUNC_0("histupdate not notified\n");
        VAR_4->travellog.position = VAR_4->travellog.loading_pos;
        VAR_4->travellog.loading_pos = -1;
    }

    if(VAR_5 > VAR_3 && VAR_4->doc_state <= VAR_3 && !VAR_4->browser_service )
        FUNC_1(VAR_4, VAR_1);

    if(VAR_5 == VAR_2 && VAR_4->doc_state < VAR_2) {
        FUNC_2(VAR_4, VAR_2);
        if(!VAR_4->browser_service)
            FUNC_1(VAR_4, VAR_0);
    }else {
        FUNC_2(VAR_4, VAR_5);
    }
}
