
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; int size; } ;
typedef TYPE_1__ RRegItem ;



__attribute__((used)) static int FUNC_0(RRegItem *VAR_0, RRegItem *VAR_1) {
 int VAR_2 = (VAR_0->offset * 16) + VAR_0->size;
 int VAR_3 = (VAR_1->offset * 16) + VAR_1->size;
 return VAR_2 > VAR_3;
}
