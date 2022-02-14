
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct Output {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,char*,char*,char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 char* FUNC_2 (unsigned int) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct Output *VAR_0, FILE *VAR_1, time_t VAR_2,
    int VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7, unsigned VAR_8)
{
    FUNC_0(VAR_8);
    FUNC_0(VAR_7);
    FUNC_0(VAR_0);


    FUNC_1(VAR_1, "%s %s %u %u.%u.%u.%u %u\n",
        FUNC_3(VAR_3),
        FUNC_2(VAR_5),
        VAR_6,
        (VAR_4>>24)&0xFF,
        (VAR_4>>16)&0xFF,
        (VAR_4>> 8)&0xFF,
        (VAR_4>> 0)&0xFF,
        (unsigned)VAR_2
        );
}
