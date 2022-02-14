
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cyBarHeight; void* bands; scalar_t__ nBands; void* cyRowHeights; scalar_t__ nRows; int rcClient; } ;
typedef TYPE_1__ rbsize_result_t ;


 int FUNC_0 (int *,int,int,int,int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static rbsize_result_t FUNC_2(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    rbsize_result_t VAR_7;

    FUNC_0(&VAR_7.rcClient, VAR_0, VAR_1, VAR_2, VAR_3);
    VAR_7.cyBarHeight = VAR_4;
    VAR_7.nRows = 0;
    VAR_7.cyRowHeights = FUNC_1(VAR_5 * sizeof(int));
    VAR_7.nBands = 0;
    VAR_7.bands = FUNC_1(VAR_6 * sizeof(*VAR_7.bands));

    return VAR_7;
}
