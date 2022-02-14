
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sds ;
struct TYPE_3__ {scalar_t__ encoding; int de; } ;
typedef TYPE_1__ hashTypeIterator ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

sds FUNC_3(hashTypeIterator *VAR_2, int VAR_3) {
    FUNC_2(VAR_2->encoding == VAR_0);

    if (VAR_3 & VAR_1) {
        return FUNC_0(VAR_2->de);
    } else {
        return FUNC_1(VAR_2->de);
    }
}
