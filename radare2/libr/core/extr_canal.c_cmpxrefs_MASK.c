
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numrefs; } ;
struct TYPE_4__ {TYPE_1__ meta; } ;
typedef TYPE_2__ RAnalFunction ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
 const RAnalFunction *VAR_2 = VAR_0, *VAR_3 = VAR_1;
 int VAR_4 = VAR_2->meta.numrefs;
 int VAR_5 = VAR_3->meta.numrefs;
 return (VAR_4 > VAR_5)? 1: (VAR_4 < VAR_5)? -1: 0;
}
