
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hLab; int hRGB; void* RGB2Lab; void* Lab2RGB; } ;
typedef TYPE_1__* LPCARGO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 () ;
 int VAR_3 ;

__attribute__((used)) static
void FUNC_3(LPCARGO VAR_4)
{


 VAR_4 -> hLab = FUNC_0(((void*)0));
 VAR_4 -> hRGB = FUNC_2();

 VAR_4->Lab2RGB = FUNC_1(VAR_4->hLab, VAR_1,
             VAR_4 ->hRGB, VAR_2,
          VAR_0,
          VAR_3);

 VAR_4->RGB2Lab = FUNC_1(VAR_4 ->hRGB, VAR_2,
          VAR_4 ->hLab, VAR_1,
          VAR_0,
          VAR_3);
}
