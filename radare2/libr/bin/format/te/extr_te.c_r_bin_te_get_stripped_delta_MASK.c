
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long long ut64 ;
struct r_bin_te_obj_t {TYPE_1__* header; } ;
struct TYPE_2__ {long long StrippedSize; } ;
typedef int TE_image_file_header ;



ut64 FUNC_0(struct r_bin_te_obj_t *VAR_0) {
 if (VAR_0 && VAR_0->header) {
  return VAR_0->header->StrippedSize - sizeof (TE_image_file_header);
 }
 return 0LL;
}
