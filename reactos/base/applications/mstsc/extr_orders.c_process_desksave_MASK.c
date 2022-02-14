
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int left; int top; int right; int bottom; scalar_t__ action; int offset; } ;
typedef int STREAM ;
typedef int RD_BOOL ;
typedef TYPE_1__ DESKSAVE_ORDER ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int*,int ) ;
 int FUNC_4 (int ,int,int,int,int) ;
 int FUNC_5 (int ,int,int,int,int) ;

__attribute__((used)) static void
FUNC_6(STREAM VAR_0, DESKSAVE_ORDER * VAR_1, uint32 VAR_2, RD_BOOL VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_2 & 0x01)
  FUNC_1(VAR_0, VAR_1->offset);

 if (VAR_2 & 0x02)
  FUNC_3(VAR_0, &VAR_1->left, VAR_3);

 if (VAR_2 & 0x04)
  FUNC_3(VAR_0, &VAR_1->top, VAR_3);

 if (VAR_2 & 0x08)
  FUNC_3(VAR_0, &VAR_1->right, VAR_3);

 if (VAR_2 & 0x10)
  FUNC_3(VAR_0, &VAR_1->bottom, VAR_3);

 if (VAR_2 & 0x20)
  FUNC_2(VAR_0, VAR_1->action);

 FUNC_0(("DESKSAVE(l=%d,t=%d,r=%d,b=%d,off=%d,op=%d)\n",
        VAR_1->left, VAR_1->top, VAR_1->right, VAR_1->bottom, VAR_1->offset, VAR_1->action));

 VAR_4 = VAR_1->right - VAR_1->left + 1;
 VAR_5 = VAR_1->bottom - VAR_1->top + 1;

 if (VAR_1->action == 0)
  FUNC_5(VAR_1->offset, VAR_1->left, VAR_1->top, VAR_4, VAR_5);
 else
  FUNC_4(VAR_1->offset, VAR_1->left, VAR_1->top, VAR_4, VAR_5);
}
