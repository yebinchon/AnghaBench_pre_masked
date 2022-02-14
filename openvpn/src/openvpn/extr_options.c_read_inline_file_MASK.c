
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_src {int dummy; } ;
struct gc_arena {int dummy; } ;
struct buffer {int capacity; } ;
typedef int line ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct buffer FUNC_2 (int) ;
 int FUNC_3 (struct buffer*) ;
 int FUNC_4 (struct buffer*,struct buffer*) ;
 int FUNC_5 (struct buffer*,char*,char*) ;
 int FUNC_6 (struct buffer*,scalar_t__) ;
 int FUNC_7 (struct buffer*) ;
 scalar_t__ FUNC_8 (struct in_src*,char*,int) ;
 scalar_t__ FUNC_9 (char) ;
 int FUNC_10 (int ,char*,char const*) ;
 int FUNC_11 (char*,int) ;
 char* FUNC_12 (int ,struct gc_arena*) ;
 scalar_t__ FUNC_13 (char const*) ;
 int FUNC_14 (char*,char const*,scalar_t__) ;

__attribute__((used)) static char *
FUNC_15(struct in_src *VAR_2, const char *VAR_3, struct gc_arena *VAR_4)
{
    char VAR_5[VAR_1];
    struct buffer VAR_6 = FUNC_2(8*VAR_1);
    char *VAR_7;
    bool VAR_8 = 0;

    while (FUNC_8(VAR_2, VAR_5, sizeof(VAR_5)))
    {
        char *VAR_9 = VAR_5;

        while (FUNC_9(*VAR_9))
        {
            VAR_9++;
        }
        if (!FUNC_14(VAR_9, VAR_3, FUNC_13(VAR_3)))
        {
            VAR_8 = 1;
            break;
        }
        if (!FUNC_6(&VAR_6, FUNC_13(VAR_5)+1))
        {

            struct buffer VAR_10 = FUNC_2(VAR_6.capacity * 2);
            FUNC_0(FUNC_4(&VAR_10, &VAR_6));
            FUNC_3(&VAR_6);
            FUNC_7(&VAR_6);
            VAR_6 = VAR_10;
        }
        FUNC_5(&VAR_6, "%s", VAR_5);
    }
    if (!VAR_8)
    {
        FUNC_10(VAR_0, "ERROR: Endtag %s missing", VAR_3);
    }
    VAR_7 = FUNC_12(FUNC_1(&VAR_6), VAR_4);
    FUNC_3(&VAR_6);
    FUNC_7(&VAR_6);
    FUNC_11(VAR_5, sizeof(VAR_5));
    return VAR_7;
}
