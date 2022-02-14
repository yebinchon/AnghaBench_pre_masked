
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lavfi {int dummy; } ;
typedef int AVFilterPad ;
typedef int AVFilterContext ;


 int FUNC_0 (struct lavfi*,int,int,int *,int,int ,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct lavfi *VAR_0, int VAR_1, AVFilterContext *VAR_2,
                            AVFilterPad *VAR_3, int VAR_4, bool VAR_5)
{
    for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
        FUNC_0(VAR_0, VAR_1, VAR_6, VAR_2, VAR_6, FUNC_1(VAR_3, VAR_6), VAR_5);
}
