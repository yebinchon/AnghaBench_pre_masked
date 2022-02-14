
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer*,char,char*,int ) ;
 int FUNC_1 (struct gc_arena*) ;
 char* FUNC_2 (int ,int,struct gc_arena*) ;
 struct gc_arena FUNC_3 () ;
 char* FUNC_4 (char*,struct gc_arena*) ;
 struct buffer FUNC_5 (char const*,struct gc_arena*) ;

__attribute__((used)) static const char *
FUNC_6(const char *VAR_1,
                              struct gc_arena *VAR_2)
{
    struct gc_arena VAR_3 = FUNC_3();
    struct buffer VAR_4 = FUNC_5(VAR_1, &VAR_3);
    char *VAR_5 = FUNC_2(VAR_0, 0, &VAR_3);
    const char *VAR_6;

    FUNC_0(&VAR_4, ' ', VAR_5, VAR_0);
    VAR_6 = FUNC_4(VAR_5, VAR_2);
    FUNC_1(&VAR_3);
    return VAR_6;
}
