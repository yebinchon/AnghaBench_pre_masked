
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum reassign_result_type { ____Placeholder_reassign_result_type } reassign_result_type ;
struct TYPE_4__ {int s_clsid; int d_clsid; } ;
struct TYPE_3__ {int slabs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;

__attribute__((used)) static enum reassign_result_type FUNC_4(int VAR_12, int VAR_13) {
    bool VAR_14 = 0;
    if (VAR_9 != 0)
        return VAR_3;

    if (VAR_12 == VAR_13)
        return VAR_4;


    if (VAR_12 == -1) {
        VAR_12 = FUNC_3(VAR_13);

    }

    if (VAR_12 < VAR_5 || VAR_12 > VAR_6 ||
        VAR_13 < VAR_5 || VAR_13 > VAR_6)
        return VAR_0;

    FUNC_1(&VAR_11);
    if (VAR_10[VAR_12].slabs < 2)
        VAR_14 = 1;
    FUNC_2(&VAR_11);
    if (VAR_14)
        return VAR_1;

    VAR_7.s_clsid = VAR_12;
    VAR_7.d_clsid = VAR_13;

    VAR_9 = 1;
    FUNC_0(&VAR_8);

    return VAR_2;
}
