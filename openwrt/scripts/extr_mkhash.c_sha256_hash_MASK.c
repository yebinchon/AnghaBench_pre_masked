
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SHA256_CTX ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void*,int) ;
 void* FUNC_3 (int *,int*) ;
 char const* FUNC_4 (unsigned char*,int) ;

__attribute__((used)) static const char *FUNC_5(FILE *VAR_1)
{
 SHA256_CTX VAR_2;
 unsigned char VAR_3[VAR_0];
 void *VAR_4;
 int VAR_5;

 FUNC_1(&VAR_2);
 while ((VAR_4 = FUNC_3(VAR_1, &VAR_5)) != ((void*)0))
  FUNC_2(&VAR_2, VAR_4, VAR_5);
 FUNC_0(VAR_3, &VAR_2);

 return FUNC_4(VAR_3, VAR_0);
}
