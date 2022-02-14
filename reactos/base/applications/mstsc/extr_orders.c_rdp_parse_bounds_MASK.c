
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int bottom; int right; int top; int left; } ;
typedef int STREAM ;
typedef int RD_BOOL ;
typedef TYPE_1__ BOUNDS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static RD_BOOL
FUNC_3(STREAM VAR_2, BOUNDS * VAR_3)
{
 uint8 VAR_4;

 FUNC_0(VAR_2, VAR_4);

 if (VAR_4 & 1)
  FUNC_1(VAR_2, &VAR_3->left, VAR_0);
 else if (VAR_4 & 16)
  FUNC_1(VAR_2, &VAR_3->left, VAR_1);

 if (VAR_4 & 2)
  FUNC_1(VAR_2, &VAR_3->top, VAR_0);
 else if (VAR_4 & 32)
  FUNC_1(VAR_2, &VAR_3->top, VAR_1);

 if (VAR_4 & 4)
  FUNC_1(VAR_2, &VAR_3->right, VAR_0);
 else if (VAR_4 & 64)
  FUNC_1(VAR_2, &VAR_3->right, VAR_1);

 if (VAR_4 & 8)
  FUNC_1(VAR_2, &VAR_3->bottom, VAR_0);
 else if (VAR_4 & 128)
  FUNC_1(VAR_2, &VAR_3->bottom, VAR_1);

 return FUNC_2(VAR_2);
}
