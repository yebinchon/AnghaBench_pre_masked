
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ e_type; } ;
struct TYPE_5__ {TYPE_1__ ehdr; } ;
typedef TYPE_2__ ELFOBJ ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(ELFOBJ *VAR_1) {
 return VAR_1->ehdr.e_type == VAR_0;
}
