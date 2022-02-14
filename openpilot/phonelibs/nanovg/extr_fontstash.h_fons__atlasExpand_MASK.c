
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; int nnodes; } ;
typedef TYPE_1__ FONSatlas ;


 int FUNC_0 (TYPE_1__*,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_1(FONSatlas* VAR_0, int VAR_1, int VAR_2)
{

 if (VAR_1 > VAR_0->width)
  FUNC_0(VAR_0, VAR_0->nnodes, VAR_0->width, 0, VAR_1 - VAR_0->width);
 VAR_0->width = VAR_1;
 VAR_0->height = VAR_2;
}
