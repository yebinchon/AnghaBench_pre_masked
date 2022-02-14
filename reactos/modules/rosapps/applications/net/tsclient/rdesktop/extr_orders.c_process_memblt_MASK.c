
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int srcy; int srcx; int cy; int cx; int y; int x; int opcode; int cache_idx; int cache_id; int colour_table; } ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef TYPE_1__ MEMBLT_ORDER ;
typedef int * HBITMAP ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *,int ,int ,int ,int ,int ,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_7(RDPCLIENT * VAR_0, STREAM VAR_1, MEMBLT_ORDER * VAR_2, uint32 VAR_3, BOOL VAR_4)
{
 HBITMAP VAR_5;

 if (VAR_3 & 0x0001)
 {
  FUNC_4(VAR_1, VAR_2->cache_id);
  FUNC_4(VAR_1, VAR_2->colour_table);
 }

 if (VAR_3 & 0x0002)
  FUNC_5(VAR_1, &VAR_2->x, VAR_4);

 if (VAR_3 & 0x0004)
  FUNC_5(VAR_1, &VAR_2->y, VAR_4);

 if (VAR_3 & 0x0008)
  FUNC_5(VAR_1, &VAR_2->cx, VAR_4);

 if (VAR_3 & 0x0010)
  FUNC_5(VAR_1, &VAR_2->cy, VAR_4);

 if (VAR_3 & 0x0020)
  FUNC_4(VAR_1, VAR_2->opcode);

 if (VAR_3 & 0x0040)
  FUNC_5(VAR_1, &VAR_2->srcx, VAR_4);

 if (VAR_3 & 0x0080)
  FUNC_5(VAR_1, &VAR_2->srcy, VAR_4);

 if (VAR_3 & 0x0100)
  FUNC_3(VAR_1, VAR_2->cache_idx);

 FUNC_0(("MEMBLT(op=0x%x,x=%d,y=%d,cx=%d,cy=%d,id=%d,idx=%d)\n",
        VAR_2->opcode, VAR_2->x, VAR_2->y, VAR_2->cx, VAR_2->cy, VAR_2->cache_id, VAR_2->cache_idx));

 VAR_5 = FUNC_2(VAR_0, VAR_2->cache_id, VAR_2->cache_idx);
 if (VAR_5 == ((void*)0))
  return;




 FUNC_6(VAR_0, VAR_2->opcode, VAR_2->x, VAR_2->y, VAR_2->cx, VAR_2->cy, VAR_5, VAR_2->srcx, VAR_2->srcy);

}
