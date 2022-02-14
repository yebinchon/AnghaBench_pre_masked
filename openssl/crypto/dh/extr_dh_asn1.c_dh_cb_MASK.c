
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dirty_cnt; } ;
typedef TYPE_1__ DH ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int FUNC_2(int VAR_3, ASN1_VALUE **VAR_4, const ASN1_ITEM *VAR_5,
                 void *VAR_6)
{
    if (VAR_3 == VAR_2) {
        *VAR_4 = (ASN1_VALUE *)FUNC_1();
        if (*VAR_4 != ((void*)0))
            return 2;
        return 0;
    } else if (VAR_3 == VAR_1) {
        FUNC_0((DH *)*VAR_4);
        *VAR_4 = ((void*)0);
        return 2;
    } else if (VAR_3 == VAR_0) {
        ((DH *)*VAR_4)->dirty_cnt++;
    }
    return 1;
}
