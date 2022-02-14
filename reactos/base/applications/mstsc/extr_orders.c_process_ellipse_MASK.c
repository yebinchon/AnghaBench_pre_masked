
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int fgcolour; scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; scalar_t__ fillmode; scalar_t__ opcode; } ;
typedef int STREAM ;
typedef int RD_BOOL ;
typedef TYPE_1__ ELLIPSE_ORDER ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,scalar_t__*,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_5(STREAM VAR_0, ELLIPSE_ORDER * VAR_1, uint32 VAR_2, RD_BOOL VAR_3)
{
 if (VAR_2 & 0x01)
  FUNC_3(VAR_0, &VAR_1->left, VAR_3);

 if (VAR_2 & 0x02)
  FUNC_3(VAR_0, &VAR_1->top, VAR_3);

 if (VAR_2 & 0x04)
  FUNC_3(VAR_0, &VAR_1->right, VAR_3);

 if (VAR_2 & 0x08)
  FUNC_3(VAR_0, &VAR_1->bottom, VAR_3);

 if (VAR_2 & 0x10)
  FUNC_1(VAR_0, VAR_1->opcode);

 if (VAR_2 & 0x20)
  FUNC_1(VAR_0, VAR_1->fillmode);

 if (VAR_2 & 0x40)
  FUNC_2(VAR_0, &VAR_1->fgcolour);

 FUNC_0(("ELLIPSE(l=%d,t=%d,r=%d,b=%d,op=0x%x,fm=%d,fg=0x%x)\n", VAR_1->left, VAR_1->top,
        VAR_1->right, VAR_1->bottom, VAR_1->opcode, VAR_1->fillmode, VAR_1->fgcolour));

 FUNC_4(VAR_1->opcode - 1, VAR_1->fillmode, VAR_1->left, VAR_1->top, VAR_1->right - VAR_1->left,
     VAR_1->bottom - VAR_1->top, ((void*)0), 0, VAR_1->fgcolour);
}
