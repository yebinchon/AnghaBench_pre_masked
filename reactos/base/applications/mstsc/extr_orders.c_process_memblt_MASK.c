
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int srcy; int srcx; int cy; int cx; int y; int x; int opcode; int cache_idx; int cache_id; int colour_table; } ;
typedef int STREAM ;
typedef int * RD_HBITMAP ;
typedef int RD_BOOL ;
typedef TYPE_1__ MEMBLT_ORDER ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_7(STREAM VAR_0, MEMBLT_ORDER * VAR_1, uint32 VAR_2, RD_BOOL VAR_3)
{
 RD_HBITMAP VAR_4;

 if (VAR_2 & 0x0001)
 {
  FUNC_4(VAR_0, VAR_1->cache_id);
  FUNC_4(VAR_0, VAR_1->colour_table);
 }

 if (VAR_2 & 0x0002)
  FUNC_5(VAR_0, &VAR_1->x, VAR_3);

 if (VAR_2 & 0x0004)
  FUNC_5(VAR_0, &VAR_1->y, VAR_3);

 if (VAR_2 & 0x0008)
  FUNC_5(VAR_0, &VAR_1->cx, VAR_3);

 if (VAR_2 & 0x0010)
  FUNC_5(VAR_0, &VAR_1->cy, VAR_3);

 if (VAR_2 & 0x0020)
  FUNC_4(VAR_0, VAR_1->opcode);

 if (VAR_2 & 0x0040)
  FUNC_5(VAR_0, &VAR_1->srcx, VAR_3);

 if (VAR_2 & 0x0080)
  FUNC_5(VAR_0, &VAR_1->srcy, VAR_3);

 if (VAR_2 & 0x0100)
  FUNC_3(VAR_0, VAR_1->cache_idx);

 FUNC_0(("MEMBLT(op=0x%x,x=%d,y=%d,cx=%d,cy=%d,id=%d,idx=%d)\n",
        VAR_1->opcode, VAR_1->x, VAR_1->y, VAR_1->cx, VAR_1->cy, VAR_1->cache_id, VAR_1->cache_idx));

 VAR_4 = FUNC_2(VAR_1->cache_id, VAR_1->cache_idx);
 if (VAR_4 == ((void*)0))
  return;

 FUNC_6(FUNC_1(VAR_1->opcode), VAR_1->x, VAR_1->y, VAR_1->cx, VAR_1->cy, VAR_4, VAR_1->srcx, VAR_1->srcy);
}
