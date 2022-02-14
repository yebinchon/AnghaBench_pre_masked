
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {char phantom_power; TYPE_1__* comm_page; } ;
struct TYPE_2__ {int e3g_frq_register; int control_register; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct echoaudio*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct echoaudio *VAR_1, char VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1->comm_page->control_register);

 if (VAR_2)
  VAR_3 |= VAR_0;
 else
  VAR_3 &= ~VAR_0;

 VAR_1->phantom_power = VAR_2;
 return FUNC_1(VAR_1, VAR_3,
     FUNC_0(VAR_1->comm_page->e3g_frq_register),
     0);
}
