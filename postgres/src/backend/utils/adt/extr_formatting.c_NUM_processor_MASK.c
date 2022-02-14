
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ type; char* character; TYPE_1__* key; } ;
struct TYPE_23__ {int lsign; int pre_lsign_num; int post; int pre; int zero_end; scalar_t__ zero_start; int flag; } ;
struct TYPE_22__ {int is_to_char; char* number; char* inout; char* last_relevant; int read_post; int read_dec; int out_pre_spaces; int sign; int sign_wrote; int num_count; char* number_p; char* inout_p; char* L_thousands_sep; char* L_currency_symbol; TYPE_3__* Num; scalar_t__ num_in; scalar_t__ num_curr; scalar_t__ read_pre; } ;
struct TYPE_21__ {int id; } ;
typedef int Oid ;
typedef TYPE_2__ NUMProc ;
typedef TYPE_3__ NUMDesc ;
typedef TYPE_4__ FormatNode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;





 int FUNC_11 (TYPE_2__*,int,int) ;
 int FUNC_12 (TYPE_2__*,int,int) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (TYPE_2__*) ;


 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* FUNC_15 (char*) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*) ;
 char* FUNC_20 (char*) ;
 char* FUNC_21 (char*,int ) ;
 int FUNC_22 (char*,char,int) ;
 int FUNC_23 (char const*) ;
 int FUNC_24 (char const*) ;
 int FUNC_25 (char const*,char*,char*) ;
 char* FUNC_26 (char*,char const*) ;
 int FUNC_27 (char const*) ;
 int FUNC_28 (char*,char const*,int) ;

