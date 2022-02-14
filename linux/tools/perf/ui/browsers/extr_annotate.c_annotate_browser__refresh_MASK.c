
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ui_browser {scalar_t__ rows; } ;
struct annotation {TYPE_1__* options; } ;
struct TYPE_2__ {scalar_t__ jump_arrows; } ;


 int VAR_0 ;
 int FUNC_0 (struct ui_browser*,int,int ,scalar_t__) ;
 int FUNC_1 (struct ui_browser*) ;
 int FUNC_2 (struct annotation*) ;
 struct annotation* FUNC_3 (struct ui_browser*) ;
 int FUNC_4 (struct ui_browser*) ;
 int FUNC_5 (struct ui_browser*,int ) ;

__attribute__((used)) static unsigned int FUNC_6(struct ui_browser *VAR_1)
{
 struct annotation *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = FUNC_4(VAR_1);
 int VAR_4 = FUNC_2(VAR_2);

 if (VAR_2->options->jump_arrows)
  FUNC_1(VAR_1);

 FUNC_5(VAR_1, VAR_0);
 FUNC_0(VAR_1, VAR_4, 0, VAR_1->rows - 1);
 return VAR_3;
}
