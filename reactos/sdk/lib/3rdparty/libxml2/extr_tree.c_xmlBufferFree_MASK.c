
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlBufferPtr ;
struct TYPE_4__ {scalar_t__ alloc; struct TYPE_4__* content; struct TYPE_4__* contentIO; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;

void
FUNC_2(xmlBufferPtr VAR_3) {
    if (VAR_3 == ((void*)0)) {




 return;
    }

    if ((VAR_3->alloc == VAR_1) &&
        (VAR_3->contentIO != ((void*)0))) {
        FUNC_0(VAR_3->contentIO);
    } else if ((VAR_3->content != ((void*)0)) &&
        (VAR_3->alloc != VAR_0)) {
        FUNC_0(VAR_3->content);
    }
    FUNC_0(VAR_3);
}
