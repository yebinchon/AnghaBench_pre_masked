
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16_t ;
struct mrb_irep {size_t rlen; struct mrb_irep** reps; TYPE_1__* debug_info; } ;
typedef int mrb_state ;
struct TYPE_5__ {int filename_sym; } ;
typedef TYPE_2__ mrb_irep_debug_info_file ;
struct TYPE_4__ {size_t flen; TYPE_2__** files; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (TYPE_2__*,size_t) ;
 char* FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (char const*,char const*) ;

__attribute__((used)) static uint16_t
FUNC_3(mrb_state *VAR_2, struct mrb_irep *VAR_3, const char *VAR_4, uint16_t VAR_5)
{
  mrb_irep_debug_info_file *VAR_6;
  uint16_t VAR_7 = 0;
  uint16_t VAR_8;
  uint16_t VAR_9;
  uint16_t VAR_10;

  for (VAR_8 = 0; VAR_8 < VAR_3->debug_info->flen; ++VAR_8) {
    const char *VAR_11;
    VAR_6 = VAR_3->debug_info->files[VAR_8];
    VAR_11 = FUNC_1(VAR_2, VAR_6->filename_sym, ((void*)0));
    if (!FUNC_2(VAR_11, VAR_4)) {
      VAR_7 = VAR_0;

      VAR_9 = FUNC_0(VAR_6, VAR_5);
      if (VAR_9 != 0) {
        return VAR_7 | VAR_1;
      }
    }
    for (VAR_10=0; VAR_10 < VAR_3->rlen; ++VAR_10) {
      VAR_7 |= FUNC_3(VAR_2, VAR_3->reps[VAR_10], VAR_4, VAR_5);
      if (VAR_7 == (VAR_0 | VAR_1)) {
        return VAR_7;
      }
    }
  }
  return VAR_7;
}
