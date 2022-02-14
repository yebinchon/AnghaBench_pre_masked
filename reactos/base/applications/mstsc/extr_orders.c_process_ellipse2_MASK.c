
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int style; } ;
struct TYPE_5__ {int fgcolour; int bgcolour; scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; scalar_t__ fillmode; scalar_t__ opcode; TYPE_2__ brush; } ;
typedef int STREAM ;
typedef int RD_BOOL ;
typedef TYPE_1__ ELLIPSE2_ORDER ;
typedef int BRUSH ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,scalar_t__*,int ) ;
 int FUNC_4 (int ,TYPE_2__*,int) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_7(STREAM VAR_0, ELLIPSE2_ORDER * VAR_1, uint32 VAR_2, RD_BOOL VAR_3)
{
 BRUSH VAR_4;

 if (VAR_2 & 0x0001)
  FUNC_3(VAR_0, &VAR_1->left, VAR_3);

 if (VAR_2 & 0x0002)
  FUNC_3(VAR_0, &VAR_1->top, VAR_3);

 if (VAR_2 & 0x0004)
  FUNC_3(VAR_0, &VAR_1->right, VAR_3);

 if (VAR_2 & 0x0008)
  FUNC_3(VAR_0, &VAR_1->bottom, VAR_3);

 if (VAR_2 & 0x0010)
  FUNC_1(VAR_0, VAR_1->opcode);

 if (VAR_2 & 0x0020)
  FUNC_1(VAR_0, VAR_1->fillmode);

 if (VAR_2 & 0x0040)
  FUNC_2(VAR_0, &VAR_1->bgcolour);

 if (VAR_2 & 0x0080)
  FUNC_2(VAR_0, &VAR_1->fgcolour);

 FUNC_4(VAR_0, &VAR_1->brush, VAR_2 >> 8);

 FUNC_0(("ELLIPSE2(l=%d,t=%d,r=%d,b=%d,op=0x%x,fm=%d,bs=%d,bg=0x%x,fg=0x%x)\n",
        VAR_1->left, VAR_1->top, VAR_1->right, VAR_1->bottom, VAR_1->opcode, VAR_1->fillmode, VAR_1->brush.style,
        VAR_1->bgcolour, VAR_1->fgcolour));

 FUNC_5(&VAR_4, &VAR_1->brush);

 FUNC_6(VAR_1->opcode - 1, VAR_1->fillmode, VAR_1->left, VAR_1->top, VAR_1->right - VAR_1->left,
     VAR_1->bottom - VAR_1->top, &VAR_4, VAR_1->bgcolour, VAR_1->fgcolour);
}
