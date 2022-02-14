
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (int *,int,int ,int ,int,int) ;
 int FUNC_1 (void*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,void*,int,int) ;

int FUNC_3(int VAR_6, loff_t VAR_7, int VAR_8, loff_t VAR_9, u64 VAR_10)
{
 void *VAR_11;
 loff_t VAR_12;

 VAR_12 = VAR_7 & ~(VAR_5 - 1);
 VAR_7 -= VAR_12;

 VAR_11 = FUNC_0(((void*)0), VAR_7 + VAR_10, VAR_3, VAR_2, VAR_6, VAR_12);
 if (VAR_11 == VAR_1)
  return -1;

 while (VAR_10) {
  ssize_t VAR_13 = FUNC_2(VAR_8, VAR_11 + VAR_7, VAR_10, VAR_9);
  if (VAR_13 < 0 && VAR_4 == VAR_0)
   continue;
  if (VAR_13 <= 0)
   break;

  VAR_10 -= VAR_13;
  VAR_7 += VAR_13;
  VAR_9 += VAR_13;
 }
 FUNC_1(VAR_11, VAR_7 + VAR_10);

 return VAR_10 ? -1 : 0;
}
