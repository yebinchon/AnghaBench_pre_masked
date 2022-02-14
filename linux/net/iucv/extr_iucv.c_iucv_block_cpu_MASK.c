
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iucv_param {int dummy; } iucv_param ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,union iucv_param*) ;
 int VAR_1 ;
 union iucv_param** VAR_2 ;
 int FUNC_2 (union iucv_param*,int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_3)
{
 int VAR_4 = FUNC_3();
 union iucv_param *VAR_5;


 VAR_5 = VAR_2[VAR_4];
 FUNC_2(VAR_5, 0, sizeof(union iucv_param));
 FUNC_1(VAR_0, VAR_5);


 FUNC_0(VAR_4, &VAR_1);
}
