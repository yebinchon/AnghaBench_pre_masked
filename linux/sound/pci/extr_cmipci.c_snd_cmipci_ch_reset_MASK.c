
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmipci {int ctrl; TYPE_1__* channel; } ;
struct TYPE_2__ {int ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmipci*,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct cmipci *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1 << (VAR_2->channel[VAR_3].ch);
 FUNC_0(VAR_2, VAR_0, VAR_2->ctrl | VAR_4);
 FUNC_0(VAR_2, VAR_0, VAR_2->ctrl & ~VAR_4);
 FUNC_1(10);
}
