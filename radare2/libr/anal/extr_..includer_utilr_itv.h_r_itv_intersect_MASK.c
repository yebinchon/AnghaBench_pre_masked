
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_5__ {scalar_t__ const member_1; scalar_t__ const member_0; scalar_t__ size; scalar_t__ addr; } ;
typedef TYPE_1__ RInterval ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline RInterval FUNC_2(RInterval VAR_0, RInterval VAR_1) {
 const ut64 VAR_2 = FUNC_0 (VAR_0.addr, VAR_1.addr);
 const ut64 VAR_3 = FUNC_1 (VAR_0.addr + VAR_0.size - 1, VAR_1.addr + VAR_1.size - 1) + 1;
 RInterval VAR_4 = {VAR_2, VAR_3 - VAR_2};
 return VAR_4;
}
