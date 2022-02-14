
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao {int log; } ;
typedef scalar_t__ OSStatus ;


 int FUNC_0 (int ,int,char*,char const*,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;

bool FUNC_2(struct ao *VAR_1, int VAR_2, OSStatus VAR_3, const char *VAR_4)
{
    if (VAR_3 == VAR_0) return 1;

    FUNC_0(VAR_1->log, VAR_2, "%s (%s/%d)\n", VAR_4, FUNC_1(VAR_3), (int)VAR_3);

    return 0;
}
