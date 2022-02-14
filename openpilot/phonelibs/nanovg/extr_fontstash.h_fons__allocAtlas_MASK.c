
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; int cnodes; scalar_t__ nnodes; struct TYPE_6__* nodes; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ FONSatlasNode ;
typedef TYPE_1__ FONSatlas ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static FONSatlas* FUNC_3(int VAR_0, int VAR_1, int VAR_2)
{
 FONSatlas* VAR_3 = ((void*)0);


 VAR_3 = (FONSatlas*)FUNC_1(sizeof(FONSatlas));
 if (VAR_3 == ((void*)0)) goto error;
 FUNC_2(VAR_3, 0, sizeof(FONSatlas));

 VAR_3->width = VAR_0;
 VAR_3->height = VAR_1;


 VAR_3->nodes = (FONSatlasNode*)FUNC_1(sizeof(FONSatlasNode) * VAR_2);
 if (VAR_3->nodes == ((void*)0)) goto error;
 FUNC_2(VAR_3->nodes, 0, sizeof(FONSatlasNode) * VAR_2);
 VAR_3->nnodes = 0;
 VAR_3->cnodes = VAR_2;


 VAR_3->nodes[0].x = 0;
 VAR_3->nodes[0].y = 0;
 VAR_3->nodes[0].width = (short)VAR_0;
 VAR_3->nnodes++;

 return VAR_3;

error:
 if (VAR_3) FUNC_0(VAR_3);
 return ((void*)0);
}
