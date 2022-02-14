
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {int mutex; int ts_start; } ;
struct TYPE_7__ {TYPE_2__ pause; } ;
typedef TYPE_1__ obs_output_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(obs_output_t *VAR_0, bool VAR_1)
{
 bool VAR_2;
 uint64_t VAR_3;

 FUNC_4(&VAR_0->pause.mutex);
 VAR_3 = FUNC_1(&VAR_0->pause);
 if (VAR_1) {
  VAR_2 = FUNC_2(&VAR_0->pause);
  if (VAR_2)
   VAR_0->pause.ts_start = VAR_3;
 } else {
  VAR_2 = FUNC_3(&VAR_0->pause);
  if (VAR_2)
   FUNC_0(&VAR_0->pause, VAR_3);
 }
 FUNC_5(&VAR_0->pause.mutex);

 return VAR_2;
}
