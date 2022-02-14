
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int len; int pos; } ;
typedef TYPE_5__ udf_short_ad_t ;
struct TYPE_11__ {int lba; } ;
struct TYPE_15__ {int len; TYPE_2__ loc; } ;
typedef TYPE_6__ udf_long_ad_t ;
struct TYPE_12__ {int ext_attr; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_16__ {int i_extended_attr; TYPE_3__ u; TYPE_1__ icb_tag; int i_alloc_descs; } ;
typedef TYPE_7__ udf_file_entry_t ;
struct TYPE_13__ {int lba; } ;
struct TYPE_17__ {int len; TYPE_4__ ext_loc; } ;
typedef TYPE_8__ udf_ext_ad_t ;




 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

bool
FUNC_1(const udf_file_entry_t *VAR_3,
             uint32_t *VAR_4, uint32_t *VAR_5)
{
  if (! VAR_3->i_alloc_descs)
    return 0;

  switch (VAR_3->icb_tag.flags & VAR_0) {
  case 128:
    {

      udf_short_ad_t *VAR_6 = (udf_short_ad_t *)
 (VAR_3->u.ext_attr + FUNC_0(VAR_3->i_extended_attr));

      *VAR_4 = FUNC_0(VAR_6->pos);
      *VAR_5 = *VAR_4 +
 ((FUNC_0(VAR_6->len) & VAR_2) - 1) / VAR_1;
      return 1;
    }
    break;
  case 129:
    {

      udf_long_ad_t *VAR_7 = (udf_long_ad_t *)
 (VAR_3->u.ext_attr + FUNC_0(VAR_3->i_extended_attr));

      *VAR_4 = FUNC_0(VAR_7->loc.lba);
      *VAR_5 = *VAR_4 +
 ((FUNC_0(VAR_7->len) & VAR_2) - 1) / VAR_1;
      return 1;
    }
    break;
  case 130:
    {
      udf_ext_ad_t *VAR_8 = (udf_ext_ad_t *)
 (VAR_3->u.ext_attr + FUNC_0(VAR_3->i_extended_attr));

      *VAR_4 = FUNC_0(VAR_8->ext_loc.lba);
      *VAR_5 = *VAR_4 +
 ((FUNC_0(VAR_8->len) & VAR_2) - 1) / VAR_1;
      return 1;
    }
    break;
  default:
    return 0;
  }
  return 0;
}
