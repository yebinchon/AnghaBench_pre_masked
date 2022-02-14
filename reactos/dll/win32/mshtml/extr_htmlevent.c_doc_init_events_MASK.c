
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int event_vector; } ;
typedef TYPE_1__ HTMLDocumentNode ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

HRESULT FUNC_4(HTMLDocumentNode *VAR_5)
{
    unsigned VAR_6;
    HRESULT VAR_7;

    VAR_5->event_vector = FUNC_2(VAR_0*sizeof(BOOL));
    if(!VAR_5->event_vector)
        return VAR_2;

    FUNC_3(VAR_5);

    for(VAR_6=0; VAR_6 < VAR_0; VAR_6++) {
        if(VAR_4[VAR_6].flags & VAR_1) {
            VAR_7 = FUNC_1(VAR_5, VAR_6);
            if(FUNC_0(VAR_7))
                return VAR_7;
        }
    }

    return VAR_3;
}
