
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* window_ref; } ;
typedef TYPE_2__ nsWineURI ;
struct TYPE_14__ {TYPE_3__* window; } ;
struct TYPE_13__ {TYPE_1__* doc_obj; TYPE_4__* window_ref; } ;
struct TYPE_11__ {int nscontainer; } ;
typedef TYPE_3__ HTMLOuterWindow ;


 int FUNC_0 (char*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(nsWineURI *VAR_0, HTMLOuterWindow *VAR_1)
{
    if(VAR_0->window_ref) {
        if(VAR_0->window_ref->window == VAR_1)
            return;
        FUNC_0("Changing %p -> %p\n", VAR_0->window_ref->window, VAR_1);
        FUNC_3(VAR_0->window_ref);
    }

    if(VAR_1) {
        FUNC_2(VAR_1->window_ref);
        VAR_0->window_ref = VAR_1->window_ref;

        if(VAR_1->doc_obj)
            FUNC_1(VAR_0, VAR_1->doc_obj->nscontainer);
    }else {
        VAR_0->window_ref = ((void*)0);
    }
}
