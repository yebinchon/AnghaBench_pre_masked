
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {char* start; scalar_t__ len; } ;


 struct bstr FUNC_0 (struct bstr,int) ;

__attribute__((used)) static bool FUNC_1(struct bstr *VAR_0, char VAR_1)
{
    if (VAR_0->len && VAR_0->start[0] == VAR_1) {
        *VAR_0 = FUNC_0(*VAR_0, 1);
        return 1;
    } else {
        return 0;
    }
}
