
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_src {int dummy; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*) ;
 char* VAR_0 ;
 struct buffer FUNC_1 (int) ;
 int FUNC_2 (struct buffer*,char*,char*) ;
 int FUNC_3 (struct buffer*) ;
 char* FUNC_4 (struct in_src*,int ,struct gc_arena*) ;
 char* FUNC_5 (char*,struct gc_arena*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static bool
FUNC_7(struct in_src *VAR_1, char *VAR_2[], struct gc_arena *VAR_3)
{
    bool VAR_4 = 0;
    if (VAR_2[0] && !VAR_2[1])
    {
        char *VAR_5 = VAR_2[0];
        if (VAR_5[0] == '<' && VAR_5[FUNC_6(VAR_5)-1] == '>')
        {
            struct buffer VAR_6;
            VAR_5[FUNC_6(VAR_5)-1] = '\0';
            VAR_2[0] = FUNC_5(VAR_5+1, VAR_3);
            VAR_2[1] = FUNC_5(VAR_0, VAR_3);
            VAR_6 = FUNC_1(FUNC_6(VAR_2[0]) + 4);
            FUNC_2(&VAR_6, "</%s>", VAR_2[0]);
            VAR_2[2] = FUNC_4(VAR_1, FUNC_0(&VAR_6), VAR_3);
            VAR_2[3] = ((void*)0);
            FUNC_3(&VAR_6);
            VAR_4 = 1;
        }
    }
    return VAR_4;
}
