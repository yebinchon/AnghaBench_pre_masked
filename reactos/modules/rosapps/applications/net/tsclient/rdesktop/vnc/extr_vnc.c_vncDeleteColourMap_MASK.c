
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bytes; } ;
struct TYPE_5__ {scalar_t__ count; TYPE_1__ data; } ;
typedef TYPE_2__ rfbColourMap ;


 int FUNC_0 (scalar_t__) ;

void
FUNC_1(rfbColourMap * VAR_0)
{
 if (VAR_0->data.bytes)
  FUNC_0(VAR_0->data.bytes);
 VAR_0->count = 0;
}
