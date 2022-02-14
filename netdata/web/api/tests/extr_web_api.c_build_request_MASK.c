
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct web_buffer {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct web_buffer*) ;
 int FUNC_1 (struct web_buffer*,char const*) ;
 char** VAR_1 ;

__attribute__((used)) static void FUNC_2(struct web_buffer *VAR_2, const char *VAR_3, bool VAR_4, size_t VAR_5)
{
    FUNC_0(VAR_2);
    FUNC_1(VAR_2, "GET ");
    FUNC_1(VAR_2, VAR_3);
    FUNC_1(VAR_2, " HTTP/1.1");
    if (VAR_4)
        FUNC_1(VAR_2, "\r");
    FUNC_1(VAR_2, "\n");
    for (size_t VAR_6 = 0; VAR_6 < VAR_5 && VAR_6 < VAR_0; VAR_6++) {
        FUNC_1(VAR_2, VAR_1[VAR_6]);
        if (VAR_4)
            FUNC_1(VAR_2, "\r");
        FUNC_1(VAR_2, "\n");
    }
    if (VAR_4)
        FUNC_1(VAR_2, "\r");
    FUNC_1(VAR_2, "\n");
}
