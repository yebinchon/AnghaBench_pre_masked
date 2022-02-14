
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pid; TYPE_1__* data; } ;
struct TYPE_3__ {scalar_t__ magic; int pid; } ;
typedef TYPE_1__ RIODescData ;
typedef int RIODesc ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_0(RIODesc *VAR_2) {

 return VAR_1 ? VAR_1->pid : -1;
}
