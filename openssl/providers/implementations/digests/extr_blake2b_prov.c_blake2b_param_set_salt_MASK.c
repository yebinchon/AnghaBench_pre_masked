
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ salt; } ;
typedef TYPE_1__ BLAKE2B_PARAM ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int const*,size_t) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;

void FUNC_2(BLAKE2B_PARAM *VAR_1, const uint8_t *VAR_2, size_t VAR_3)
{
    FUNC_0(VAR_1->salt, VAR_2, VAR_3);
    FUNC_1(VAR_1->salt + VAR_3, 0, VAR_0 - VAR_3);
}
