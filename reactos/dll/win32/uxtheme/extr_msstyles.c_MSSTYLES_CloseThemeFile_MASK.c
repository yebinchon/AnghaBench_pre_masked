
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int image; struct TYPE_9__* next; struct TYPE_9__* images; struct TYPE_9__* partstate; struct TYPE_9__* properties; struct TYPE_9__* classes; scalar_t__ hTheme; int dwRefCount; } ;
typedef TYPE_1__* PTHEME_PROPERTY ;
typedef TYPE_1__* PTHEME_PARTSTATE ;
typedef TYPE_1__* PTHEME_IMAGE ;
typedef TYPE_1__* PTHEME_FILE ;
typedef TYPE_1__* PTHEME_CLASS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (char*,TYPE_1__*,int ) ;

void FUNC_5(PTHEME_FILE VAR_0)
{
    if(VAR_0) {

        VAR_0->dwRefCount--;
        FUNC_4("Theme %p refcount: %d\n", VAR_0, VAR_0->dwRefCount);

        if(!VAR_0->dwRefCount) {
            if(VAR_0->hTheme) FUNC_1(VAR_0->hTheme);
            if(VAR_0->classes) {
                while(VAR_0->classes) {
                    PTHEME_CLASS VAR_1 = VAR_0->classes;
                    VAR_0->classes = VAR_1->next;
                    while(VAR_1->partstate) {
                        PTHEME_PARTSTATE VAR_2 = VAR_1->partstate;

                        while(VAR_2->properties) {
                            PTHEME_PROPERTY VAR_3 = VAR_2->properties;
                            VAR_2->properties = VAR_3->next;
                            FUNC_3(FUNC_2(), 0, VAR_3);
                        }

                        VAR_1->partstate = VAR_2->next;
                        FUNC_3(FUNC_2(), 0, VAR_2);
                    }
                    FUNC_3(FUNC_2(), 0, VAR_1);
                }
            }
            while (VAR_0->images)
            {
                PTHEME_IMAGE VAR_4 = VAR_0->images;
                VAR_0->images = VAR_4->next;
                FUNC_0 (VAR_4->image);
                FUNC_3 (FUNC_2(), 0, VAR_4);
            }
            FUNC_3(FUNC_2(), 0, VAR_0);
        }
    }
}
