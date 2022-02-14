
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int * pattern; int style; int yorigin; int xorigin; } ;
typedef int STREAM ;
typedef TYPE_1__ BRUSH ;
typedef int BOOL ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static BOOL
FUNC_3(STREAM VAR_0, BRUSH * VAR_1, uint32 VAR_2)
{
 if (VAR_2 & 1)
  FUNC_0(VAR_0, VAR_1->xorigin);

 if (VAR_2 & 2)
  FUNC_0(VAR_0, VAR_1->yorigin);

 if (VAR_2 & 4)
  FUNC_0(VAR_0, VAR_1->style);

 if (VAR_2 & 8)
  FUNC_0(VAR_0, VAR_1->pattern[0]);

 if (VAR_2 & 16)
  FUNC_1(VAR_0, &VAR_1->pattern[1], 7);

 return FUNC_2(VAR_0);
}
