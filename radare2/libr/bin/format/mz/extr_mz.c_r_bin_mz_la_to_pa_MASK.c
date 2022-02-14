
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct r_bin_mz_obj_t {TYPE_1__* dos_header; } ;
struct TYPE_2__ {int header_paragraphs; } ;



__attribute__((used)) static ut64 FUNC_0(const struct r_bin_mz_obj_t *VAR_0, ut64 VAR_1) {
 return VAR_1 + (VAR_0->dos_header->header_paragraphs << 4);
}
