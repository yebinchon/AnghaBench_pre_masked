
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hstate {int dummy; } ;
typedef int ssize_t ;
typedef int nodemask_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct hstate*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int * VAR_3 ;
 int FUNC_4 (struct hstate*,unsigned long,int,int *) ;

__attribute__((used)) static ssize_t FUNC_5(bool VAR_4,
        struct hstate *VAR_5, int VAR_6,
        unsigned long VAR_7, size_t VAR_8)
{
 int VAR_9;
 nodemask_t VAR_10, *VAR_11;

 if (FUNC_1(VAR_5) && !FUNC_0())
  return -VAR_0;

 if (VAR_6 == VAR_1) {



  if (!(VAR_4 &&
    FUNC_2(&VAR_10)))
   VAR_11 = &VAR_3[VAR_2];
  else
   VAR_11 = &VAR_10;
 } else {




  FUNC_3(&VAR_10, VAR_6);
  VAR_11 = &VAR_10;
 }

 VAR_9 = FUNC_4(VAR_5, VAR_7, VAR_6, VAR_11);

 return VAR_9 ? VAR_9 : VAR_8;
}
