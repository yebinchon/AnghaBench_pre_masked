
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cpoints; int cpaths; int cverts; scalar_t__ nverts; int * verts; scalar_t__ npaths; int * paths; scalar_t__ npoints; int * points; } ;
typedef int NVGvertex ;
typedef int NVGpoint ;
typedef TYPE_1__ NVGpathCache ;
typedef int NVGpath ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static NVGpathCache* FUNC_3(void)
{
 NVGpathCache* VAR_3 = (NVGpathCache*)FUNC_0(sizeof(NVGpathCache));
 if (VAR_3 == ((void*)0)) goto error;
 FUNC_1(VAR_3, 0, sizeof(NVGpathCache));

 VAR_3->points = (NVGpoint*)FUNC_0(sizeof(NVGpoint)*VAR_1);
 if (!VAR_3->points) goto error;
 VAR_3->npoints = 0;
 VAR_3->cpoints = VAR_1;

 VAR_3->paths = (NVGpath*)FUNC_0(sizeof(NVGpath)*VAR_0);
 if (!VAR_3->paths) goto error;
 VAR_3->npaths = 0;
 VAR_3->cpaths = VAR_0;

 VAR_3->verts = (NVGvertex*)FUNC_0(sizeof(NVGvertex)*VAR_2);
 if (!VAR_3->verts) goto error;
 VAR_3->nverts = 0;
 VAR_3->cverts = VAR_2;

 return VAR_3;
error:
 FUNC_2(VAR_3);
 return ((void*)0);
}
