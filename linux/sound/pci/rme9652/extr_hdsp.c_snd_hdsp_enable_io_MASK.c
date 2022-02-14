
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdsp {int max_channels; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct hdsp*,int ,int) ;
 int FUNC_2 (struct hdsp*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3 (struct hdsp *VAR_3)
{
 int VAR_4;

 if (FUNC_1 (VAR_3, 0, 100)) {
  FUNC_0(VAR_3->card->dev,
   "enable_io fifo_wait failed\n");
  return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->max_channels; ++VAR_4) {
  FUNC_2 (VAR_3, VAR_1 + (4 * VAR_4), 1);
  FUNC_2 (VAR_3, VAR_2 + (4 * VAR_4), 1);
 }

 return 0;
}
