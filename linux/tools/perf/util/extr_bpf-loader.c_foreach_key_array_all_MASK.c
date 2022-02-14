
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_op {int dummy; } ;
struct bpf_map_def {unsigned int max_entries; } ;
typedef int (* map_config_func_t ) (char const*,int,struct bpf_map_def const*,struct bpf_map_op*,unsigned int*,void*) ;


 int FUNC_0 (char*,char const*,unsigned int) ;

__attribute__((used)) static int
FUNC_1(map_config_func_t VAR_0,
        void *VAR_1, const char *VAR_2,
        int VAR_3, const struct bpf_map_def *VAR_4,
        struct bpf_map_op *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_4->max_entries; VAR_6++) {
  VAR_7 = VAR_0(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6, VAR_1);
  if (VAR_7) {
   FUNC_0("ERROR: failed to insert value to %s[%u]\n",
     VAR_2, VAR_6);
   return VAR_7;
  }
 }
 return 0;
}
