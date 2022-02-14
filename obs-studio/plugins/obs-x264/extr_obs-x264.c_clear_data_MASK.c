
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_x264 {int * extra_data; int * sei; int * context; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct obs_x264 *VAR_0)
{
 if (VAR_0->context) {
  FUNC_1(VAR_0->context);
  FUNC_0(VAR_0->sei);
  FUNC_0(VAR_0->extra_data);

  VAR_0->context = ((void*)0);
  VAR_0->sei = ((void*)0);
  VAR_0->extra_data = ((void*)0);
 }
}
