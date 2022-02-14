
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int h; int linew; TYPE_1__* format; int data; int w; } ;
typedef TYPE_2__ vncBuffer ;
struct TYPE_6__ {int bitsPerPixel; int depth; } ;


 int FUNC_0 (int ,int ,int) ;
 TYPE_2__* FUNC_1 (int ,int,int ) ;

vncBuffer *
FUNC_2(vncBuffer * VAR_0)
{
 vncBuffer *VAR_1 = FUNC_1(VAR_0->w, VAR_0->h, VAR_0->format->depth);
 FUNC_0(VAR_1->data, VAR_0->data, VAR_0->linew * VAR_0->h * VAR_0->format->bitsPerPixel / 8);
 return VAR_1;
}
