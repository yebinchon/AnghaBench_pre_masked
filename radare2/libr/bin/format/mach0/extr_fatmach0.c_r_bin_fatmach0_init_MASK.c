
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_4__ {int nfat_arch; void* magic; } ;
struct r_bin_fatmach0_obj_t {int nfat_arch; int size; TYPE_2__* archs; int b; TYPE_1__ hdr; } ;
struct fat_header {int dummy; } ;
struct fat_arch {int dummy; } ;
struct TYPE_5__ {void* align; void* size; void* offset; void* cpusubtype; void* cputype; } ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int,int *,int) ;
 void* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct r_bin_fatmach0_obj_t* VAR_1) {
 ut32 VAR_2;
 ut32 VAR_3;
 ut8 VAR_4[sizeof (struct fat_header)] = {0};
 int VAR_5 = FUNC_4 (VAR_1->b, 0, &VAR_4[0], sizeof (struct fat_header));
 if (VAR_5 != sizeof (struct fat_header)) {
  FUNC_3 ("read (fat_header)");
  return 0;
 }
 VAR_1->hdr.magic = FUNC_5 (&VAR_4[0]);
 VAR_1->hdr.nfat_arch = FUNC_5 (&VAR_4[4]);
 VAR_1->nfat_arch = VAR_1->hdr.nfat_arch;
 if (sizeof (struct fat_header) + VAR_1->nfat_arch *
  sizeof (struct fat_arch) > VAR_1->size) {
  return 0;
 }
 if (VAR_1->hdr.magic != VAR_0 || !VAR_1->nfat_arch || VAR_1->nfat_arch < 1) {
  FUNC_1 ("Endian FAT_MAGIC failed (?)\n");
  return 0;
 }
 VAR_2 = VAR_1->nfat_arch * sizeof (struct fat_arch);
 if (VAR_2 < VAR_1->nfat_arch) {
  return 0;
 }
 if (!(VAR_1->archs = FUNC_2 (VAR_2))) {
  FUNC_3 ("malloc (fat_arch)");
  return 0;
 }
 for (VAR_3 = 0; VAR_3 < VAR_1->nfat_arch; VAR_3++) {
  ut8 VAR_6[sizeof (struct fat_arch)] = {0};
  VAR_5 = FUNC_4 (VAR_1->b, 8 + VAR_3 * sizeof (struct fat_arch), &VAR_6[0], sizeof (struct fat_arch));
  if (VAR_5 != sizeof (struct fat_arch)) {
   FUNC_3 ("read (fat_arch)");
   FUNC_0 (VAR_1->archs);
   return 0;
  }
  VAR_1->archs[VAR_3].cputype = FUNC_5 (&VAR_6[0]);
  VAR_1->archs[VAR_3].cpusubtype = FUNC_5 (&VAR_6[4]);
  VAR_1->archs[VAR_3].offset = FUNC_5 (&VAR_6[8]);
  VAR_1->archs[VAR_3].size = FUNC_5 (&VAR_6[12]);
  VAR_1->archs[VAR_3].align = FUNC_5 (&VAR_6[16]);
 }
 return 1;
}
