
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct echoaudio {short asic_code; TYPE_1__* comm_page; } ;
typedef int s8 ;
struct TYPE_2__ {int monitors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct echoaudio*,int ,short) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_6, short VAR_7)
{
 s8 *VAR_8;


 if (VAR_7 != VAR_6->asic_code) {
  VAR_8 = FUNC_1(VAR_6->comm_page->monitors,
     VAR_5, VAR_4);
  if (! VAR_8)
   return -VAR_3;

  FUNC_4(VAR_6->comm_page->monitors, VAR_1,
         VAR_5);


  if (FUNC_2(VAR_6, VAR_0,
          VAR_7) < 0) {
   FUNC_3(VAR_6->comm_page->monitors, VAR_8,
          VAR_5);
   FUNC_0(VAR_8);
   return -VAR_2;
  }
  VAR_6->asic_code = VAR_7;
  FUNC_3(VAR_6->comm_page->monitors, VAR_8, VAR_5);
  FUNC_0(VAR_8);
 }

 return 0;
}
