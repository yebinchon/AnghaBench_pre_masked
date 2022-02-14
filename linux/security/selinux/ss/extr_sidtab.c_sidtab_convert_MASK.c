
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sidtab_convert_params {TYPE_1__* target; } ;
struct sidtab {size_t count; int lock; struct sidtab_convert_params* convert; int * roots; } ;
struct TYPE_2__ {size_t count; int * roots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int *,int *,size_t*,size_t,size_t,struct sidtab_convert_params*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,size_t,int) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct sidtab *VAR_2, struct sidtab_convert_params *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5, VAR_6, VAR_7;
 int VAR_8;

 FUNC_4(&VAR_2->lock, VAR_4);


 if (VAR_2->convert) {
  FUNC_5(&VAR_2->lock, VAR_4);
  return -VAR_0;
 }

 VAR_5 = VAR_2->count;
 VAR_6 = FUNC_3(VAR_5);




 VAR_8 = FUNC_2(VAR_3->target, VAR_5 - 1, 1) ? 0 : -VAR_1;
 if (VAR_8) {
  FUNC_5(&VAR_2->lock, VAR_4);
  return VAR_8;
 }


 VAR_3->target->count = VAR_5;


 VAR_2->convert = VAR_3;


 FUNC_5(&VAR_2->lock, VAR_4);

 FUNC_0("SELinux:  Converting %u SID table entries...\n", VAR_5);


 VAR_7 = 0;
 VAR_8 = FUNC_1(&VAR_3->target->roots[VAR_6],
     &VAR_2->roots[VAR_6], &VAR_7, VAR_5, VAR_6, VAR_3);
 if (VAR_8) {

  FUNC_4(&VAR_2->lock, VAR_4);
  VAR_2->convert = ((void*)0);
  FUNC_5(&VAR_2->lock, VAR_4);
 }
 return VAR_8;
}
