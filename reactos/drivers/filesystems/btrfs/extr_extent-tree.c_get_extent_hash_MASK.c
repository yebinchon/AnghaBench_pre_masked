
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
struct TYPE_6__ {int offset; } ;
struct TYPE_5__ {int offset; } ;
struct TYPE_4__ {int offset; } ;
typedef TYPE_1__ TREE_BLOCK_REF ;
typedef TYPE_2__ SHARED_DATA_REF ;
typedef TYPE_3__ SHARED_BLOCK_REF ;
typedef int EXTENT_DATA_REF ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static uint64_t FUNC_2(uint8_t VAR_4, void* VAR_5) {
    if (VAR_4 == VAR_0) {
        return FUNC_1((EXTENT_DATA_REF*)VAR_5);
    } else if (VAR_4 == VAR_1) {
        SHARED_BLOCK_REF* VAR_6 = (SHARED_BLOCK_REF*)VAR_5;
        return VAR_6->offset;
    } else if (VAR_4 == VAR_2) {
        SHARED_DATA_REF* VAR_7 = (SHARED_DATA_REF*)VAR_5;
        return VAR_7->offset;
    } else if (VAR_4 == VAR_3) {
        TREE_BLOCK_REF* VAR_8 = (TREE_BLOCK_REF*)VAR_5;
        return VAR_8->offset;
    } else {
        FUNC_0("unhandled extent type %x\n", VAR_4);
        return 0;
    }
}
