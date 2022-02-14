
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_4__ {scalar_t__ addr; scalar_t__ size; } ;
typedef TYPE_1__ RInterval ;



__attribute__((used)) static inline bool FUNC_0(RInterval VAR_0, RInterval VAR_1) {
 const ut64 VAR_2 = VAR_0.addr + VAR_0.size, VAR_3 = VAR_1.addr + VAR_1.size;
 return (!VAR_3 || VAR_0.addr < VAR_3) && (!VAR_2 || VAR_1.addr < VAR_2);
}
