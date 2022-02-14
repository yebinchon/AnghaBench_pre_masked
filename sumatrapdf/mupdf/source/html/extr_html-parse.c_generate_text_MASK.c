
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct genstate {int at_bol; int emit_white; size_t last_brk_cls; int * pool; } ;
typedef int fz_pool ;
struct TYPE_17__ {scalar_t__ type; struct TYPE_17__* up; TYPE_1__* style; } ;
typedef TYPE_2__ fz_html_box ;
typedef int fz_context ;
struct TYPE_16__ {int white_space; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int *,int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int *,int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (int *,int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (int *,int *,TYPE_2__*,TYPE_2__*,char const*,char const*,int) ;
 int FUNC_5 (int *,TYPE_2__*,TYPE_2__*,int,struct genstate*) ;
 int FUNC_6 (int*,char const*) ;
 scalar_t__ FUNC_7 (char const) ;
 int** VAR_6 ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(fz_context *VAR_7, fz_html_box *VAR_8, const char *VAR_9, int VAR_10, struct genstate *VAR_11)
{
 fz_html_box *VAR_12;
 fz_pool *VAR_13 = VAR_11->pool;
 int VAR_14 = VAR_8->style->white_space & VAR_4;
 int VAR_15 = VAR_8->style->white_space & VAR_3;
 int VAR_16 = VAR_8->style->white_space & VAR_5;

 static const char *VAR_17 = " ";

 VAR_12 = VAR_8;
 while (VAR_12->type != VAR_0)
  VAR_12 = VAR_12->up;

 while (*VAR_9)
 {
  if (VAR_16 && (*VAR_9 == '\n' || *VAR_9 == '\r'))
  {
   if (VAR_9[0] == '\r' && VAR_9[1] == '\n')
    VAR_9 += 2;
   else
    VAR_9 += 1;
   FUNC_0(VAR_7, VAR_13, VAR_12, VAR_8);
   VAR_11->at_bol = 1;
  }
  else if (FUNC_7(*VAR_9))
  {
   if (VAR_14)
   {
    if (VAR_16)
     while (*VAR_9 == ' ' || *VAR_9 == '\t')
      ++VAR_9;
    else
     while (FUNC_7(*VAR_9))
      ++VAR_9;
    VAR_11->emit_white = 1;
   }
   else
   {

    if (VAR_15)
     FUNC_3(VAR_7, VAR_13, VAR_12, VAR_8);
    else
     FUNC_4(VAR_7, VAR_13, VAR_12, VAR_8, VAR_17, VAR_17+1, VAR_10);
    ++VAR_9;
   }
   VAR_11->last_brk_cls = VAR_2;
  }
  else
  {
   const char *VAR_18, *VAR_19 = VAR_9;
   int VAR_20;

   FUNC_5(VAR_7, VAR_12, VAR_8, VAR_10, VAR_11);

   if (VAR_11->at_bol)
    VAR_11->last_brk_cls = VAR_2;

   while (*VAR_9 && !FUNC_7(*VAR_9))
   {
    VAR_18 = VAR_9;
    VAR_9 += FUNC_6(&VAR_20, VAR_9);
    if (VAR_20 == 0xAD)
    {
     if (VAR_19 != VAR_18)
      FUNC_4(VAR_7, VAR_13, VAR_12, VAR_8, VAR_19, VAR_18, VAR_10);
     FUNC_2(VAR_7, VAR_13, VAR_12, VAR_8);
     VAR_19 = VAR_9;
     VAR_11->last_brk_cls = VAR_2;
    }
    else if (VAR_15)
    {
     int VAR_21 = FUNC_8(VAR_20);
     if (VAR_21 < VAR_1)
     {
      int VAR_22 = VAR_6[VAR_11->last_brk_cls][VAR_21];


      if (VAR_22 == '@') VAR_22 = '^';
      if (VAR_22 == '#') VAR_22 = '^';
      if (VAR_22 == '%') VAR_22 = '^';

      if (VAR_22 == '_')
      {
       if (VAR_19 != VAR_18)
        FUNC_4(VAR_7, VAR_13, VAR_12, VAR_8, VAR_19, VAR_18, VAR_10);
       FUNC_1(VAR_7, VAR_13, VAR_12, VAR_8);
       VAR_19 = VAR_18;
      }

      VAR_11->last_brk_cls = VAR_21;
     }
    }
   }
   if (VAR_19 != VAR_9)
    FUNC_4(VAR_7, VAR_13, VAR_12, VAR_8, VAR_19, VAR_9, VAR_10);

   VAR_11->at_bol = 0;
  }
 }
}
