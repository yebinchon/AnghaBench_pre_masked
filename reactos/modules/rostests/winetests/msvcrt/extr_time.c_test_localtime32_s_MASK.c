
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; } ;
typedef int errno_t ;
typedef int __time32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tm*,int ,int) ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (struct tm*,int*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    struct tm VAR_3;
    __time32_t VAR_4;
    errno_t VAR_5;

    if (!&FUNC_2)
    {
        FUNC_3("Skipping _localtime32_s tests\n");
        return;
    }

    VAR_2 = VAR_0;
    VAR_5 = FUNC_2(((void*)0), ((void*)0));
    FUNC_1(VAR_5 == VAR_1, "Expected _localtime32_s to return EINVAL, got %d\n", VAR_5);
    FUNC_1(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);

    VAR_2 = VAR_0;
    VAR_4 = 0x12345678;
    VAR_5 = FUNC_2(((void*)0), &VAR_4);
    FUNC_1(VAR_5 == VAR_1, "Expected _localtime32_s to return EINVAL, got %d\n", VAR_5);
    FUNC_1(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);

    FUNC_0(&VAR_3, 0, sizeof(VAR_3));
    VAR_2 = VAR_0;
    VAR_5 = FUNC_2(&VAR_3, ((void*)0));
    FUNC_1(VAR_5 == VAR_1, "Expected _localtime32_s to return EINVAL, got %d\n", VAR_5);
    FUNC_1(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);
    FUNC_1(VAR_3.tm_sec == -1 && VAR_3.tm_min == -1 && VAR_3.tm_hour == -1 &&
       VAR_3.tm_mday == -1 && VAR_3.tm_mon == -1 && VAR_3.tm_year == -1 &&
       VAR_3.tm_wday == -1 && VAR_3.tm_yday == -1 && VAR_3.tm_isdst == -1,
       "Expected tm structure members to be initialized to -1, got "
       "(%d, %d, %d, %d, %d, %d, %d, %d, %d)\n", VAR_3.tm_sec, VAR_3.tm_min,
       VAR_3.tm_hour, VAR_3.tm_mday, VAR_3.tm_mon, VAR_3.tm_year, VAR_3.tm_wday, VAR_3.tm_yday,
       VAR_3.tm_isdst);

    FUNC_0(&VAR_3, 0, sizeof(VAR_3));
    VAR_4 = -1;
    VAR_2 = VAR_0;
    VAR_5 = FUNC_2(&VAR_3, &VAR_4);
    FUNC_1(VAR_5 == VAR_1, "Expected _localtime32_s to return EINVAL, got %d\n", VAR_5);
    FUNC_1(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);
    FUNC_1(VAR_3.tm_sec == -1 && VAR_3.tm_min == -1 && VAR_3.tm_hour == -1 &&
       VAR_3.tm_mday == -1 && VAR_3.tm_mon == -1 && VAR_3.tm_year == -1 &&
       VAR_3.tm_wday == -1 && VAR_3.tm_yday == -1 && VAR_3.tm_isdst == -1,
       "Expected tm structure members to be initialized to -1, got "
       "(%d, %d, %d, %d, %d, %d, %d, %d, %d)\n", VAR_3.tm_sec, VAR_3.tm_min,
       VAR_3.tm_hour, VAR_3.tm_mday, VAR_3.tm_mon, VAR_3.tm_year, VAR_3.tm_wday, VAR_3.tm_yday,
       VAR_3.tm_isdst);
}
