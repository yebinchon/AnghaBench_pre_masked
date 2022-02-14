
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int v64 ;
typedef int v32 ;
typedef int v16 ;
typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ contents; } ;
typedef TYPE_1__ intset ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int64_t FUNC_4(intset *VAR_2, int VAR_3, uint8_t VAR_4) {
    int64_t VAR_5;
    int32_t VAR_6;
    int16_t VAR_7;

    if (VAR_4 == VAR_1) {
        FUNC_0(&VAR_5,((int64_t*)VAR_2->contents)+VAR_3,sizeof(VAR_5));
        FUNC_3(&VAR_5);
        return VAR_5;
    } else if (VAR_4 == VAR_0) {
        FUNC_0(&VAR_6,((int32_t*)VAR_2->contents)+VAR_3,sizeof(VAR_6));
        FUNC_2(&VAR_6);
        return VAR_6;
    } else {
        FUNC_0(&VAR_7,((int16_t*)VAR_2->contents)+VAR_3,sizeof(VAR_7));
        FUNC_1(&VAR_7);
        return VAR_7;
    }
}
