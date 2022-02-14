
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bytelen; } ;
typedef TYPE_1__ ByteProg ;


 int VAR_0 ;
 int * FUNC_0 (char const*,TYPE_1__*,int) ;

int FUNC_1(const char *VAR_1)
{
    ByteProg VAR_2 = {

        .bytelen = 5 + VAR_0
    };

    if (FUNC_0(VAR_1, &VAR_2, 1) == ((void*)0)) return -1;

    return VAR_2.bytelen;
}
