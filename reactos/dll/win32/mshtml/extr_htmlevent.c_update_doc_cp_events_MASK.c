
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cp_static_data_t ;
struct TYPE_2__ {int flags; int dispid; } ;
typedef int HTMLDocumentNode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ) ;

void FUNC_2(HTMLDocumentNode *VAR_3, cp_static_data_t *VAR_4)
{
    int VAR_5;

    for(VAR_5=0; VAR_5 < VAR_0; VAR_5++) {
        if((VAR_2[VAR_5].flags & VAR_1) && FUNC_1(VAR_4, VAR_2[VAR_5].dispid))
            FUNC_0(VAR_3, VAR_5);
    }
}
