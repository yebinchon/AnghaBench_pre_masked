
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;
typedef int rnd_bytes ;


 char const* FUNC_0 (struct buffer*) ;
 struct buffer FUNC_1 (scalar_t__,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,char const*,char const*) ;
 char* FUNC_3 (int *,int,int,int ,int *,struct gc_arena*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (char const*) ;

const char *
FUNC_6(const char *VAR_1, struct gc_arena *VAR_2)
{


    uint8_t VAR_3[6];
    const char *VAR_4;
    struct buffer VAR_5 = FUNC_1(FUNC_5(VAR_1)+sizeof(VAR_3)*2+4, VAR_2);

    FUNC_4(VAR_3, sizeof(VAR_3));
    VAR_4 = FUNC_3(VAR_3, sizeof(VAR_3), 40, 0, ((void*)0), VAR_2);
    FUNC_2(&VAR_5, "%s.%s", VAR_4, VAR_1);
    return FUNC_0(&VAR_5);

}
