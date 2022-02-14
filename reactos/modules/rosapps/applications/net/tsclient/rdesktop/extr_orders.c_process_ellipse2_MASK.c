
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int style; } ;
struct TYPE_5__ {int fgcolour; int bgcolour; TYPE_2__ brush; scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; scalar_t__ fillmode; scalar_t__ opcode; } ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef TYPE_1__ ELLIPSE2_ORDER ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,scalar_t__*,int ) ;
 int FUNC_4 (int ,TYPE_2__*,int) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(RDPCLIENT * VAR_0, STREAM VAR_1, ELLIPSE2_ORDER * VAR_2, uint32 VAR_3, BOOL VAR_4)
{
 if (VAR_3 & 0x0001)
  FUNC_3(VAR_1, &VAR_2->left, VAR_4);

 if (VAR_3 & 0x0002)
  FUNC_3(VAR_1, &VAR_2->top, VAR_4);

 if (VAR_3 & 0x0004)
  FUNC_3(VAR_1, &VAR_2->right, VAR_4);

 if (VAR_3 & 0x0008)
  FUNC_3(VAR_1, &VAR_2->bottom, VAR_4);

 if (VAR_3 & 0x0010)
  FUNC_1(VAR_1, VAR_2->opcode);

 if (VAR_3 & 0x0020)
  FUNC_1(VAR_1, VAR_2->fillmode);

 if (VAR_3 & 0x0040)
  FUNC_2(VAR_1, &VAR_2->bgcolour);

 if (VAR_3 & 0x0080)
  FUNC_2(VAR_1, &VAR_2->fgcolour);

 FUNC_4(VAR_1, &VAR_2->brush, VAR_3 >> 8);

 FUNC_0(("ELLIPSE2(l=%d,t=%d,r=%d,b=%d,op=0x%x,fm=%d,bs=%d,bg=0x%x,fg=0x%x)\n",
        VAR_2->left, VAR_2->top, VAR_2->right, VAR_2->bottom, VAR_2->opcode, VAR_2->fillmode, VAR_2->brush.style,
        VAR_2->bgcolour, VAR_2->fgcolour));





 FUNC_5(VAR_0, VAR_2->opcode, VAR_2->fillmode, VAR_2->left, VAR_2->top, VAR_2->right - VAR_2->left,
     VAR_2->bottom - VAR_2->top, &VAR_2->brush, VAR_2->bgcolour, VAR_2->fgcolour);

}
