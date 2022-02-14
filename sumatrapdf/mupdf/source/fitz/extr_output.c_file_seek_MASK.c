
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int fz_context ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_2, void *VAR_3, int64_t VAR_4, int VAR_5)
{
 FILE *VAR_6 = VAR_3;



 int VAR_7 = FUNC_1(VAR_6, VAR_4, VAR_5);

 if (VAR_7 < 0)
  FUNC_2(VAR_2, VAR_0, "cannot fseek: %s", FUNC_3(VAR_1));
}
