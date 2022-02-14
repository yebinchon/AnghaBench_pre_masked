
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ u32_t ;
struct TYPE_15__ {int span_ix; } ;
struct TYPE_12__ {scalar_t__ size; TYPE_9__ p_hdr; int meta; scalar_t__ name; } ;
typedef TYPE_1__ spiffs_page_object_ix_header ;
typedef int spiffs_page_object_ix ;
typedef int spiffs_page_ix ;
typedef int spiffs_obj_id ;
struct TYPE_13__ {int objix_hdr_pix; int file_nbr; } ;
typedef TYPE_2__ spiffs_fd ;
struct TYPE_14__ {scalar_t__ work; } ;
typedef TYPE_3__ spiffs ;
typedef scalar_t__ s32_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_9__,int ,int ) ;
 int FUNC_4 (int ,int const*,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int,int ,int ,int ,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,int *,int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ,int *,int ,int ,int ,int *) ;
 int FUNC_8 (char*,char const*,int ) ;

s32_t FUNC_9(
    spiffs *VAR_8,
    spiffs_fd *VAR_9,
    spiffs_obj_id VAR_10,
    spiffs_page_ix VAR_11,
    u8_t *VAR_12,
    const u8_t VAR_13[],
    const u8_t VAR_14[],
    u32_t VAR_15,
    spiffs_page_ix *VAR_16) {
  s32_t VAR_17 = VAR_5;
  spiffs_page_object_ix_header *VAR_18;
  spiffs_page_ix VAR_19;

  VAR_10 |= VAR_2;

  if (VAR_12) {

    VAR_18 = (spiffs_page_object_ix_header *)VAR_12;
  } else {

    VAR_17 = FUNC_5(VAR_8, VAR_7 | VAR_6,
        VAR_9->file_nbr, FUNC_2(VAR_8, VAR_11), FUNC_0(VAR_8), VAR_8->work);
    FUNC_1(VAR_17);
    VAR_18 = (spiffs_page_object_ix_header *)VAR_8->work;
  }

  FUNC_3(VAR_18->p_hdr, VAR_10, 0);


  if (VAR_13) {
    FUNC_8((char*)VAR_18->name, (const char*)VAR_13, VAR_4);
  }





  (void) VAR_14;

  if (VAR_15) {
    VAR_18->size = VAR_15;
  }


  VAR_17 = FUNC_7(VAR_8, VAR_9 == 0 ? 0 : VAR_9->file_nbr, (u8_t*)VAR_18, VAR_10, 0, VAR_11, &VAR_19);

  if (VAR_17 == VAR_5) {
    if (VAR_16) {
      *VAR_16 = VAR_19;
    }

    FUNC_6(VAR_8, (spiffs_page_object_ix *)VAR_18,
        VAR_12 ? VAR_0 : VAR_1,
            VAR_10, VAR_18->p_hdr.span_ix, VAR_19, VAR_18->size);
    if (VAR_9) VAR_9->objix_hdr_pix = VAR_19;
  }

  return VAR_17;
}
