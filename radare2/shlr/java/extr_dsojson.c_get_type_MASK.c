
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* info; } ;
struct TYPE_4__ {int type; } ;
typedef TYPE_2__ DsoJsonObj ;



__attribute__((used)) static int FUNC_0 (DsoJsonObj *VAR_0) {
 return (VAR_0 && VAR_0->info)? VAR_0->info->type: -1;
}
