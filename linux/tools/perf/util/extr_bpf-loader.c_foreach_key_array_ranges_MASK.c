
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int nr_ranges; TYPE_1__* ranges; } ;
struct TYPE_6__ {TYPE_2__ array; } ;
struct bpf_map_op {TYPE_3__ k; } ;
struct bpf_map_def {int dummy; } ;
typedef int (* map_config_func_t ) (char const*,int,struct bpf_map_def const*,struct bpf_map_op*,unsigned int*,void*) ;
struct TYPE_4__ {unsigned int start; size_t length; } ;


 int FUNC_0 (char*,char const*,unsigned int) ;

__attribute__((used)) static int
FUNC_1(map_config_func_t VAR_0, void *VAR_1,
    const char *VAR_2, int VAR_3,
    const struct bpf_map_def *VAR_4,
    struct bpf_map_op *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_5->k.array.nr_ranges; VAR_6++) {
  unsigned int VAR_9 = VAR_5->k.array.ranges[VAR_6].start;
  size_t VAR_10 = VAR_5->k.array.ranges[VAR_6].length;

  for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
   unsigned int VAR_11 = VAR_9 + VAR_7;

   VAR_8 = VAR_0(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_11, VAR_1);
   if (VAR_8) {
    FUNC_0("ERROR: failed to insert value to %s[%u]\n",
      VAR_2, VAR_11);
    return VAR_8;
   }
  }
 }
 return 0;
}
