
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ws_off; scalar_t__ ws_segno; } ;
struct TYPE_5__ {scalar_t__ readLen; TYPE_1__ seg; } ;
typedef TYPE_2__ XLogReaderState ;



__attribute__((used)) static void
FUNC_0(XLogReaderState *VAR_0)
{
 VAR_0->seg.ws_segno = 0;
 VAR_0->seg.ws_off = 0;
 VAR_0->readLen = 0;
}