__attribute__((used)) static char *
FUNC_29(FormatNode *VAR_15, NUMDesc *VAR_16, char *VAR_17,
     char *VAR_18, int VAR_19, int VAR_20,
     int VAR_21, bool VAR_22, Oid VAR_23)
{
 FormatNode *VAR_24;
 NUMProc VAR_25,
      *VAR_26 = &VAR_25;
 const char *VAR_27;
 int VAR_28;

 FUNC_10(VAR_26, 0, sizeof(NUMProc));

 VAR_26->Num = VAR_16;
 VAR_26->is_to_char = VAR_22;
 VAR_26->number = VAR_18;
 VAR_26->inout = VAR_17;
 VAR_26->last_relevant = ((void*)0);
 VAR_26->read_post = 0;
 VAR_26->read_pre = 0;
 VAR_26->read_dec = 0;

 if (VAR_26->Num->zero_start)
  --VAR_26->Num->zero_start;

 if (FUNC_3(VAR_26->Num))
 {
  if (!VAR_26->is_to_char)
   FUNC_17(VAR_2,
     (FUNC_18(VAR_1),
      FUNC_19("\"EEEE\" not supported for input")));
  return FUNC_26(VAR_17, VAR_18);
 }




 if (FUNC_8(VAR_26->Num))
 {
  if (!VAR_26->is_to_char)
   FUNC_17(VAR_2,
     (FUNC_18(VAR_1),
      FUNC_19("\"RN\" not supported for input")));

  VAR_26->Num->lsign = VAR_26->Num->pre_lsign_num = VAR_26->Num->post =
   VAR_26->Num->pre = VAR_26->out_pre_spaces = VAR_26->sign = 0;

  if (FUNC_4(VAR_26->Num))
  {
   VAR_26->Num->flag = 0;
   VAR_26->Num->flag |= VAR_6;
  }
  else
   VAR_26->Num->flag = 0;
  VAR_26->Num->flag |= VAR_9;
 }




 if (VAR_22)
 {
  VAR_26->sign = VAR_21;


  if (FUNC_7(VAR_26->Num) || FUNC_6(VAR_26->Num))
  {
   if (FUNC_7(VAR_26->Num) && FUNC_6(VAR_26->Num) == 0)
    VAR_26->sign_wrote = 0;
   else
    VAR_26->sign_wrote = 1;
  }
  else
  {
   if (VAR_26->sign != '-')
   {
    if (FUNC_1(VAR_26->Num) && FUNC_4(VAR_26->Num))
     VAR_26->Num->flag &= ~VAR_5;
    if (FUNC_6(VAR_26->Num))
     VAR_26->Num->flag &= ~VAR_7;
   }
   else if (VAR_26->sign != '+' && FUNC_7(VAR_26->Num))
    VAR_26->Num->flag &= ~VAR_8;

   if (VAR_26->sign == '+' && FUNC_4(VAR_26->Num) && FUNC_5(VAR_26->Num) == 0)
    VAR_26->sign_wrote = 1;
   else
    VAR_26->sign_wrote = 0;

   if (VAR_26->Num->lsign == VAR_11 && VAR_26->Num->pre == VAR_26->Num->pre_lsign_num)
    VAR_26->Num->lsign = VAR_10;
  }
 }
 else
  VAR_26->sign = 0;




 VAR_26->num_count = VAR_26->Num->post + VAR_26->Num->pre - 1;

 if (VAR_22)
 {
  VAR_26->out_pre_spaces = VAR_20;

  if (FUNC_4(VAR_26->Num) && FUNC_2(VAR_26->Num))
  {
   VAR_26->last_relevant = FUNC_20(VAR_26->number);





   if (VAR_26->last_relevant && VAR_26->Num->zero_end > VAR_26->out_pre_spaces)
   {
    char *VAR_29;

    VAR_29 = VAR_26->number + (VAR_26->Num->zero_end - VAR_26->out_pre_spaces);
    if (VAR_26->last_relevant < VAR_29)
     VAR_26->last_relevant = VAR_29;
   }
  }

  if (VAR_26->sign_wrote == 0 && VAR_26->out_pre_spaces == 0)
   ++VAR_26->num_count;
 }
 else
 {
  VAR_26->out_pre_spaces = 0;
  *VAR_26->number = ' ';
  *(VAR_26->number + 1) = '\0';
 }

 VAR_26->num_in = 0;
 VAR_26->num_curr = 0;
 FUNC_14(VAR_26);




 if (VAR_26->is_to_char)
  VAR_26->number_p = VAR_26->number;
 else
  VAR_26->number_p = VAR_26->number + 1;

 for (VAR_24 = VAR_15, VAR_26->inout_p = VAR_26->inout; VAR_24->type != VAR_4; VAR_24++)
 {
  if (!VAR_26->is_to_char)
  {





   if (VAR_12)
    break;
  }




  if (VAR_24->type == VAR_3)
  {
   switch (VAR_24->key->id)
   {
    case 140:
    case 141:
    case 137:
    case 138:
     if (VAR_26->is_to_char)
     {
      FUNC_13(VAR_26, VAR_24->key->id);
      continue;
     }
     else
     {
      FUNC_12(VAR_26, VAR_24->key->id, VAR_19);
      break;
     }

    case 139:
     if (VAR_26->is_to_char)
     {
      if (!VAR_26->num_in)
      {
       if (FUNC_4(VAR_26->Num))
        continue;
       else
        *VAR_26->inout_p = ' ';
      }
      else
       *VAR_26->inout_p = ',';
     }
     else
     {
      if (!VAR_26->num_in)
      {
       if (FUNC_4(VAR_26->Num))
        continue;
      }
      if (*VAR_26->inout_p != ',')
       continue;
     }
     break;

    case 136:
     VAR_27 = VAR_26->L_thousands_sep;
     VAR_28 = FUNC_27(VAR_27);
     if (VAR_26->is_to_char)
     {
      if (!VAR_26->num_in)
      {
       if (FUNC_4(VAR_26->Num))
        continue;
       else
       {

        VAR_28 = FUNC_24(VAR_27);
        FUNC_22(VAR_26->inout_p, ' ', VAR_28);
        VAR_26->inout_p += VAR_28 - 1;
       }
      }
      else
      {
       FUNC_26(VAR_26->inout_p, VAR_27);
       VAR_26->inout_p += VAR_28 - 1;
      }
     }
     else
     {
      if (!VAR_26->num_in)
      {
       if (FUNC_4(VAR_26->Num))
        continue;
      }







      if (FUNC_0(VAR_28) &&
       FUNC_28(VAR_26->inout_p, VAR_27, VAR_28) == 0)
       VAR_26->inout_p += VAR_28 - 1;
      else
       continue;
     }
     break;

    case 135:
     VAR_27 = VAR_26->L_currency_symbol;
     if (VAR_26->is_to_char)
     {
      FUNC_26(VAR_26->inout_p, VAR_27);
      VAR_26->inout_p += FUNC_27(VAR_27) - 1;
     }
     else
     {
      FUNC_11(VAR_26, FUNC_24(VAR_27), VAR_19);
      continue;
     }
     break;

    case 132:
     if (FUNC_4(VAR_26->Num))
     {
      FUNC_26(VAR_26->inout_p, VAR_26->number_p);
      VAR_26->inout_p += FUNC_27(VAR_26->inout_p) - 1;
     }
     else
     {
      FUNC_25(VAR_26->inout_p, "%15s", VAR_26->number_p);
      VAR_26->inout_p += FUNC_27(VAR_26->inout_p) - 1;
     }
     break;

    case 129:
     if (FUNC_4(VAR_26->Num))
     {
      FUNC_26(VAR_26->inout_p, FUNC_15(VAR_26->number_p));
      VAR_26->inout_p += FUNC_27(VAR_26->inout_p) - 1;
     }
     else
     {
      FUNC_25(VAR_26->inout_p, "%15s", FUNC_15(VAR_26->number_p));
      VAR_26->inout_p += FUNC_27(VAR_26->inout_p) - 1;
     }
     break;

    case 128:
     if (FUNC_8(VAR_26->Num) || *VAR_26->number == '#' ||
      VAR_26->sign == '-' || FUNC_2(VAR_26->Num))
      continue;

     if (VAR_26->is_to_char)
     {
      FUNC_26(VAR_26->inout_p, FUNC_21(VAR_26->number, VAR_13));
      VAR_26->inout_p += 1;
     }
     else
     {

      FUNC_11(VAR_26, 2, VAR_19);
      continue;
     }
     break;

    case 130:
     if (FUNC_8(VAR_26->Num) || *VAR_26->number == '#' ||
      VAR_26->sign == '-' || FUNC_2(VAR_26->Num))
      continue;

     if (VAR_26->is_to_char)
     {
      FUNC_26(VAR_26->inout_p, FUNC_21(VAR_26->number, VAR_14));
      VAR_26->inout_p += 1;
     }
     else
     {

      FUNC_11(VAR_26, 2, VAR_19);
      continue;
     }
     break;

    case 134:
     if (VAR_26->is_to_char)
     {
      if (VAR_26->sign == '-')
       *VAR_26->inout_p = '-';
      else if (FUNC_4(VAR_26->Num))
       continue;
      else
       *VAR_26->inout_p = ' ';
     }
     else
     {
      if (*VAR_26->inout_p == '-')
       *VAR_26->number = '-';
      else
      {
       FUNC_11(VAR_26, 1, VAR_19);
       continue;
      }
     }
     break;

    case 133:
     if (VAR_26->is_to_char)
     {
      if (VAR_26->sign == '+')
       *VAR_26->inout_p = '+';
      else if (FUNC_4(VAR_26->Num))
       continue;
      else
       *VAR_26->inout_p = ' ';
     }
     else
     {
      if (*VAR_26->inout_p == '+')
       *VAR_26->number = '+';
      else
      {
       FUNC_11(VAR_26, 1, VAR_19);
       continue;
      }
     }
     break;

    case 131:
     if (VAR_26->is_to_char)
      *VAR_26->inout_p = VAR_26->sign;
     else
     {
      if (*VAR_26->inout_p == '-')
       *VAR_26->number = '-';
      else if (*VAR_26->inout_p == '+')
       *VAR_26->number = '+';
      else
      {
       FUNC_11(VAR_26, 1, VAR_19);
       continue;
      }
     }
     break;

    default:
     continue;
     break;
   }
  }
  else
  {






   if (VAR_26->is_to_char)
   {
    FUNC_26(VAR_26->inout_p, VAR_24->character);
    VAR_26->inout_p += FUNC_27(VAR_26->inout_p);
   }
   else
   {
    VAR_26->inout_p += FUNC_23(VAR_26->inout_p);
   }
   continue;
  }
  VAR_26->inout_p++;
 }

 if (VAR_26->is_to_char)
 {
  *VAR_26->inout_p = '\0';
  return VAR_26->inout;
 }
 else
 {
  if (*(VAR_26->number_p - 1) == '.')
   *(VAR_26->number_p - 1) = '\0';
  else
   *VAR_26->number_p = '\0';




  VAR_26->Num->post = VAR_26->read_post;




  return VAR_26->number;
 }
}
