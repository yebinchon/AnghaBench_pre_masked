
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
typedef int spiffs_span_ix ;
typedef int spiffs_page_ix ;
typedef int spiffs_page_header ;
struct TYPE_3__ {int obj_id; int file_nbr; } ;
typedef TYPE_1__ spiffs_fd ;
typedef int spiffs ;
typedef int s32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int *,int,int ,int ,int,int *) ;

__attribute__((used)) static s32_t FUNC_7(spiffs *VAR_7, spiffs_fd *VAR_8, spiffs_page_ix VAR_9, spiffs_span_ix VAR_10) {
  s32_t VAR_11 = VAR_4;
  if (VAR_9 == (spiffs_page_ix)-1) {

    return VAR_0;
  }
  if (VAR_9 % FUNC_3(VAR_7) < FUNC_2(VAR_7)) {

    return VAR_2;
  }
  if (VAR_9 > FUNC_1(VAR_7)) {

    return VAR_1;
  }
  return VAR_11;
}
