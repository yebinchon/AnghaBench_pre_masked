
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {int nr_maps; int maps_cap; struct bpf_map* maps; } ;
struct bpf_map {int fd; int inner_map_fd; } ;


 int VAR_0 ;
 struct bpf_map* FUNC_0 (int ) ;
 size_t FUNC_1 (size_t,int) ;
 int FUNC_2 (struct bpf_map*,int ,int) ;
 int FUNC_3 (char*) ;
 struct bpf_map* FUNC_4 (struct bpf_map*,size_t) ;

__attribute__((used)) static struct bpf_map *FUNC_5(struct bpf_object *VAR_1)
{
 struct bpf_map *VAR_2;
 size_t VAR_3;
 int VAR_4;

 if (VAR_1->nr_maps < VAR_1->maps_cap)
  return &VAR_1->maps[VAR_1->nr_maps++];

 VAR_3 = FUNC_1((size_t)4, VAR_1->maps_cap * 3 / 2);
 VAR_2 = FUNC_4(VAR_1->maps, VAR_3 * sizeof(*VAR_1->maps));
 if (!VAR_2) {
  FUNC_3("alloc maps for object failed\n");
  return FUNC_0(-VAR_0);
 }

 VAR_1->maps_cap = VAR_3;
 VAR_1->maps = VAR_2;


 FUNC_2(VAR_1->maps + VAR_1->nr_maps, 0,
        (VAR_1->maps_cap - VAR_1->nr_maps) * sizeof(*VAR_1->maps));




 for (VAR_4 = VAR_1->nr_maps; VAR_4 < VAR_1->maps_cap; VAR_4++) {
  VAR_1->maps[VAR_4].fd = -1;
  VAR_1->maps[VAR_4].inner_map_fd = -1;
 }

 return &VAR_1->maps[VAR_1->nr_maps++];
}
