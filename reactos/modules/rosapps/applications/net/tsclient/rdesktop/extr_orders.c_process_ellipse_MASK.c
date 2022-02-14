
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int fgcolour; scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; scalar_t__ fillmode; scalar_t__ opcode; } ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef TYPE_1__ ELLIPSE_ORDER ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,scalar_t__*,int ) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_5(RDPCLIENT * VAR_0, STREAM VAR_1, ELLIPSE_ORDER * VAR_2, uint32 VAR_3, BOOL VAR_4)
{
 if (VAR_3 & 0x01)
  FUNC_3(VAR_1, &VAR_2->left, VAR_4);

 if (VAR_3 & 0x02)
  FUNC_3(VAR_1, &VAR_2->top, VAR_4);

 if (VAR_3 & 0x04)
  FUNC_3(VAR_1, &VAR_2->right, VAR_4);

 if (VAR_3 & 0x08)
  FUNC_3(VAR_1, &VAR_2->bottom, VAR_4);

 if (VAR_3 & 0x10)
  FUNC_1(VAR_1, VAR_2->opcode);

 if (VAR_3 & 0x20)
  FUNC_1(VAR_1, VAR_2->fillmode);

 if (VAR_3 & 0x40)
  FUNC_2(VAR_1, &VAR_2->fgcolour);

 FUNC_0(("ELLIPSE(l=%d,t=%d,r=%d,b=%d,op=0x%x,fm=%d,fg=0x%x)\n", VAR_2->left, VAR_2->top,
        VAR_2->right, VAR_2->bottom, VAR_2->opcode, VAR_2->fillmode, VAR_2->fgcolour));





 FUNC_4(VAR_0, VAR_2->opcode, VAR_2->fillmode, VAR_2->left, VAR_2->top, VAR_2->right - VAR_2->left,
     VAR_2->bottom - VAR_2->top, ((void*)0), 0, VAR_2->fgcolour);

}
