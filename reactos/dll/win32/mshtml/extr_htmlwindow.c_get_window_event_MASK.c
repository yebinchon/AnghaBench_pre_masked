
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int eventid_t ;
typedef int VARIANT ;
struct TYPE_5__ {TYPE_1__* inner_window; } ;
struct TYPE_4__ {int event_target; int doc; } ;
typedef TYPE_2__ HTMLWindow ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static inline HRESULT FUNC_2(HTMLWindow *VAR_1, eventid_t VAR_2, VARIANT *VAR_3)
{
    if(!VAR_1->inner_window->doc) {
        FUNC_0("No document\n");
        return VAR_0;
    }

    return FUNC_1(&VAR_1->inner_window->event_target, VAR_2, VAR_3);
}
