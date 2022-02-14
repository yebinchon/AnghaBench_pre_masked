
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int style; } ;
struct TYPE_5__ {int fgcolour; int bgcolour; TYPE_2__ brush; int srcy; int srcx; int cy; int cx; int y; int x; int opcode; int cache_idx; int cache_id; int unknown; int colour_table; } ;
typedef TYPE_1__ TRIBLT_ORDER ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef int * HBITMAP ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,TYPE_2__*,int) ;
 int FUNC_7 (int *,int ,int ,int ,int ,int ,int *,int ,int ,TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_8(RDPCLIENT * VAR_0, STREAM VAR_1, TRIBLT_ORDER * VAR_2, uint32 VAR_3, BOOL VAR_4)
{
 HBITMAP VAR_5;

 if (VAR_3 & 0x000001)
 {
  FUNC_3(VAR_1, VAR_2->cache_id);
  FUNC_3(VAR_1, VAR_2->colour_table);
 }

 if (VAR_3 & 0x000002)
  FUNC_5(VAR_1, &VAR_2->x, VAR_4);

 if (VAR_3 & 0x000004)
  FUNC_5(VAR_1, &VAR_2->y, VAR_4);

 if (VAR_3 & 0x000008)
  FUNC_5(VAR_1, &VAR_2->cx, VAR_4);

 if (VAR_3 & 0x000010)
  FUNC_5(VAR_1, &VAR_2->cy, VAR_4);

 if (VAR_3 & 0x000020)
  FUNC_3(VAR_1, VAR_2->opcode);

 if (VAR_3 & 0x000040)
  FUNC_5(VAR_1, &VAR_2->srcx, VAR_4);

 if (VAR_3 & 0x000080)
  FUNC_5(VAR_1, &VAR_2->srcy, VAR_4);

 if (VAR_3 & 0x000100)
  FUNC_4(VAR_1, &VAR_2->bgcolour);

 if (VAR_3 & 0x000200)
  FUNC_4(VAR_1, &VAR_2->fgcolour);

 FUNC_6(VAR_1, &VAR_2->brush, VAR_3 >> 10);

 if (VAR_3 & 0x008000)
  FUNC_2(VAR_1, VAR_2->cache_idx);

 if (VAR_3 & 0x010000)
  FUNC_2(VAR_1, VAR_2->unknown);

 FUNC_0(("TRIBLT(op=0x%x,x=%d,y=%d,cx=%d,cy=%d,id=%d,idx=%d,bs=%d,bg=0x%x,fg=0x%x)\n",
        VAR_2->opcode, VAR_2->x, VAR_2->y, VAR_2->cx, VAR_2->cy, VAR_2->cache_id, VAR_2->cache_idx,
        VAR_2->brush.style, VAR_2->bgcolour, VAR_2->fgcolour));

 VAR_5 = FUNC_1(VAR_0, VAR_2->cache_id, VAR_2->cache_idx);
 if (VAR_5 == ((void*)0))
  return;

 FUNC_7(VAR_0, VAR_2->opcode, VAR_2->x, VAR_2->y, VAR_2->cx, VAR_2->cy,
    VAR_5, VAR_2->srcx, VAR_2->srcy, &VAR_2->brush, VAR_2->bgcolour, VAR_2->fgcolour);
}
