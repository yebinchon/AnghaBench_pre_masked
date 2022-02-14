
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct buffer*,int const,char*,int ) ;
 int FUNC_1 (struct gc_arena*) ;
 char* FUNC_2 (int ,int,struct gc_arena*) ;
 struct gc_arena FUNC_3 () ;
 int FUNC_4 (int const,int const,int const,char*,struct buffer const*,char const*,char const*) ;

__attribute__((used)) static void
FUNC_5(const int VAR_1,
                           const int VAR_2,
                           const bool VAR_3,
                           const struct buffer *VAR_4,
                           const struct buffer *VAR_5,
                           const char *VAR_6,
                           const char *VAR_7)
{
    struct gc_arena VAR_8 = FUNC_3();
    struct buffer VAR_9 = *VAR_4;
    char *VAR_10 = FUNC_2(VAR_0, 1, &VAR_8);

    while (FUNC_0(&VAR_9, VAR_2, VAR_10, VAR_0))
    {
        FUNC_4(VAR_1, VAR_2, VAR_3, VAR_10, VAR_5, VAR_6, VAR_7);
    }

    FUNC_1(&VAR_8);
}
