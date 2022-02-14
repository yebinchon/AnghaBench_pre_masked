
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8_t ;
struct TYPE_8__ {scalar_t__ span_ix; int flags; } ;
struct TYPE_9__ {scalar_t__ name; TYPE_1__ p_hdr; } ;
typedef TYPE_2__ spiffs_page_object_ix_header ;
typedef scalar_t__ spiffs_obj_id ;
struct TYPE_10__ {scalar_t__ min_obj_id; scalar_t__ max_obj_id; scalar_t__ compaction; scalar_t__ conflicting_name; } ;
typedef TYPE_3__ spiffs_free_obj_id_state ;
typedef int spiffs_block_ix ;
struct TYPE_11__ {scalar_t__ work; } ;
typedef TYPE_4__ spiffs ;
typedef scalar_t__ s32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int,int ,int ,int,int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static s32_t FUNC_3(spiffs *VAR_11, spiffs_obj_id VAR_12, spiffs_block_ix VAR_13, int VAR_14,
    const void *VAR_15, void *VAR_16) {
  (void)VAR_16;
  if (VAR_12 != VAR_2 && VAR_12 != VAR_1 && (VAR_12 & VAR_3)) {
    s32_t VAR_17;
    const spiffs_free_obj_id_state *VAR_18 = (const spiffs_free_obj_id_state*)VAR_15;
    spiffs_page_object_ix_header VAR_19;

    VAR_17 = FUNC_1(VAR_11, VAR_6 | VAR_5,
        0, FUNC_0(VAR_11, VAR_13, VAR_14), sizeof(spiffs_page_object_ix_header), (u8_t*)&VAR_19);
    if (VAR_17 == VAR_4 && VAR_19.p_hdr.span_ix == 0 &&
        ((VAR_19.p_hdr.flags & (VAR_9 | VAR_8 | VAR_7)) ==
            (VAR_7))) {

      if (VAR_18->conflicting_name && FUNC_2((const char *)VAR_18->conflicting_name, (char *)VAR_19.name) == 0) {
        return VAR_0;
      }

      VAR_12 &= ~VAR_3;
      if (VAR_12 >= VAR_18->min_obj_id && VAR_12 <= VAR_18->max_obj_id) {
        u8_t *VAR_20 = (u8_t *)VAR_11->work;
        int VAR_21 = (VAR_12 - VAR_18->min_obj_id) / VAR_18->compaction;

        VAR_20[VAR_21]++;
      }
    }
  }
  return VAR_10;
}
