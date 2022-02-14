
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {unsigned long kcov_size; struct kcov* kcov; int kcov_mode; int kcov_area; } ;
struct kcov {void* mode; unsigned long size; struct task_struct* t; int area; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 () ;
 struct task_struct* VAR_11 ;
 int FUNC_3 (struct kcov*) ;
 int FUNC_4 (struct kcov*) ;
 int FUNC_5 (struct kcov*) ;
 int FUNC_6 (struct task_struct*) ;

__attribute__((used)) static int FUNC_7(struct kcov *VAR_12, unsigned int VAR_13,
        unsigned long VAR_14)
{
 struct task_struct *VAR_15;
 unsigned long VAR_16, VAR_17;

 switch (VAR_13) {
 case 128:




  if (VAR_12->mode != VAR_5)
   return -VAR_0;





  VAR_16 = VAR_14;
  if (VAR_16 < 2 || VAR_16 > VAR_4 / sizeof(unsigned long))
   return -VAR_1;
  VAR_12->size = VAR_16;
  VAR_12->mode = VAR_6;
  return 0;
 case 129:







  if (VAR_12->mode != VAR_6 || !VAR_12->area)
   return -VAR_1;
  VAR_15 = VAR_11;
  if (VAR_12->t != ((void*)0) || VAR_15->kcov != ((void*)0))
   return -VAR_0;
  if (VAR_14 == VAR_10)
   VAR_12->mode = VAR_8;
  else if (VAR_14 == VAR_9)



  return -VAR_2;

  else
   return -VAR_1;
  FUNC_3(VAR_12);

  VAR_15->kcov_size = VAR_12->size;
  VAR_15->kcov_area = VAR_12->area;

  FUNC_2();
  FUNC_1(VAR_15->kcov_mode, VAR_12->mode);
  VAR_15->kcov = VAR_12;
  VAR_12->t = VAR_15;

  FUNC_4(VAR_12);
  return 0;
 case 130:

  VAR_17 = VAR_14;
  if (VAR_17 != 0 || VAR_11->kcov != VAR_12)
   return -VAR_1;
  VAR_15 = VAR_11;
  if (FUNC_0(VAR_12->t != VAR_15))
   return -VAR_1;
  FUNC_6(VAR_15);
  VAR_12->t = ((void*)0);
  VAR_12->mode = VAR_6;
  FUNC_5(VAR_12);
  return 0;
 default:
  return -VAR_3;
 }
}
