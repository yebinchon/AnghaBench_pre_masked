
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_data {int dev; int buffers; scalar_t__ thread; int event; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct v4l2_data *VAR_0)
{
 if (VAR_0->thread) {
  FUNC_1(VAR_0->event);
  FUNC_2(VAR_0->thread, ((void*)0));
  FUNC_0(VAR_0->event);
  VAR_0->thread = 0;
 }

 FUNC_4(&VAR_0->buffers);

 if (VAR_0->dev != -1) {
  FUNC_3(VAR_0->dev);
  VAR_0->dev = -1;
 }
}
