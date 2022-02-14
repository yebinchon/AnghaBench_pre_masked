
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,void*,size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int FUNC_5(void *VAR_8, size_t VAR_9)
{
 int VAR_10;

 VAR_10 = -VAR_0;
 if (FUNC_4(VAR_3, &VAR_6))
  goto busy;
 VAR_10 = -VAR_1;
 if (VAR_9 > VAR_4)
  goto inval;
 FUNC_1(VAR_7, VAR_8, VAR_9);
 VAR_5 |= VAR_2;
 FUNC_3("key initialized\n");
 return 0;
inval:
 FUNC_0(VAR_3, &VAR_6);
busy:
 FUNC_2("key initialization failed\n");
 return VAR_10;
}
