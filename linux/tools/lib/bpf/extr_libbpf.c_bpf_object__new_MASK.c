
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; size_t obj_buf_sz; int maps_shndx; int btf_maps_shndx; int data_shndx; int rodata_shndx; int bss_shndx; void* obj_buf; } ;
struct bpf_object {int loaded; int list; TYPE_1__ efile; int name; int path; } ;


 int VAR_0 ;
 struct bpf_object* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int VAR_1 ;
 struct bpf_object* FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,char const*) ;
 char* FUNC_6 (int ,char) ;
 int FUNC_7 (int ,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static struct bpf_object *FUNC_10(const char *VAR_2,
       void *VAR_3,
       size_t VAR_4)
{
 struct bpf_object *VAR_5;
 char *VAR_6;

 VAR_5 = FUNC_3(1, sizeof(struct bpf_object) + FUNC_8(VAR_2) + 1);
 if (!VAR_5) {
  FUNC_5("alloc memory failed for %s\n", VAR_2);
  return FUNC_0(-VAR_0);
 }

 FUNC_7(VAR_5->path, VAR_2);

 FUNC_9(VAR_5->name, FUNC_2((void *)VAR_2), sizeof(VAR_5->name) - 1);
 VAR_6 = FUNC_6(VAR_5->name, '.');
 if (VAR_6)
  *VAR_6 = 0;

 VAR_5->efile.fd = -1;






 VAR_5->efile.obj_buf = VAR_3;
 VAR_5->efile.obj_buf_sz = VAR_4;
 VAR_5->efile.maps_shndx = -1;
 VAR_5->efile.btf_maps_shndx = -1;
 VAR_5->efile.data_shndx = -1;
 VAR_5->efile.rodata_shndx = -1;
 VAR_5->efile.bss_shndx = -1;

 VAR_5->loaded = 0;

 FUNC_1(&VAR_5->list);
 FUNC_4(&VAR_5->list, &VAR_1);
 return VAR_5;
}
