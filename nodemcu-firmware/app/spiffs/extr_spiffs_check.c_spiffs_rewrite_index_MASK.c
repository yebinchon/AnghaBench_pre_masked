
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ spiffs_span_ix ;
typedef int spiffs_page_object_ix_header ;
typedef int spiffs_page_object_ix ;
typedef int spiffs_page_ix ;
struct TYPE_16__ {scalar_t__ span_ix; int flags; int obj_id; } ;
typedef TYPE_1__ spiffs_page_header ;
typedef int spiffs_obj_id ;
typedef int spiffs_block_ix ;
struct TYPE_17__ {int * lu_work; int free_cursor_obj_lu_entry; int free_cursor_block_ix; } ;
typedef TYPE_2__ spiffs ;
typedef int s32_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_4 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (TYPE_2__*,int,int ,scalar_t__,int,int *) ;
 int FUNC_10 (TYPE_2__*,int,int ,scalar_t__,int,int *) ;
 int FUNC_11 (TYPE_2__*,int ,int ,int *,int*) ;
 int FUNC_12 (TYPE_2__*,int ) ;

__attribute__((used)) static s32_t FUNC_13(spiffs *VAR_14, spiffs_obj_id VAR_15, spiffs_span_ix VAR_16, spiffs_page_ix VAR_17, spiffs_page_ix VAR_18) {
  s32_t VAR_19;
  spiffs_block_ix VAR_20;
  int VAR_21;
  spiffs_page_ix VAR_22;
  VAR_15 |= VAR_3;


  VAR_19 = FUNC_11(VAR_14, VAR_14->free_cursor_block_ix, VAR_14->free_cursor_obj_lu_entry, &VAR_20, &VAR_21);
  FUNC_3(VAR_19);
  VAR_22 = FUNC_7(VAR_14, VAR_20, VAR_21);


  spiffs_span_ix VAR_23 = FUNC_5(VAR_14, VAR_16);
  if (VAR_23 == 0) {

    VAR_21 = VAR_16;
  } else {

    VAR_21 = FUNC_4(VAR_14, VAR_16);

  }

  VAR_19 = FUNC_9(VAR_14, VAR_8 | VAR_4,
      0, FUNC_8(VAR_14, VAR_18), FUNC_2(VAR_14), VAR_14->lu_work);
  FUNC_3(VAR_19);
  spiffs_page_header *VAR_24 = (spiffs_page_header *)VAR_14->lu_work;


  if (VAR_24->obj_id != VAR_15) {
    FUNC_12(VAR_14, VAR_22);
    return VAR_1;
  }
  if (VAR_24->span_ix != VAR_23) {
    FUNC_12(VAR_14, VAR_22);
    return VAR_2;
  }
  if ((VAR_24->flags & (VAR_13 | VAR_12 | VAR_11 |
                            VAR_10 | VAR_9)) !=
                                (VAR_12 | VAR_9)) {
    FUNC_12(VAR_14, VAR_22);
    return VAR_0;
  }


  if (VAR_23 == 0) {
    ((spiffs_page_ix*)((u8_t *)VAR_14->lu_work + sizeof(spiffs_page_object_ix_header)))[VAR_16] = VAR_17;
  } else {
    ((spiffs_page_ix*)((u8_t *)VAR_14->lu_work + sizeof(spiffs_page_object_ix)))[FUNC_4(VAR_14, VAR_16)] = VAR_17;
  }

  VAR_19 = FUNC_10(VAR_14, VAR_6 | VAR_5,
      0, FUNC_8(VAR_14, VAR_22), FUNC_2(VAR_14), VAR_14->lu_work);
  FUNC_3(VAR_19);
  VAR_19 = FUNC_10(VAR_14, VAR_7 | VAR_5,
      0, FUNC_1(VAR_14, FUNC_0(VAR_14, VAR_22)) + FUNC_6(VAR_14, VAR_22) * sizeof(spiffs_page_ix),
      sizeof(spiffs_obj_id),
      (u8_t *)&VAR_15);
  FUNC_3(VAR_19);
  VAR_19 = FUNC_12(VAR_14, VAR_18);

  return VAR_19;
}
