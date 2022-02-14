
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* file; TYPE_1__* device; } ;
struct TYPE_5__ {TYPE_2__* disk; } ;
typedef TYPE_2__ GrubFS ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1 (GrubFS *VAR_0) {
 if (VAR_0) {
  if (VAR_0->file && VAR_0->file->device) {
   FUNC_0 (VAR_0->file->device->disk);
  }

  FUNC_0 (VAR_0->file);
  FUNC_0 (VAR_0);
 }
}
