
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ signal; } ;
struct record {TYPE_1__ switch_output; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct record *VAR_1)
{
 return VAR_1->switch_output.signal &&
        FUNC_0(&VAR_0);
}
