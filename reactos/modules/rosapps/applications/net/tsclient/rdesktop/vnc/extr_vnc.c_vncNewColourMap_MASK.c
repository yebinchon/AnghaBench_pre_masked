
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int rfbScreenInfoPtr ;
struct TYPE_4__ {int * bytes; } ;
struct TYPE_5__ {int count; TYPE_1__ data; int is16; } ;
typedef TYPE_2__ rfbColourMap ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

rfbColourMap *
FUNC_1(rfbScreenInfoPtr VAR_1, int VAR_2)
{
 rfbColourMap *VAR_3 = (rfbColourMap *) FUNC_0(sizeof(rfbColourMap));
 VAR_3->is16 = VAR_0;
 VAR_3->count = VAR_2;
 VAR_3->data.bytes = (uint8_t *) FUNC_0(VAR_2 * 3);
 return VAR_3;
}
