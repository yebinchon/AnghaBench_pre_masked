
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iov_iter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (void*,size_t,struct iov_iter*) ;
 size_t FUNC_1 (void*,size_t,struct iov_iter*) ;
 size_t FUNC_2 (size_t,size_t) ;
 size_t FUNC_3 (size_t,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, size_t VAR_3, struct iov_iter *VAR_4)
{
 size_t VAR_5, VAR_6;

 VAR_5 = ~((unsigned long)VAR_2 - 1) & (VAR_1 - 1);
 if (VAR_5) {
  VAR_5 = FUNC_2(VAR_5, VAR_3);
  if (FUNC_0(VAR_2, VAR_5, VAR_4) != VAR_5)
   return -VAR_0;
  VAR_3 -= VAR_5;
  VAR_2 += VAR_5;
 }

 VAR_6 = FUNC_3(VAR_3, VAR_1);
 if (FUNC_1(VAR_2, VAR_6, VAR_4) != VAR_6)
  return -VAR_0;
 VAR_3 -= VAR_6;
 VAR_2 += VAR_6;

 if (VAR_3 && FUNC_0(VAR_2, VAR_3, VAR_4) != VAR_3)
  return -VAR_0;

 return 0;
}
