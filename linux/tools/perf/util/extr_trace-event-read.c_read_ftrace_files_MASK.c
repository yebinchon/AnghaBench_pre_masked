
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;


 int FUNC_0 (struct tep_handle*) ;
 unsigned long long FUNC_1 (struct tep_handle*) ;
 int FUNC_2 (struct tep_handle*,unsigned long long) ;

__attribute__((used)) static int FUNC_3(struct tep_handle *VAR_0)
{
 unsigned long long VAR_1;
 int VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_2 = FUNC_0(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_1 = FUNC_1(VAR_0);
  VAR_4 = FUNC_2(VAR_0, VAR_1);
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
