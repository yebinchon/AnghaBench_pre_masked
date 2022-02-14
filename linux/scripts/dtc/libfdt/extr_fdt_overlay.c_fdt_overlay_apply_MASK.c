
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int *) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (void*,void*) ;
 int FUNC_5 (void*,void*) ;
 int FUNC_6 (void*,void*) ;
 int FUNC_7 (void*,int ) ;

int FUNC_8(void *VAR_0, void *VAR_1)
{
 uint32_t VAR_2;
 int VAR_3;

 FUNC_0(VAR_0);
 FUNC_0(VAR_1);

 VAR_3 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_3)
  goto err;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3)
  goto err;

 VAR_3 = FUNC_7(VAR_1, VAR_2);
 if (VAR_3)
  goto err;

 VAR_3 = FUNC_4(VAR_0, VAR_1);
 if (VAR_3)
  goto err;

 VAR_3 = FUNC_5(VAR_0, VAR_1);
 if (VAR_3)
  goto err;

 VAR_3 = FUNC_6(VAR_0, VAR_1);
 if (VAR_3)
  goto err;




 FUNC_2(VAR_1, ~0);

 return 0;

err:



 FUNC_2(VAR_1, ~0);





 FUNC_2(VAR_0, ~0);

 return VAR_3;
}
