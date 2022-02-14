
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp_out_buf ;
struct in6_addr {int dummy; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;
typedef int a6 ;


 int VAR_0 ;
 char const* FUNC_0 (struct buffer*) ;
 unsigned int VAR_1 ;
 struct buffer FUNC_1 (int,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,char*) ;
 int VAR_2 ;
 int FUNC_3 (int ,struct in6_addr*,char*,int) ;
 scalar_t__ FUNC_4 (struct in6_addr*,int *,int) ;

const char *
FUNC_5(struct in6_addr VAR_3, unsigned int VAR_4, struct gc_arena *VAR_5)
{
    struct buffer VAR_6 = FUNC_1(64, VAR_5);
    char VAR_7[64];

    if (FUNC_4(&VAR_3, &VAR_2, sizeof(VAR_3)) != 0
        || !(VAR_4 & VAR_1))
    {
        FUNC_3(VAR_0, &VAR_3, VAR_7, sizeof(VAR_7)-1);
        FUNC_2(&VAR_6, "%s", VAR_7 );
    }
    return FUNC_0(&VAR_6);
}
