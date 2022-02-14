
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int left; int top; int right; int bottom; scalar_t__ action; int offset; } ;
typedef int STREAM ;
typedef int RDPCLIENT ;
typedef TYPE_1__ DESKSAVE_ORDER ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int*,int ) ;
 int FUNC_4 (int *,int ,int,int,int,int) ;
 int FUNC_5 (int *,int ,int,int,int,int) ;

__attribute__((used)) static void
FUNC_6(RDPCLIENT * VAR_0, STREAM VAR_1, DESKSAVE_ORDER * VAR_2, uint32 VAR_3, BOOL VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_3 & 0x01)
  FUNC_1(VAR_1, VAR_2->offset);

 if (VAR_3 & 0x02)
  FUNC_3(VAR_1, &VAR_2->left, VAR_4);

 if (VAR_3 & 0x04)
  FUNC_3(VAR_1, &VAR_2->top, VAR_4);

 if (VAR_3 & 0x08)
  FUNC_3(VAR_1, &VAR_2->right, VAR_4);

 if (VAR_3 & 0x10)
  FUNC_3(VAR_1, &VAR_2->bottom, VAR_4);

 if (VAR_3 & 0x20)
  FUNC_2(VAR_1, VAR_2->action);

 FUNC_0(("DESKSAVE(l=%d,t=%d,r=%d,b=%d,off=%d,op=%d)\n",
        VAR_2->left, VAR_2->top, VAR_2->right, VAR_2->bottom, VAR_2->offset, VAR_2->action));

 VAR_5 = VAR_2->right - VAR_2->left + 1;
 VAR_6 = VAR_2->bottom - VAR_2->top + 1;

 if (VAR_2->action == 0)
  FUNC_5(VAR_0, VAR_2->offset, VAR_2->left, VAR_2->top, VAR_5, VAR_6);
 else
  FUNC_4(VAR_0, VAR_2->offset, VAR_2->left, VAR_2->top, VAR_5, VAR_6);
}
