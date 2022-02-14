
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ used; } ;
typedef TYPE_1__ vbuf ;
typedef int byte ;
typedef int adns_status ;
typedef TYPE_2__* adns_state ;
struct TYPE_9__ {int nextid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static adns_status FUNC_5(adns_state VAR_3, vbuf *VAR_4, int *VAR_5, int VAR_6) {
  int VAR_7;
  byte *VAR_8;

  if (!FUNC_4(VAR_4,VAR_0+VAR_6+4)) return VAR_1;

  VAR_4->used= 0;
  FUNC_2(VAR_4);

  *VAR_5= VAR_7= (VAR_3->nextid++) & 0x0ffff;
  FUNC_1(VAR_7);
  FUNC_0(0x01);
  FUNC_0(0x00);
  FUNC_1(1);
  FUNC_1(0);
  FUNC_1(0);
  FUNC_1(0);

  FUNC_3(VAR_4);

  return VAR_2;
}
