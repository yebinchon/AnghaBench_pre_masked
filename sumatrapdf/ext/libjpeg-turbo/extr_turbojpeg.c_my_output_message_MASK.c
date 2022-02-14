
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* j_common_ptr ;
struct TYPE_6__ {TYPE_1__* err; } ;
struct TYPE_5__ {int (* format_message ) (TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(j_common_ptr VAR_1)
{
 (*VAR_1->err->format_message)(VAR_1, VAR_0);
}
