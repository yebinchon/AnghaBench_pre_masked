
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ the_dct36; int type; int class; } ;
struct TYPE_7__ {scalar_t__** plain; } ;
struct TYPE_9__ {scalar_t__ synth; int err; TYPE_2__ cpu_opts; TYPE_1__ synths; } ;
typedef TYPE_3__ mpg123_handle ;
typedef scalar_t__ func_synth ;
typedef enum optdec { ____Placeholder_optdec } optdec ;
struct TYPE_10__ {int plain; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (int) ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (char*) ;
 size_t VAR_15 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 size_t VAR_27 ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 TYPE_4__ VAR_56 ;
 int VAR_57 ;

__attribute__((used)) static int FUNC_5(mpg123_handle *VAR_58)
{
 enum optdec VAR_59 = VAR_25;


 func_synth VAR_60 = VAR_58->synth;


 if(VAR_60 == VAR_30)
 VAR_60 = VAR_58->synths.plain[VAR_27][VAR_15];



 if(VAR_0) ;
 else if(FUNC_3(VAR_60, VAR_56.plain))
 VAR_59 = VAR_16;
 if(VAR_59 != VAR_25)
 {
  VAR_58->cpu_opts.type = VAR_59;
  VAR_58->cpu_opts.class = FUNC_1(VAR_59);

  FUNC_0("determined active decoder type %i (%s) of class %i", VAR_59, VAR_10[VAR_59], VAR_58->cpu_opts.class);
  return VAR_3;
 }
 else
 {
  if(VAR_4) FUNC_2("Unable to determine active decoder type -- this is SERIOUS b0rkage!");

  VAR_58->err = VAR_1;
  return VAR_2;
 }
}
