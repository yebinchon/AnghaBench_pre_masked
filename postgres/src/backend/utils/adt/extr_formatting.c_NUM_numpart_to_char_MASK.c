
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int zero_start; scalar_t__ lsign; } ;
struct TYPE_10__ {int sign_wrote; int num_curr; char* number_p; int num_in; int out_pre_spaces; char* last_relevant; char sign; char* inout_p; int num_count; int L_positive_sign; int L_negative_sign; TYPE_3__* Num; int decimal; int inout; } ;
typedef TYPE_1__ NUMProc ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int ,char*,int,int,char*,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(NUMProc *VAR_7, int VAR_8)
{
 int VAR_9;

 if (FUNC_5(VAR_7->Num))
  return;
 VAR_7->num_in = 0;





 if (VAR_7->sign_wrote == 0 &&
  (VAR_7->num_curr >= VAR_7->out_pre_spaces || (FUNC_6(VAR_7->Num) && VAR_7->Num->zero_start == VAR_7->num_curr)) &&
  (FUNC_4(VAR_7) == 0 || (VAR_7->last_relevant && *VAR_7->last_relevant == '.')))
 {
  if (FUNC_3(VAR_7->Num))
  {
   if (VAR_7->Num->lsign == VAR_6)
   {
    if (VAR_7->sign == '-')
     FUNC_8(VAR_7->inout_p, VAR_7->L_negative_sign);
    else
     FUNC_8(VAR_7->inout_p, VAR_7->L_positive_sign);
    VAR_7->inout_p += FUNC_9(VAR_7->inout_p);
    VAR_7->sign_wrote = 1;
   }
  }
  else if (FUNC_0(VAR_7->Num))
  {
   *VAR_7->inout_p = VAR_7->sign == '+' ? ' ' : '<';
   ++VAR_7->inout_p;
   VAR_7->sign_wrote = 1;
  }
  else if (VAR_7->sign == '+')
  {
   if (!FUNC_2(VAR_7->Num))
   {
    *VAR_7->inout_p = ' ';
    ++VAR_7->inout_p;
   }
   VAR_7->sign_wrote = 1;
  }
  else if (VAR_7->sign == '-')
  {
   *VAR_7->inout_p = '-';
   ++VAR_7->inout_p;
   VAR_7->sign_wrote = 1;
  }
 }





 if (VAR_8 == VAR_2 || VAR_8 == VAR_1 || VAR_8 == VAR_3 || VAR_8 == VAR_4)
 {
  if (VAR_7->num_curr < VAR_7->out_pre_spaces &&
   (VAR_7->Num->zero_start > VAR_7->num_curr || !FUNC_6(VAR_7->Num)))
  {



   if (!FUNC_2(VAR_7->Num))
   {
    *VAR_7->inout_p = ' ';
    ++VAR_7->inout_p;
   }
  }
  else if (FUNC_6(VAR_7->Num) &&
     VAR_7->num_curr < VAR_7->out_pre_spaces &&
     VAR_7->Num->zero_start <= VAR_7->num_curr)
  {



   *VAR_7->inout_p = '0';
   ++VAR_7->inout_p;
   VAR_7->num_in = 1;
  }
  else
  {



   if (*VAR_7->number_p == '.')
   {
    if (!VAR_7->last_relevant || *VAR_7->last_relevant != '.')
    {
     FUNC_8(VAR_7->inout_p, VAR_7->decimal);
     VAR_7->inout_p += FUNC_9(VAR_7->inout_p);
    }




    else if (FUNC_2(VAR_7->Num) &&
       VAR_7->last_relevant && *VAR_7->last_relevant == '.')
    {
     FUNC_8(VAR_7->inout_p, VAR_7->decimal);
     VAR_7->inout_p += FUNC_9(VAR_7->inout_p);
    }
   }
   else
   {



    if (VAR_7->last_relevant && VAR_7->number_p > VAR_7->last_relevant &&
     VAR_8 != VAR_1)
     ;




    else if (FUNC_4(VAR_7))
    {
     if (!FUNC_2(VAR_7->Num))
     {
      *VAR_7->inout_p = ' ';
      ++VAR_7->inout_p;
     }




     else if (VAR_7->last_relevant && *VAR_7->last_relevant == '.')
     {
      *VAR_7->inout_p = '0';
      ++VAR_7->inout_p;
     }
    }
    else
    {
     *VAR_7->inout_p = *VAR_7->number_p;
     ++VAR_7->inout_p;
     VAR_7->num_in = 1;
    }
   }

   if (*VAR_7->number_p)
    ++VAR_7->number_p;
  }

  VAR_9 = VAR_7->num_count + (VAR_7->out_pre_spaces ? 1 : 0) + (FUNC_1(VAR_7->Num) ? 1 : 0);

  if (VAR_7->last_relevant && VAR_7->last_relevant == VAR_7->number_p)
   VAR_9 = VAR_7->num_curr;

  if (VAR_7->num_curr + 1 == VAR_9)
  {
   if (VAR_7->sign_wrote == 1 && FUNC_0(VAR_7->Num))
   {
    *VAR_7->inout_p = VAR_7->sign == '+' ? ' ' : '>';
    ++VAR_7->inout_p;
   }
   else if (FUNC_3(VAR_7->Num) && VAR_7->Num->lsign == VAR_5)
   {
    if (VAR_7->sign == '-')
     FUNC_8(VAR_7->inout_p, VAR_7->L_negative_sign);
    else
     FUNC_8(VAR_7->inout_p, VAR_7->L_positive_sign);
    VAR_7->inout_p += FUNC_9(VAR_7->inout_p);
   }
  }
 }

 ++VAR_7->num_curr;
}
