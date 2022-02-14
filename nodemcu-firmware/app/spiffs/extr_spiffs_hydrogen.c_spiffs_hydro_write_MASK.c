
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ u32_t ;
struct TYPE_5__ {scalar_t__ size; } ;
typedef TYPE_1__ spiffs_fd ;
typedef int spiffs ;
typedef scalar_t__ s32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static s32_t FUNC_4(spiffs *VAR_2, spiffs_fd *VAR_3, void *VAR_4, u32_t VAR_5, s32_t VAR_6) {
  (void)VAR_2;
  s32_t VAR_7 = VAR_0;
  s32_t VAR_8 = VAR_6;
  if (VAR_3->size != VAR_1 && VAR_5 < VAR_3->size) {
    s32_t VAR_9 = FUNC_0((s32_t)(VAR_3->size - VAR_5), VAR_6);
    VAR_7 = FUNC_3(VAR_3, VAR_5, (u8_t *)VAR_4, VAR_9);
    FUNC_1(VAR_7);
    VAR_8 -= VAR_9;
    u8_t *VAR_10 = (u8_t *)VAR_4;
    VAR_10 += VAR_9;
    VAR_4 = VAR_10;
    VAR_5 += VAR_9;
  }
  if (VAR_8 > 0) {
    VAR_7 = FUNC_2(VAR_3, VAR_5, (u8_t *)VAR_4, VAR_8);
    FUNC_1(VAR_7);
  }
  return VAR_6;

}
