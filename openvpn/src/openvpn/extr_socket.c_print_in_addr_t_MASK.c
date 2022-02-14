
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {scalar_t__ s_addr; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;
typedef scalar_t__ in_addr_t ;


 char const* FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct in_addr) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct buffer FUNC_2 (int,struct gc_arena*) ;
 int FUNC_3 (struct buffer*,char*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct in_addr) ;

const char *
FUNC_6(in_addr_t VAR_2, unsigned int VAR_3, struct gc_arena *VAR_4)
{
    struct in_addr VAR_5;
    struct buffer VAR_6 = FUNC_2(64, VAR_4);

    if (VAR_2 || !(VAR_3 & VAR_0))
    {
        FUNC_1(VAR_5);
        VAR_5.s_addr = (VAR_3 & VAR_1) ? VAR_2 : FUNC_4(VAR_2);

        FUNC_3(&VAR_6, "%s", FUNC_5(VAR_5));
    }
    return FUNC_0(&VAR_6);
}
