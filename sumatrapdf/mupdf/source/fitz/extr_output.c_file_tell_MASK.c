
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int fz_context ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int64_t
FUNC_4(fz_context *VAR_2, void *VAR_3)
{
 FILE *VAR_4 = VAR_3;



 int64_t VAR_5 = FUNC_1(VAR_4);

 if (VAR_5 == -1)
  FUNC_2(VAR_2, VAR_0, "cannot ftell: %s", FUNC_3(VAR_1));
 return VAR_5;
}
