
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* format_decode_fn ) (int const) ;} ;
typedef TYPE_1__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
typedef int xtensa_insnbuf ;
typedef scalar_t__ xtensa_format ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

xtensa_format
FUNC_2 (xtensa_isa VAR_4, const xtensa_insnbuf VAR_5)
{
  xtensa_isa_internal *VAR_6 = (xtensa_isa_internal *) VAR_4;
  xtensa_format VAR_7;

  VAR_7 = (VAR_6->format_decode_fn) (VAR_5);
  if (VAR_7 != VAR_0) {
   return VAR_7;
  }

  VAR_2 = VAR_1;
  FUNC_0 (VAR_3, "cannot decode instruction format");
  return VAR_0;
}
