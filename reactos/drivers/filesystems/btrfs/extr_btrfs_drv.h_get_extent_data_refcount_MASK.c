
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int count; } ;
struct TYPE_5__ {int count; } ;
struct TYPE_4__ {int count; } ;
typedef TYPE_1__ SHARED_DATA_REF ;
typedef TYPE_2__ EXTENT_REF_V0 ;
typedef TYPE_3__ EXTENT_DATA_REF ;
__attribute__((used)) __inline static uint32_t FUNC_0(uint8_t VAR_0, void* VAR_1) {
    switch (VAR_0) {
        case 128:
            return 1;

        case 132:
        {
            EXTENT_DATA_REF* VAR_2 = (EXTENT_DATA_REF*)VAR_1;
            return VAR_2->count;
        }

        case 131:
        {
            EXTENT_REF_V0* VAR_3 = (EXTENT_REF_V0*)VAR_1;
            return VAR_3->count;
        }

        case 130:
            return 1;

        case 129:
        {
            SHARED_DATA_REF* VAR_4 = (SHARED_DATA_REF*)VAR_1;
            return VAR_4->count;
        }

        default:
            return 0;
    }
}
