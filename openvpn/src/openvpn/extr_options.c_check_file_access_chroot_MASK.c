
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct buffer {int len; } ;


 int FUNC_0 (int) ;
 char const* FUNC_1 (struct buffer*) ;
 char const* VAR_0 ;
 struct buffer FUNC_2 (int,struct gc_arena*) ;
 int FUNC_3 (struct buffer*,char*,char const*,char const*,char const*) ;
 int FUNC_4 (int const,char const*,int const,char const*) ;
 int FUNC_5 (struct gc_arena*) ;
 struct gc_arena FUNC_6 () ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static bool
FUNC_8(const char *VAR_1, const int VAR_2, const char *VAR_3, const int VAR_4, const char *VAR_5)
{
    bool VAR_6 = 0;


    if (!VAR_3)
    {
        return 0;
    }


    if (VAR_1)
    {
        struct gc_arena VAR_7 = FUNC_6();
        struct buffer VAR_8;
        int VAR_9 = 0;


        VAR_9 = FUNC_7(VAR_1) + FUNC_7(VAR_0) + FUNC_7(VAR_3) + 1;
        VAR_8 = FUNC_2(VAR_9, &VAR_7);
        FUNC_3(&VAR_8, "%s%s%s", VAR_1, VAR_0, VAR_3);
        FUNC_0(VAR_8.len > 0);

        VAR_6 = FUNC_4(VAR_2, FUNC_1(&VAR_8), VAR_4, VAR_5);
        FUNC_5(&VAR_7);
    }
    else
    {

        VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
    }
    return VAR_6;
}
