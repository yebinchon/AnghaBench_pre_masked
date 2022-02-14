
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t __u8 ;





 size_t FUNC_0 (void*,int,size_t,int ) ;
 int FUNC_1 (void*,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ssize_t
FUNC_2(struct thread *VAR_2, void *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 __u8 *VAR_6;

 (void)VAR_2;

 switch (VAR_0) {
 case 128:
  FUNC_1(VAR_3, 0, VAR_4);
  break;

 case 129:
  for (VAR_6 = VAR_3, VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5, ++VAR_6)
   *VAR_6 = VAR_5 % 63;
  break;

 case 130:
  return FUNC_0(VAR_3, 1, VAR_4, VAR_1);
 }

 return VAR_4;
}
