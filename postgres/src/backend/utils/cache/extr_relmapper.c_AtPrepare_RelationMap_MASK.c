
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ num_mappings; } ;
struct TYPE_7__ {scalar_t__ num_mappings; } ;
struct TYPE_6__ {scalar_t__ num_mappings; } ;
struct TYPE_5__ {scalar_t__ num_mappings; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;

void
FUNC_3(void)
{
 if (VAR_3.num_mappings != 0 ||
  VAR_2.num_mappings != 0 ||
  VAR_5.num_mappings != 0 ||
  VAR_4.num_mappings != 0)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("cannot PREPARE a transaction that modified relation mapping")));
}
