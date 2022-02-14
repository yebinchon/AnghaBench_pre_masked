
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dat ;
typedef int MD5_CTX ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int,unsigned char*) ;
 int VAR_1 ;

int FUNC_4(void)
{
 MD5_CTX VAR_2;
 unsigned char VAR_3[VAR_0 + VAR_1];
 unsigned char VAR_4[] = "12345";

 FUNC_1(&VAR_2);
 FUNC_2(&VAR_2, &VAR_4[0], sizeof(VAR_4));
 FUNC_0(&VAR_3[0], &VAR_2);

 FUNC_3(&VAR_4[0], sizeof(VAR_4), &VAR_3[0]);

 return 0;
}
