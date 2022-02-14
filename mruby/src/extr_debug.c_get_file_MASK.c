
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ start_pos; } ;
typedef TYPE_1__ mrb_irep_debug_info_file ;
struct TYPE_6__ {scalar_t__ pc_count; int flen; TYPE_1__** files; } ;
typedef TYPE_2__ mrb_irep_debug_info ;
typedef int int32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static mrb_irep_debug_info_file*
FUNC_1(mrb_irep_debug_info *VAR_0, uint32_t VAR_1)
{
  mrb_irep_debug_info_file **VAR_2;
  int32_t VAR_3;

  if (VAR_1 >= VAR_0->pc_count) { return ((void*)0); }

  VAR_2 = VAR_0->files;
  VAR_3 = VAR_0->flen;
  while (VAR_3 > 0) {
    int32_t VAR_4 = VAR_3 / 2;
    mrb_irep_debug_info_file **VAR_5 = VAR_2 + VAR_4;
    if (!(VAR_1 < (*VAR_5)->start_pos)) {
      VAR_2 = VAR_5 + 1;
      VAR_3 -= VAR_4 + 1;
    }
    else { VAR_3 = VAR_4; }
  }

  --VAR_2;


  FUNC_0(VAR_0->files <= VAR_2 && VAR_2 < (VAR_0->files + VAR_0->flen));

  FUNC_0((*VAR_2)->start_pos <= VAR_1 &&
             VAR_1 < (((VAR_2 + 1 - VAR_0->files) < VAR_0->flen)
                   ? (*(VAR_2+1))->start_pos : VAR_0->pc_count));

  return *VAR_2;
}
