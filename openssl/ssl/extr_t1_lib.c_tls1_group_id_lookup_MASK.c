
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ group_id; } ;
typedef TYPE_1__ TLS_GROUP_INFO ;


 size_t FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__ const* VAR_0 ;

const TLS_GROUP_INFO *FUNC_1(uint16_t VAR_1)
{

    size_t VAR_2;


    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
        if (VAR_0[VAR_2].group_id == VAR_1)
            return &VAR_0[VAR_2];
    }

    return ((void*)0);
}
