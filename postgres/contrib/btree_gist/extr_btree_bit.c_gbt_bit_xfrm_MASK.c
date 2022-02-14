
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bytea ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (void*,void*,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bytea *
FUNC_7(bytea *VAR_1)
{
 bytea *VAR_2 = VAR_1;
 int VAR_3 = FUNC_2(VAR_1) + VAR_0;
 int VAR_4 = FUNC_0(VAR_3);

 VAR_2 = (bytea *) FUNC_6(VAR_4);

 while (VAR_3 < VAR_4)
  ((char *) VAR_2)[VAR_3++] = 0;
 FUNC_1(VAR_2, VAR_4);
 FUNC_5((void *) FUNC_4(VAR_2), (void *) FUNC_3(VAR_1), FUNC_2(VAR_1));
 return VAR_2;
}
