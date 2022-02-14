
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct echoaudio {TYPE_2__* card; TYPE_1__* comm_page; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ handshake; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct echoaudio *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {

  FUNC_0();
  if (VAR_2->comm_page->handshake) {
   return 0;
  }
  FUNC_2(1);
 }

 FUNC_1(VAR_2->card->dev, "wait_handshake(): Timeout waiting for DSP\n");
 return -VAR_0;
}
