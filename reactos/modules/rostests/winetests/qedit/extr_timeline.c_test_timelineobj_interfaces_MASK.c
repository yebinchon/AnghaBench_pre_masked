
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IAMTimelineObj ;
typedef int IAMTimelineGroup ;
typedef int IAMTimeline ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int **,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,char*,...) ;

__attribute__((used)) static void FUNC_9(void)
{
    HRESULT VAR_8;
    IAMTimeline *VAR_9 = ((void*)0);
    IAMTimelineObj *VAR_10;

    VAR_8 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_2, (void **)&VAR_9);
    FUNC_8(VAR_8 == VAR_6 || FUNC_7(VAR_8 == VAR_5), "CoCreateInstance failed: %08x\n", VAR_8);
    if (!VAR_9)
        return;

    VAR_8 = FUNC_5(VAR_9, &VAR_10, VAR_7);
    FUNC_8(VAR_8 == VAR_6, "CreateEmptyNode failed: %08x\n", VAR_8);
    if(VAR_8 == VAR_6)
    {
        IAMTimelineGroup *VAR_11;
        IAMTimelineObj *VAR_12;

        VAR_8 = FUNC_3(VAR_10, &VAR_3, (void **)&VAR_11);
        FUNC_8(VAR_8 == VAR_6, "got %08x\n", VAR_8);

        VAR_8 = FUNC_1(VAR_11, &VAR_4, (void **)&VAR_12);
        FUNC_8(VAR_8 == VAR_6, "got %08x\n", VAR_8);
        FUNC_8(VAR_10 == VAR_12, "Different pointers\n");
        FUNC_4(VAR_12);

        FUNC_2(VAR_11);

        FUNC_4(VAR_10);
    }

    FUNC_6(VAR_9);
}
