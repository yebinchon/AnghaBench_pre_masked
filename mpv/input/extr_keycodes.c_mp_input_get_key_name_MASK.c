
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* start; int member_0; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (TYPE_1__*,int) ;

char *FUNC_1(int VAR_0)
{
    bstr VAR_1 = {0};
    FUNC_0(&VAR_1, VAR_0);
    return VAR_1.start;
}
