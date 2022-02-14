
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ws_segsize; int ws_dir; } ;
typedef TYPE_1__ WALSegmentContext ;
struct TYPE_6__ {int ws_file; scalar_t__ ws_tli; scalar_t__ ws_off; scalar_t__ ws_segno; } ;
typedef TYPE_2__ WALOpenSegment ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,char const*) ;

void
FUNC_1(WALOpenSegment *VAR_1, WALSegmentContext *VAR_2,
       int VAR_3, const char *VAR_4)
{
 VAR_1->ws_file = -1;
 VAR_1->ws_segno = 0;
 VAR_1->ws_off = 0;
 VAR_1->ws_tli = 0;

 VAR_2->ws_segsize = VAR_3;
 if (VAR_4)
  FUNC_0(VAR_2->ws_dir, VAR_0, "%s", VAR_4);
}
