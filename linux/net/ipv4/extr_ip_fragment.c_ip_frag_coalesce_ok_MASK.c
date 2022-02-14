
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ user; } ;
struct TYPE_5__ {TYPE_1__ v4; } ;
struct TYPE_6__ {TYPE_2__ key; } ;
struct ipq {TYPE_3__ q; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct ipq *VAR_1)
{
 return VAR_1->q.key.v4.user == VAR_0;
}
