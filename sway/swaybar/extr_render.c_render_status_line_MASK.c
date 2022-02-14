
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct swaybar_output {TYPE_1__* bar; } ;
struct status_line {int protocol; } ;
typedef int cairo_t ;
struct TYPE_2__ {struct status_line* status; } ;






 int FUNC_0 (int *,struct swaybar_output*,double*) ;
 int FUNC_1 (int *,struct swaybar_output*,double*) ;
 int FUNC_2 (int *,struct swaybar_output*,double*) ;

__attribute__((used)) static uint32_t FUNC_3(cairo_t *VAR_0,
  struct swaybar_output *VAR_1, double *VAR_2) {
 struct status_line *VAR_3 = VAR_1->bar->status;
 switch (VAR_3->protocol) {
 case 131:
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 case 129:
  return FUNC_2(VAR_0, VAR_1, VAR_2);
 case 130:
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 case 128:
  return 0;
 }
 return 0;
}
