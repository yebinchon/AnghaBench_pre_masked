
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_4;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
