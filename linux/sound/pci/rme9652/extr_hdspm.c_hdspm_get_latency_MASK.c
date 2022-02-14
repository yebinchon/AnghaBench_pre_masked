
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {scalar_t__ io_type; int control_register; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct hdspm *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->control_register);
 if ((7 == VAR_3) && (VAR_1 == VAR_2->io_type || VAR_0 == VAR_2->io_type))
  VAR_3 = -1;

 return 1 << (VAR_3 + 6);
}
