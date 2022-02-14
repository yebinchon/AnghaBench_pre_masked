
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ num_mappings; } ;
struct TYPE_7__ {scalar_t__ num_mappings; } ;
struct TYPE_6__ {scalar_t__ num_mappings; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int,TYPE_1__*) ;

void
FUNC_2(bool VAR_4, bool VAR_5)
{
 if (VAR_4 && !VAR_5)
 {





  FUNC_0(VAR_3.num_mappings == 0);
  FUNC_0(VAR_2.num_mappings == 0);




  if (VAR_1.num_mappings != 0)
  {
   FUNC_1(1, &VAR_1);
   VAR_1.num_mappings = 0;
  }
  if (VAR_0.num_mappings != 0)
  {
   FUNC_1(0, &VAR_0);
   VAR_0.num_mappings = 0;
  }
 }
 else
 {

  FUNC_0(!VAR_5 || VAR_3.num_mappings == 0);
  FUNC_0(!VAR_5 || VAR_2.num_mappings == 0);

  VAR_1.num_mappings = 0;
  VAR_0.num_mappings = 0;
  VAR_3.num_mappings = 0;
  VAR_2.num_mappings = 0;
 }
}
