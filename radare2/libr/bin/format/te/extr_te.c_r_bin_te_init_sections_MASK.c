
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
struct r_bin_te_obj_t {int size; scalar_t__ section_header; int b; TYPE_1__* header; } ;
struct TYPE_2__ {int NumberOfSections; } ;
typedef int TE_image_section_header ;
typedef int TE_image_file_header ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int,int *,int) ;

__attribute__((used)) static int FUNC_4(struct r_bin_te_obj_t* VAR_0) {
 int VAR_1 = sizeof(TE_image_section_header) * VAR_0->header->NumberOfSections;
 if (VAR_1 > VAR_0->size) {
  FUNC_0 ("Invalid NumberOfSections value\n");
  return 0;
 }
 if (!(VAR_0->section_header = FUNC_1 (VAR_1))) {
  FUNC_2 ("malloc (sections headers)");
  return 0;
 }
 if (FUNC_3 (VAR_0->b, sizeof(TE_image_file_header),
    (ut8*)VAR_0->section_header, VAR_1) == -1) {
  FUNC_0 ("Error: read (sections headers)\n");
  return 0;
 }
 return 1;
}
