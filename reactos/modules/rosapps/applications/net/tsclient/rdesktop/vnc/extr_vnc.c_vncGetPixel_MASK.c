
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vncPixel ;
struct TYPE_5__ {int linew; scalar_t__ data; TYPE_1__* format; } ;
typedef TYPE_2__ vncBuffer ;
typedef int uint8_t ;
struct TYPE_4__ {int bitsPerPixel; } ;



vncPixel
FUNC_0(vncBuffer * VAR_0, int VAR_1, int VAR_2)
{
 unsigned long VAR_3 = (VAR_1 + (VAR_2 * (VAR_0->linew))) * (VAR_0->format->bitsPerPixel >> 3);
 return ((uint8_t *) (VAR_0->data))[VAR_3];
}
