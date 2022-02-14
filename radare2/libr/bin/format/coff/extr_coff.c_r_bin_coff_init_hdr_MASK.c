
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut16 ;
struct TYPE_2__ {scalar_t__ f_magic; } ;
struct r_bin_coff_obj {scalar_t__ endian; int target_id; int b; TYPE_1__ hdr; } ;
struct coff_hdr {int dummy; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,char*,int) ;
 int FUNC_1 (int ,int ,int *,char*,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct r_bin_coff_obj *VAR_3) {
 ut16 VAR_4 = FUNC_2 (VAR_3->b, 0, VAR_2);
 switch (VAR_4) {
 case 128:
 case 129:
  VAR_3->endian = VAR_1;
  break;
 default:
  VAR_3->endian = VAR_2;
 }
 int VAR_5 = 0;
 VAR_5 = FUNC_1 (VAR_3->b, 0, (ut8 *)&VAR_3->hdr, VAR_3->endian? "2S3I2S": "2s3i2s", 1);
 if (VAR_5 != sizeof (struct coff_hdr)) {
  return 0;
 }
 if (VAR_3->hdr.f_magic == VAR_0) {
  VAR_5 = FUNC_0 (VAR_3->b, (ut8 *)&VAR_3->target_id, VAR_3->endian? "S": "s", 1);
  if (VAR_5 != sizeof (ut16)) {
   return 0;
  }
 }
 return 1;
}
