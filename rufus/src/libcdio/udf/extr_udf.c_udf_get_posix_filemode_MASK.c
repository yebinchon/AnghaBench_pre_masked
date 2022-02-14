
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int file_type; int flags; } ;
struct TYPE_5__ {TYPE_1__ icb_tag; int permissions; } ;
typedef TYPE_2__ udf_file_entry_t ;
typedef int udf_dirent_t ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_0 (int const*,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

mode_t
FUNC_3(const udf_dirent_t *VAR_30)
{
  udf_file_entry_t VAR_31;
  mode_t VAR_32 = 0;

  if (FUNC_0(VAR_30, &VAR_31)) {
    uint32_t VAR_33;





    VAR_33 = FUNC_2(VAR_31.permissions);

    if (VAR_33 & VAR_7) VAR_32 |= VAR_20;
    if (VAR_33 & VAR_8) VAR_32 |= VAR_26;
    if (VAR_33 & VAR_6) VAR_32 |= VAR_29;
    switch (VAR_31.icb_tag.file_type) {
    case 131:
      VAR_32 |= VAR_14;
      break;
    case 130:
      VAR_32 |= VAR_16;
      break;





    case 132:
      VAR_32 |= VAR_13;
      break;





    case 133:
      VAR_32 |= VAR_12;
      break;
    default: ;
    };






  }

  return VAR_32;

}
