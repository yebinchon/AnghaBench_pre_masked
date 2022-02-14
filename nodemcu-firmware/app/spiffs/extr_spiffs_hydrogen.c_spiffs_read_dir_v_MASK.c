
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
struct spiffs_dirent {int obj_id; scalar_t__ size; int meta; int pix; int type; scalar_t__ name; } ;
struct TYPE_3__ {scalar_t__ span_ix; int flags; } ;
struct TYPE_4__ {scalar_t__ size; int meta; int type; scalar_t__ name; TYPE_1__ p_hdr; } ;
typedef TYPE_2__ spiffs_page_object_ix_header ;
typedef int spiffs_page_ix ;
typedef int spiffs_obj_id ;
typedef int spiffs_block_ix ;
typedef int spiffs ;
typedef scalar_t__ s32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int,int ,int ,int,int *) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static s32_t FUNC_5(
    spiffs *VAR_12,
    spiffs_obj_id VAR_13,
    spiffs_block_ix VAR_14,
    int VAR_15,
    const void *VAR_16,
    void *VAR_17) {
  (void)VAR_16;
  s32_t VAR_18;
  spiffs_page_object_ix_header VAR_19;
  if (VAR_13 == VAR_1 || VAR_13 == VAR_0 ||
      (VAR_13 & VAR_2) == 0) {
    return VAR_11;
  }

  spiffs_page_ix VAR_20 = FUNC_0(VAR_12, VAR_14, VAR_15);
  VAR_18 = FUNC_3(VAR_12, VAR_6 | VAR_5,
      0, FUNC_1(VAR_12, VAR_20), sizeof(spiffs_page_object_ix_header), (u8_t *)&VAR_19);
  if (VAR_18 != VAR_4) return VAR_18;
  if ((VAR_13 & VAR_2) &&
      VAR_19.p_hdr.span_ix == 0 &&
      (VAR_19.p_hdr.flags & (VAR_7 | VAR_8 | VAR_9)) ==
          (VAR_7 | VAR_9)) {
    struct spiffs_dirent *VAR_21 = (struct spiffs_dirent*)VAR_17;
    VAR_21->obj_id = VAR_13;
    FUNC_4((char *)VAR_21->name, (char *)VAR_19.name);
    VAR_21->type = VAR_19.type;
    VAR_21->size = VAR_19.size == VAR_10 ? 0 : VAR_19.size;
    VAR_21->pix = VAR_20;



    return VAR_4;
  }
  return VAR_11;
}
