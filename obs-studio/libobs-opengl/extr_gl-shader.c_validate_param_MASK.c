
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct program_param {TYPE_2__* param; } ;
struct TYPE_3__ {size_t num; } ;
struct TYPE_4__ {TYPE_1__ cur_value; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static inline bool FUNC_1(struct program_param *VAR_1,
      size_t VAR_2)
{
 if (VAR_1->param->cur_value.num != VAR_2) {
  FUNC_0(VAR_0,
       "Parameter '%s' set to invalid size %u, "
       "expected %u",
       VAR_1->param->name, (unsigned int)VAR_1->param->cur_value.num,
       (unsigned int)VAR_2);
  return 0;
 }

 return 1;
}
