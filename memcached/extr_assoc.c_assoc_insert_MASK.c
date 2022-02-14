
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {int nkey; struct TYPE_6__* h_next; } ;
typedef TYPE_1__ item ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t const FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 TYPE_1__** VAR_3 ;
 TYPE_1__** VAR_4 ;

int FUNC_3(item *VAR_5, const uint32_t VAR_6) {
    unsigned int VAR_7;



    if (VAR_1 &&
        (VAR_7 = (VAR_6 & FUNC_2(VAR_2 - 1))) >= VAR_0)
    {
        VAR_5->h_next = VAR_3[VAR_7];
        VAR_3[VAR_7] = VAR_5;
    } else {
        VAR_5->h_next = VAR_4[VAR_6 & FUNC_2(VAR_2)];
        VAR_4[VAR_6 & FUNC_2(VAR_2)] = VAR_5;
    }

    FUNC_1(FUNC_0(VAR_5), VAR_5->nkey);
    return 1;
}
