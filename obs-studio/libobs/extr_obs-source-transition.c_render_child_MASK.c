
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vec4 {int dummy; } ;
struct TYPE_7__ {int * transition_texrender; int * transition_matrices; } ;
typedef TYPE_1__ obs_source_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,struct vec4*,float,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (float,float,float,float,float,float) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct vec4*) ;

__attribute__((used)) static inline void FUNC_11(obs_source_t *VAR_1, obs_source_t *VAR_2,
    size_t VAR_3)
{
 uint32_t VAR_4 = FUNC_0(VAR_1);
 uint32_t VAR_5 = FUNC_1(VAR_1);
 struct vec4 VAR_6;
 if (!VAR_2)
  return;

 if (FUNC_7(VAR_1->transition_texrender[VAR_3], VAR_4, VAR_5)) {
  FUNC_10(&VAR_6);
  FUNC_2(VAR_0, &VAR_6, 0.0f, 0);
  FUNC_6(0.0f, (float)VAR_4, 0.0f, (float)VAR_5, -100.0f, 100.0f);

  FUNC_5();
  FUNC_3(&VAR_1->transition_matrices[VAR_3]);
  FUNC_9(VAR_2);
  FUNC_4();

  FUNC_8(VAR_1->transition_texrender[VAR_3]);
 }
}
