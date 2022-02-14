
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;
typedef int errno_t ;
typedef int __time64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct tm*,int ,int ) ;

errno_t
FUNC_2(
   struct tm* VAR_2,
   const __time64_t* VAR_3)
{
    __time64_t VAR_4;

    if (!VAR_2)
    {
        FUNC_0("ptm == NULL", VAR_0);
        return VAR_0;
    }

    if (!VAR_3)
    {
        FUNC_0("ptime == NULL", VAR_0);
        return VAR_0;
    }

    VAR_4 = *VAR_3;

    FUNC_1(VAR_2, VAR_4, 0);

    return VAR_1;
}
