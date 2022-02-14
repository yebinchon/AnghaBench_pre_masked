
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* Z; void* Y; void* X; } ;
struct TYPE_5__ {int version; int renderingIntent; int reserved; scalar_t__ creator; TYPE_1__ illuminant; scalar_t__* attributes; scalar_t__ model; scalar_t__ manufacturer; scalar_t__ flags; int platform; int magic; int date; scalar_t__ cmmId; } ;
typedef TYPE_2__ icHeader ;
typedef int fz_context ;


 void* FUNC_0 (int *,float) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_2, icHeader *VAR_3)
{
 VAR_3->cmmId = 0;
 VAR_3->version = 0x02200000;
 FUNC_2(VAR_2, &(VAR_3->date));
 VAR_3->magic = VAR_0;
 VAR_3->platform = VAR_1;
 VAR_3->flags = 0;
 VAR_3->manufacturer = 0;
 VAR_3->model = 0;
 VAR_3->attributes[0] = 0;
 VAR_3->attributes[1] = 0;
 VAR_3->renderingIntent = 3;
 VAR_3->illuminant.X = FUNC_0(VAR_2, (float) 0.9642);
 VAR_3->illuminant.Y = FUNC_0(VAR_2, (float) 1.0);
 VAR_3->illuminant.Z = FUNC_0(VAR_2, (float) 0.8249);
 VAR_3->creator = 0;
 FUNC_1(VAR_3->reserved, 0, 44);
}
