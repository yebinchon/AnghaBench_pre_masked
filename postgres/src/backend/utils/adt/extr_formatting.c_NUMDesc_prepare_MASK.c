
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ type; TYPE_1__* key; } ;
struct TYPE_18__ {int need_locale; int flag; int lsign; scalar_t__ pre; scalar_t__ pre_lsign_num; scalar_t__ post; scalar_t__ zero_end; int zero_start; int multi; } ;
struct TYPE_17__ {int id; } ;
typedef TYPE_2__ NUMDesc ;
typedef TYPE_3__ FormatNode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;


 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15(NUMDesc *VAR_20, FormatNode *VAR_21)
{
 if (VAR_21->type != VAR_2)
  return;

 if (FUNC_3(VAR_20) && VAR_21->key->id != 139)
  FUNC_11(VAR_1,
    (FUNC_12(VAR_0),
     FUNC_14("\"EEEE\" must be the last pattern used")));

 switch (VAR_21->key->id)
 {
  case 143:
   if (FUNC_1(VAR_20))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_14("\"9\" must be ahead of \"PR\"")));
   if (FUNC_7(VAR_20))
   {
    ++VAR_20->multi;
    break;
   }
   if (FUNC_2(VAR_20))
    ++VAR_20->post;
   else
    ++VAR_20->pre;
   break;

  case 144:
   if (FUNC_1(VAR_20))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_14("\"0\" must be ahead of \"PR\"")));
   if (!FUNC_10(VAR_20) && !FUNC_2(VAR_20))
   {
    VAR_20->flag |= VAR_16;
    VAR_20->zero_start = VAR_20->pre + 1;
   }
   if (!FUNC_2(VAR_20))
    ++VAR_20->pre;
   else
    ++VAR_20->post;

   VAR_20->zero_end = VAR_20->pre + VAR_20->post;
   break;

  case 142:
   if (VAR_20->pre == 0 && VAR_20->post == 0 && (!FUNC_10(VAR_20)))
    VAR_20->flag |= VAR_3;
   break;

  case 141:
   VAR_20->flag |= VAR_8;
   VAR_20->need_locale = 1;

  case 140:
   if (FUNC_2(VAR_20))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_14("multiple decimal points")));
   if (FUNC_7(VAR_20))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_14("cannot use \"V\" and decimal point together")));
   VAR_20->flag |= VAR_5;
   break;

  case 138:
   VAR_20->flag |= VAR_7;
   break;

  case 131:
   if (FUNC_5(VAR_20))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_14("cannot use \"S\" twice")));
   if (FUNC_8(VAR_20) || FUNC_6(VAR_20) || FUNC_1(VAR_20))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_14("cannot use \"S\" and \"PL\"/\"MI\"/\"SG\"/\"PR\" together")));
   if (!FUNC_2(VAR_20))
   {
    VAR_20->lsign = VAR_19;
    VAR_20->pre_lsign_num = VAR_20->pre;
    VAR_20->need_locale = 1;
    VAR_20->flag |= VAR_9;
   }
   else if (VAR_20->lsign == VAR_17)
   {
    VAR_20->lsign = VAR_18;
    VAR_20->need_locale = 1;
    VAR_20->flag |= VAR_9;
   }
   break;

  case 135:
   if (FUNC_5(VAR_20))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_14("cannot use \"S\" and \"MI\" together")));
   VAR_20->flag |= VAR_10;
   if (FUNC_2(VAR_20))
    VAR_20->flag |= VAR_11;
   break;

  case 134:
   if (FUNC_5(VAR_20))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_14("cannot use \"S\" and \"PL\" together")));
   VAR_20->flag |= VAR_13;
   if (FUNC_2(VAR_20))
    VAR_20->flag |= VAR_14;
   break;

  case 130:
   if (FUNC_5(VAR_20))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_14("cannot use \"S\" and \"SG\" together")));
   VAR_20->flag |= VAR_10;
   VAR_20->flag |= VAR_13;
   break;

  case 133:
   if (FUNC_5(VAR_20) || FUNC_8(VAR_20) || FUNC_6(VAR_20))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_14("cannot use \"PR\" and \"S\"/\"PL\"/\"MI\"/\"SG\" together")));
   VAR_20->flag |= VAR_4;
   break;

  case 128:
  case 132:
   VAR_20->flag |= VAR_15;
   break;

  case 136:
  case 137:
   VAR_20->need_locale = 1;
   break;

  case 129:
   if (FUNC_2(VAR_20))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_14("cannot use \"V\" and decimal point together")));
   VAR_20->flag |= VAR_12;
   break;

  case 139:
   if (FUNC_3(VAR_20))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_14("cannot use \"EEEE\" twice")));
   if (FUNC_0(VAR_20) || FUNC_4(VAR_20) || FUNC_5(VAR_20) ||
    FUNC_1(VAR_20) || FUNC_6(VAR_20) || FUNC_8(VAR_20) ||
    FUNC_9(VAR_20) || FUNC_7(VAR_20))
    FUNC_11(VAR_1,
      (FUNC_12(VAR_0),
       FUNC_14("\"EEEE\" is incompatible with other formats"),
       FUNC_13("\"EEEE\" may only be used together with digit and decimal point patterns.")));
   VAR_20->flag |= VAR_6;
   break;
 }
}
