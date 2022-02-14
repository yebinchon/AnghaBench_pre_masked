
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* offsets; int wine_df; } ;
typedef TYPE_1__ DataFormat ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(const DataFormat *VAR_0, int VAR_1)
{
    int VAR_2 = FUNC_0(VAR_0->wine_df, VAR_1);

    return VAR_2 >= 0 && VAR_0->offsets ? VAR_0->offsets[VAR_2] : -1;
}
