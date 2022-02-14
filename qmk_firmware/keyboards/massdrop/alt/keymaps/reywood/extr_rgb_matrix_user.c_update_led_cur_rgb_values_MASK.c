
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** b; void** g; void** r; } ;
struct TYPE_4__ {scalar_t__ scan; TYPE_1__ rgb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_0 (int ,int ) ;
 TYPE_2__* VAR_10 ;

__attribute__((used)) static void FUNC_1(void) {
  if (VAR_10->scan == VAR_9) {
    *VAR_10->rgb.r = VAR_8;
    *VAR_10->rgb.g = VAR_7;
    *VAR_10->rgb.b = VAR_6;
  } else {
    *VAR_10->rgb.r = FUNC_0(VAR_2, VAR_5);
    *VAR_10->rgb.g = FUNC_0(VAR_1, VAR_4);
    *VAR_10->rgb.b = FUNC_0(VAR_0, VAR_3);
  }
}
