
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iucv_param {int dummy; } iucv_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,unsigned long*) ;
 unsigned long VAR_4 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(void)
{
 unsigned long VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(union iucv_param), VAR_3 | VAR_2);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = FUNC_0(VAR_6, &VAR_5);
 if (VAR_7 == 0)
  VAR_4 = VAR_5;
 FUNC_1(VAR_6);
 return VAR_7 ? -VAR_1 : 0;
}
