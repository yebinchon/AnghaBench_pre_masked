
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct wasapi_state {scalar_t__ share_mode; int pSessionControl; } ;
struct ao {struct wasapi_state* priv; } ;
typedef enum aocontrol { ____Placeholder_aocontrol } aocontrol ;



 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ao*,int,void*) ;
 int FUNC_7 (struct ao*,int,void*) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(struct ao *VAR_3, enum aocontrol VAR_4, void *VAR_5)
{
    struct wasapi_state *VAR_6 = VAR_3->priv;


    switch (VAR_4) {
    case 128:
        if (!VAR_6->pSessionControl)
            return VAR_1;

        wchar_t *VAR_7 = FUNC_4(((void*)0), (char*)VAR_5);
        wchar_t *VAR_8 = ((void*)0);



        do {
            FUNC_2(VAR_6->pSessionControl, VAR_7, ((void*)0));

            FUNC_3(VAR_8, FUNC_0(VAR_8));
            FUNC_1(VAR_6->pSessionControl, &VAR_8);
        } while (FUNC_8(VAR_7, VAR_8));
        FUNC_3(VAR_8, FUNC_0(VAR_8));
        FUNC_5(VAR_7);
        return VAR_2;
    }

    return VAR_6->share_mode == VAR_0 ?
        FUNC_6(VAR_3, VAR_4, VAR_5) :
        FUNC_7(VAR_3, VAR_4, VAR_5);
}
