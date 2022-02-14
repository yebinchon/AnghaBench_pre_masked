
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; scalar_t__ is_tiny; } ;
typedef TYPE_1__ RAGraph ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(const RAGraph *VAR_1) {
 return VAR_1->is_tiny || VAR_1->mode == VAR_0;
}
