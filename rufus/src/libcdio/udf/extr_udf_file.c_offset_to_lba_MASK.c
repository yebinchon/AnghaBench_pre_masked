
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_10__ {scalar_t__ i_part_start; } ;
typedef TYPE_2__ udf_t ;
struct TYPE_11__ {scalar_t__ len; scalar_t__ pos; } ;
typedef TYPE_3__ udf_short_ad_t ;
struct TYPE_9__ {int lba; } ;
struct TYPE_12__ {scalar_t__ len; TYPE_1__ loc; } ;
typedef TYPE_4__ udf_long_ad_t ;
struct TYPE_13__ {int strat_type; int flags; } ;
typedef TYPE_5__ udf_icbtag_t ;
struct TYPE_14__ {int i_extended_attr; int i_alloc_descs; TYPE_5__ icb_tag; } ;
typedef TYPE_6__ udf_file_entry_t ;
struct TYPE_15__ {int fe; TYPE_2__* p_udf; } ;
typedef TYPE_7__ udf_dirent_t ;
typedef scalar_t__ off_t ;
typedef scalar_t__ lba_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;



 int VAR_2 ;


 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,...) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static lba_t
FUNC_4(const udf_dirent_t *VAR_4, off_t VAR_5,
               lba_t *VAR_6, uint32_t *VAR_7)
{
  udf_t *VAR_8 = VAR_4->p_udf;
  const udf_file_entry_t *VAR_9 = (udf_file_entry_t *)
    &VAR_4->fe;
  const udf_icbtag_t *VAR_10 = &VAR_9->icb_tag;
  const uint16_t VAR_11= FUNC_2(VAR_10->strat_type);

  if (VAR_5 < 0) {
    FUNC_1("Negative offset value");
    return VAR_0;
  }

  switch (VAR_11) {
  case 4096:
    FUNC_1("Cannot deal with strategy4096 yet!");
    return VAR_0;
    break;
  case 128:
    {
      off_t VAR_12 = 0;
      uint64_t VAR_13;
      int VAR_14, VAR_15 = 0;
      uint16_t VAR_16 = FUNC_2(VAR_10->flags&VAR_2);

      switch (VAR_16) {
      case 129:
 {
   udf_short_ad_t *VAR_17;





   do {
     VAR_5 -= VAR_12;
     VAR_14 = sizeof(udf_short_ad_t) * VAR_15;
     if (VAR_14 > FUNC_3(VAR_9->i_alloc_descs)) {
       FUNC_1("File offset out of bounds");
       return VAR_0;
     }
     VAR_17 = (udf_short_ad_t *)
       FUNC_0( FUNC_3(VAR_9->i_extended_attr)
        + VAR_14 );
     VAR_12 = VAR_17->len;
     VAR_15++;
   } while(VAR_5 >= VAR_12);

   VAR_13 = (VAR_5 / VAR_3) + VAR_17->pos;

   *VAR_7 = VAR_17->len;
 }
 break;
      case 130:
 {





   udf_long_ad_t *VAR_18;
   do {
     VAR_5 -= VAR_12;
     VAR_14 = sizeof(udf_long_ad_t) * VAR_15;
     if (VAR_14 > FUNC_3(VAR_9->i_alloc_descs)) {
       FUNC_1("File offset out of bounds");
       return VAR_0;
     }
     VAR_18 = (udf_long_ad_t *)
       FUNC_0( FUNC_3(VAR_9->i_extended_attr)
        + VAR_14 );
     VAR_12 = VAR_18->len;
     VAR_15++;
   } while(VAR_5 >= VAR_12);

   VAR_13 = (VAR_5 / VAR_3) +
     FUNC_3(((udf_long_ad_t *)(VAR_18))->loc.lba);

   *VAR_7 = VAR_18->len;
 }
 break;
      case 131:




 *VAR_7 = 0;
 FUNC_1("Don't know how to data in ICB handle yet");
 return VAR_0;
      case 132:
 FUNC_1("Don't know how to handle extended addresses yet");
 return VAR_0;
      default:
 FUNC_1("Unsupported allocation descriptor %d", VAR_16);
 return VAR_0;
      }

      *VAR_6 = (lba_t)VAR_13 + VAR_8->i_part_start;
      if (*VAR_6 < 0) {
 FUNC_1("Negative LBA value");
 return VAR_0;
      }
      return *VAR_6;
    }
  default:
    FUNC_1("Unknown strategy type %d", VAR_11);
    return VAR_1;
  }
}
