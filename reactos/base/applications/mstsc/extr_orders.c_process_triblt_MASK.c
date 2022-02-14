
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int style; } ;
struct TYPE_5__ {int fgcolour; int bgcolour; int srcy; int srcx; int cy; int cx; int y; int x; int opcode; TYPE_2__ brush; int cache_idx; int cache_id; int unknown; int colour_table; } ;
typedef TYPE_1__ TRIBLT_ORDER ;
typedef int STREAM ;
typedef int * RD_HBITMAP ;
typedef int RD_BOOL ;
typedef int BRUSH ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,TYPE_2__*,int) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int *,int ,int ,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_9(STREAM VAR_0, TRIBLT_ORDER * VAR_1, uint32 VAR_2, RD_BOOL VAR_3)
{
 RD_HBITMAP VAR_4;
 BRUSH VAR_5;

 if (VAR_2 & 0x000001)
 {
  FUNC_3(VAR_0, VAR_1->cache_id);
  FUNC_3(VAR_0, VAR_1->colour_table);
 }

 if (VAR_2 & 0x000002)
  FUNC_5(VAR_0, &VAR_1->x, VAR_3);

 if (VAR_2 & 0x000004)
  FUNC_5(VAR_0, &VAR_1->y, VAR_3);

 if (VAR_2 & 0x000008)
  FUNC_5(VAR_0, &VAR_1->cx, VAR_3);

 if (VAR_2 & 0x000010)
  FUNC_5(VAR_0, &VAR_1->cy, VAR_3);

 if (VAR_2 & 0x000020)
  FUNC_3(VAR_0, VAR_1->opcode);

 if (VAR_2 & 0x000040)
  FUNC_5(VAR_0, &VAR_1->srcx, VAR_3);

 if (VAR_2 & 0x000080)
  FUNC_5(VAR_0, &VAR_1->srcy, VAR_3);

 if (VAR_2 & 0x000100)
  FUNC_4(VAR_0, &VAR_1->bgcolour);

 if (VAR_2 & 0x000200)
  FUNC_4(VAR_0, &VAR_1->fgcolour);

 FUNC_6(VAR_0, &VAR_1->brush, VAR_2 >> 10);

 if (VAR_2 & 0x008000)
  FUNC_2(VAR_0, VAR_1->cache_idx);

 if (VAR_2 & 0x010000)
  FUNC_2(VAR_0, VAR_1->unknown);

 FUNC_0(("TRIBLT(op=0x%x,x=%d,y=%d,cx=%d,cy=%d,id=%d,idx=%d,bs=%d,bg=0x%x,fg=0x%x)\n",
        VAR_1->opcode, VAR_1->x, VAR_1->y, VAR_1->cx, VAR_1->cy, VAR_1->cache_id, VAR_1->cache_idx,
        VAR_1->brush.style, VAR_1->bgcolour, VAR_1->fgcolour));

 VAR_4 = FUNC_1(VAR_1->cache_id, VAR_1->cache_idx);
 if (VAR_4 == ((void*)0))
  return;

 FUNC_7(&VAR_5, &VAR_1->brush);

 FUNC_8(VAR_1->opcode, VAR_1->x, VAR_1->y, VAR_1->cx, VAR_1->cy,
    VAR_4, VAR_1->srcx, VAR_1->srcy, &VAR_5, VAR_1->bgcolour, VAR_1->fgcolour);
}
