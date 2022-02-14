
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int linenr_T ;
typedef scalar_t__ colnr_T ;
typedef scalar_t__ char_u ;
struct TYPE_10__ {int lnum; } ;
struct TYPE_11__ {TYPE_3__ w_cursor; } ;
struct TYPE_9__ {int lnum; } ;


 char VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char VAR_7 ;
 int FUNC_0 () ;
 TYPE_4__* VAR_8 ;
 int FUNC_1 () ;
 scalar_t__* VAR_9 ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,TYPE_1__*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int,int*,int*) ;
 int FUNC_4 (TYPE_1__,TYPE_3__) ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__* FUNC_6 () ;
 scalar_t__* FUNC_7 (TYPE_1__*) ;
 scalar_t__* VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 scalar_t__* VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (char*,char*,int,...) ;
 int FUNC_9 (scalar_t__*) ;

void
FUNC_10()
{
    if (!VAR_11)
 return;

    if (VAR_6 && !FUNC_0())
    {
 int VAR_16 = FUNC_4(VAR_5, VAR_8->w_cursor);
 long VAR_17;
 colnr_T VAR_18, VAR_19;
 linenr_T VAR_20, VAR_21;


 if (VAR_16)
 {
     VAR_20 = VAR_5.lnum;
     VAR_21 = VAR_8->w_cursor.lnum;
 }
 else
 {
     VAR_20 = VAR_8->w_cursor.lnum;
     VAR_21 = VAR_5.lnum;
 }





 VAR_17 = VAR_21 - VAR_20 + 1;

 if (VAR_7 == VAR_0)
 {






     FUNC_2(VAR_8, &VAR_8->w_cursor, &VAR_5, &VAR_18, &VAR_19);



     FUNC_8((char *)VAR_13, "%ldx%ld", VAR_17,
           (long)(VAR_19 - VAR_18 + 1));
 }
 else if (VAR_7 == 'V' || VAR_5.lnum != VAR_8->w_cursor.lnum)
     FUNC_8((char *)VAR_13, "%ld", VAR_17);
 else
 {
     char_u *VAR_22, *VAR_23;
     int VAR_24;
     int VAR_25 = 0;
     int VAR_26 = 0;

     if (VAR_16)
     {
  VAR_22 = FUNC_7(&VAR_5);
  VAR_23 = FUNC_6();
     }
     else
     {
  VAR_22 = FUNC_6();
  VAR_23 = FUNC_7(&VAR_5);
     }
     while ((*VAR_12 != 'e') ? VAR_22 <= VAR_23 : VAR_22 < VAR_23)
     {



  VAR_24 = (*VAR_22 == VAR_2) ? 0 : 1;

  if (VAR_24 == 0)
  {
      ++VAR_25;
      ++VAR_26;
      break;
  }
  VAR_25 += VAR_24;
  ++VAR_26;
  VAR_22 += VAR_24;
     }
     if (VAR_25 == VAR_26)
  FUNC_8((char *)VAR_13, "%d", VAR_26);
     else
  FUNC_8((char *)VAR_13, "%d-%d", VAR_26, VAR_25);
 }
 VAR_13[VAR_3] = VAR_2;
 VAR_15 = VAR_4;
    }
    else
    {
 VAR_13[0] = VAR_2;
 VAR_15 = VAR_1;


 if (VAR_14)
     return;
    }

    FUNC_1();
}
