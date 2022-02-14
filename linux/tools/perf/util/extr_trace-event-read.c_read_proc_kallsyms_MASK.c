
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,int ) ;
 unsigned int FUNC_1 (struct tep_handle*) ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct tep_handle *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)
  return 0;
 FUNC_0(VAR_1, VAR_4, VAR_0);
 VAR_2 += VAR_4;
 return 0;
}
