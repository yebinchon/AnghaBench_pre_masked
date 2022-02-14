
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
typedef TYPE_1__ timelib_tzinfo ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static timelib_tzinfo* FUNC_2(char *VAR_0)
{
 timelib_tzinfo *VAR_1;
 VAR_1 = FUNC_0(1, sizeof(timelib_tzinfo));
 VAR_1->name = FUNC_1(VAR_0);

 return VAR_1;
}
