
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ output_type; } ;
typedef TYPE_1__ TCCState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*,char const*,int) ;

int FUNC_2(TCCState *VAR_4, const char *VAR_5, const char *VAR_6)
{
 if (VAR_6) {
  VAR_3 = FUNC_0 (VAR_6);
 }

 if (VAR_4->output_type == VAR_2) {
  return FUNC_1 (VAR_4, VAR_5, VAR_1 | VAR_0);
 } else {
  return FUNC_1 (VAR_4, VAR_5, VAR_1);
 }
}
