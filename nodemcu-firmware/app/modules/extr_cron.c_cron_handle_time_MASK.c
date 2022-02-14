
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct cronent_desc {int mon; int dom; int dow; int hour; int min; } ;
typedef int lua_State ;
struct TYPE_4__ {int mon; int dom; int dow; int hour; int min; } ;
struct TYPE_5__ {int cb_ref; TYPE_1__ desc; } ;
typedef TYPE_2__ cronent_ud_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int ) ;
 TYPE_2__* FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(uint8_t VAR_3, uint8_t VAR_4, uint8_t VAR_5, uint8_t VAR_6, uint8_t VAR_7) {
  lua_State *VAR_8 = FUNC_1();
  struct cronent_desc VAR_9;
  VAR_9.mon = (uint16_t)1 << (VAR_3 - 1);
  VAR_9.dom = (uint32_t)1 << (VAR_4 - 1);
  VAR_9.dow = ( uint8_t)1 << VAR_5;
  VAR_9.hour = (uint32_t)1 << VAR_6;
  VAR_9.min = (uint64_t)1 << VAR_7;
  for (size_t VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
    FUNC_3(VAR_8, VAR_0, VAR_2[VAR_10]);
    cronent_ud_t *VAR_11 = FUNC_4(VAR_8, -1);
    FUNC_2(VAR_8, 1);
    if ((VAR_11->desc.mon & VAR_9.mon ) == 0) continue;
    if ((VAR_11->desc.dom & VAR_9.dom ) == 0) continue;
    if ((VAR_11->desc.dow & VAR_9.dow ) == 0) continue;
    if ((VAR_11->desc.hour & VAR_9.hour) == 0) continue;
    if ((VAR_11->desc.min & VAR_9.min ) == 0) continue;
    FUNC_3(VAR_8, VAR_0, VAR_11->cb_ref);
    FUNC_3(VAR_8, VAR_0, VAR_2[VAR_10]);
    FUNC_0(VAR_8, 1, 0);
  }
}
