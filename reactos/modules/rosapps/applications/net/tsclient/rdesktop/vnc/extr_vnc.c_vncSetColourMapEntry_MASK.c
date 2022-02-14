
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* vncPixel ;
struct TYPE_4__ {void** bytes; } ;
struct TYPE_5__ {int count; TYPE_1__ data; } ;
typedef TYPE_2__ rfbColourMap ;



void
FUNC_0(rfbColourMap * VAR_0, int VAR_1, vncPixel VAR_2, vncPixel VAR_3, vncPixel VAR_4)
{
 if (VAR_1 < VAR_0->count)
 {
  VAR_0->data.bytes[3 * VAR_1 + 0] = VAR_2;
  VAR_0->data.bytes[3 * VAR_1 + 1] = VAR_3;
  VAR_0->data.bytes[3 * VAR_1 + 2] = VAR_4;
 }
}
