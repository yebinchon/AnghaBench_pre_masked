
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; } ;
typedef int errno_t ;
typedef int __time64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tm*,int ,int) ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (struct tm*,int*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    struct tm VAR_4;
    __time64_t VAR_5;
    errno_t VAR_6;

    if (!&FUNC_2)
    {
        FUNC_3("Skipping _localtime64_s tests\n");
        return;
    }

    VAR_3 = VAR_0;
    VAR_6 = FUNC_2(((void*)0), ((void*)0));
    FUNC_1(VAR_6 == VAR_1, "Expected _localtime64_s to return EINVAL, got %d\n", VAR_6);
    FUNC_1(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);

    VAR_3 = VAR_0;
    VAR_5 = 0xdeadbeef;
    VAR_6 = FUNC_2(((void*)0), &VAR_5);
    FUNC_1(VAR_6 == VAR_1, "Expected _localtime64_s to return EINVAL, got %d\n", VAR_6);
    FUNC_1(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);

    FUNC_0(&VAR_4, 0, sizeof(VAR_4));
    VAR_3 = VAR_0;
    VAR_6 = FUNC_2(&VAR_4, ((void*)0));
    FUNC_1(VAR_6 == VAR_1, "Expected _localtime64_s to return EINVAL, got %d\n", VAR_6);
    FUNC_1(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);
    FUNC_1(VAR_4.tm_sec == -1 && VAR_4.tm_min == -1 && VAR_4.tm_hour == -1 &&
       VAR_4.tm_mday == -1 && VAR_4.tm_mon == -1 && VAR_4.tm_year == -1 &&
       VAR_4.tm_wday == -1 && VAR_4.tm_yday == -1 && VAR_4.tm_isdst == -1,
       "Expected tm structure members to be initialized to -1, got "
       "(%d, %d, %d, %d, %d, %d, %d, %d, %d)\n", VAR_4.tm_sec, VAR_4.tm_min,
       VAR_4.tm_hour, VAR_4.tm_mday, VAR_4.tm_mon, VAR_4.tm_year, VAR_4.tm_wday, VAR_4.tm_yday,
       VAR_4.tm_isdst);

    FUNC_0(&VAR_4, 0, sizeof(VAR_4));
    VAR_5 = -1;
    VAR_3 = VAR_0;
    VAR_6 = FUNC_2(&VAR_4, &VAR_5);
    FUNC_1(VAR_6 == VAR_1, "Expected _localtime64_s to return EINVAL, got %d\n", VAR_6);
    FUNC_1(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);
    FUNC_1(VAR_4.tm_sec == -1 && VAR_4.tm_min == -1 && VAR_4.tm_hour == -1 &&
       VAR_4.tm_mday == -1 && VAR_4.tm_mon == -1 && VAR_4.tm_year == -1 &&
       VAR_4.tm_wday == -1 && VAR_4.tm_yday == -1 && VAR_4.tm_isdst == -1,
       "Expected tm structure members to be initialized to -1, got "
       "(%d, %d, %d, %d, %d, %d, %d, %d, %d)\n", VAR_4.tm_sec, VAR_4.tm_min,
       VAR_4.tm_hour, VAR_4.tm_mday, VAR_4.tm_mon, VAR_4.tm_year, VAR_4.tm_wday, VAR_4.tm_yday,
       VAR_4.tm_isdst);

    FUNC_0(&VAR_4, 0, sizeof(VAR_4));
    VAR_5 = VAR_2 + 1;
    VAR_3 = VAR_0;
    VAR_6 = FUNC_2(&VAR_4, &VAR_5);
    FUNC_1(VAR_6 == VAR_1, "Expected _localtime64_s to return EINVAL, got %d\n", VAR_6);
    FUNC_1(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);
    FUNC_1(VAR_4.tm_sec == -1 && VAR_4.tm_min == -1 && VAR_4.tm_hour == -1 &&
       VAR_4.tm_mday == -1 && VAR_4.tm_mon == -1 && VAR_4.tm_year == -1 &&
       VAR_4.tm_wday == -1 && VAR_4.tm_yday == -1 && VAR_4.tm_isdst == -1,
       "Expected tm structure members to be initialized to -1, got "
       "(%d, %d, %d, %d, %d, %d, %d, %d, %d)\n", VAR_4.tm_sec, VAR_4.tm_min,
       VAR_4.tm_hour, VAR_4.tm_mday, VAR_4.tm_mon, VAR_4.tm_year, VAR_4.tm_wday, VAR_4.tm_yday,
       VAR_4.tm_isdst);
}
