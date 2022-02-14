
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8_t ;
typedef int spiffs_file ;
struct TYPE_4__ {int flags; scalar_t__ size; scalar_t__ fdoffset; } ;
typedef TYPE_1__ spiffs_fd ;
typedef int spiffs ;
typedef scalar_t__ s32_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_1__**) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (TYPE_1__*,scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static s32_t FUNC_9(spiffs *VAR_4, spiffs_file VAR_5, void *VAR_6, s32_t VAR_7) {
  FUNC_0(VAR_4);
  FUNC_1(VAR_4);
  FUNC_4(VAR_4);

  spiffs_fd *VAR_8;
  s32_t VAR_9;

  VAR_5 = FUNC_3(VAR_4, VAR_5);
  VAR_9 = FUNC_6(VAR_4, VAR_5, &VAR_8);
  FUNC_2(VAR_4, VAR_9);

  if ((VAR_8->flags & VAR_2) == 0) {
    VAR_9 = VAR_1;
    FUNC_2(VAR_4, VAR_9);
  }

  if (VAR_8->size == VAR_3 && VAR_7 > 0) {

    VAR_9 = VAR_0;
    FUNC_2(VAR_4, VAR_9);
  }





  if (VAR_8->fdoffset + VAR_7 >= VAR_8->size) {

    s32_t VAR_10 = VAR_8->size - VAR_8->fdoffset;
    if (VAR_10 <= 0) {
      FUNC_2(VAR_4, VAR_0);
    }
    VAR_9 = FUNC_8(VAR_8, VAR_8->fdoffset, VAR_10, (u8_t*)VAR_6);
    if (VAR_9 == VAR_0) {
      VAR_8->fdoffset += VAR_10;
      FUNC_5(VAR_4);
      return VAR_10;
    } else {
      FUNC_2(VAR_4, VAR_9);
      VAR_7 = VAR_10;
    }
  } else {

    VAR_9 = FUNC_8(VAR_8, VAR_8->fdoffset, VAR_7, (u8_t*)VAR_6);
    FUNC_2(VAR_4, VAR_9);
  }
  VAR_8->fdoffset += VAR_7;

  FUNC_5(VAR_4);

  return VAR_7;
}
