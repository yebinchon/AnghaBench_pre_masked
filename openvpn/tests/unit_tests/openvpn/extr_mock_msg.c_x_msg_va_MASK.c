
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 unsigned int const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int ) ;

void
FUNC_2(const unsigned int VAR_2, const char *VAR_3,
         va_list VAR_4)
{
    if (VAR_2 & VAR_0)
    {
        VAR_1 = 1;
        FUNC_0("FATAL ERROR:");
    }
    FUNC_1(VAR_3, VAR_4);
    FUNC_0("\n");
}
