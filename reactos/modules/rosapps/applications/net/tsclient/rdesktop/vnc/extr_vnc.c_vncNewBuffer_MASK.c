
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int owner; int w; int h; int linew; TYPE_2__* format; void* data; } ;
typedef TYPE_1__ vncBuffer ;
struct TYPE_5__ {int bitsPerPixel; } ;


 TYPE_2__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

vncBuffer *
FUNC_2(int VAR_0, int VAR_1, int VAR_2)
{
 vncBuffer *VAR_3 = (vncBuffer *) FUNC_1(sizeof(vncBuffer));
 VAR_3->format = FUNC_0(VAR_2);
 VAR_3->data = (void *) FUNC_1(VAR_0 * VAR_1 * (VAR_3->format->bitsPerPixel / 8));
 VAR_3->owner = 1;
 VAR_3->w = VAR_0;
 VAR_3->h = VAR_1;
 VAR_3->linew = VAR_0;
 return VAR_3;
}
