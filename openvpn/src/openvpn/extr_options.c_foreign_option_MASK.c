
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {char* foreign_option_index; } ;
struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct buffer FUNC_1 (int ,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,...) ;
 int FUNC_3 (struct gc_arena*) ;
 struct gc_arena FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct env_set*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct options *VAR_2, char *VAR_3[], int VAR_4, struct env_set *VAR_5)
{
    if (VAR_4 > 0)
    {
        struct gc_arena VAR_6 = FUNC_4();
        struct buffer VAR_7 = FUNC_1(VAR_1, &VAR_6);
        struct buffer VAR_8 = FUNC_1(VAR_1, &VAR_6);
        int VAR_9;
        bool VAR_10 = 1;
        bool VAR_11 = 1;

        VAR_11 &= FUNC_2(&VAR_7, "foreign_option_%d", VAR_2->foreign_option_index + 1);
        ++VAR_2->foreign_option_index;
        for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9)
        {
            if (VAR_3[VAR_9])
            {
                if (!VAR_10)
                {
                    VAR_11 &= FUNC_2(&VAR_8, " ");
                }
                VAR_11 &= FUNC_2(&VAR_8, "%s", VAR_3[VAR_9]);
                VAR_10 = 0;
            }
        }
        if (VAR_11)
        {
            FUNC_6(VAR_5, FUNC_0(&VAR_7), FUNC_0(&VAR_8));
        }
        else
        {
            FUNC_5(VAR_0, "foreign_option: name/value overflow");
        }
        FUNC_3(&VAR_6);
    }
}
