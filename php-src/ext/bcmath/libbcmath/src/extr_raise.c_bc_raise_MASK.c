
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* bc_num ;
struct TYPE_16__ {scalar_t__ n_scale; int n_len; scalar_t__* n_value; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 char VAR_1 ;
 int FUNC_1 (int,long) ;
 int FUNC_2 (long,int ) ;
 char VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,TYPE_1__**,int) ;
 int FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,TYPE_1__**,int) ;
 long FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,int ,char*) ;

void
FUNC_9 (bc_num VAR_4, bc_num VAR_5, bc_num *VAR_6, int VAR_7)
{
   bc_num VAR_8, VAR_9;
   long VAR_10;
   int VAR_11;
   int VAR_12;
   int VAR_13;
   char VAR_14;


   if (VAR_5->n_scale != 0)
     FUNC_8 (((void*)0), VAR_0, "non-zero scale in exponent");
   VAR_10 = FUNC_7 (VAR_5);
   if (VAR_10 == 0 && (VAR_5->n_len > 1 || VAR_5->n_value[0] != 0))
       FUNC_8 (((void*)0), VAR_0, "exponent too large");


   if (VAR_10 == 0)
     {
       FUNC_5 (VAR_6);
       *VAR_6 = FUNC_3 (FUNC_0(VAR_3));
       return;
     }


   if (VAR_10 < 0)
     {
       VAR_14 = VAR_2;
       VAR_10 = -VAR_10;
       VAR_11 = VAR_7;
     }
   else
     {
       VAR_14 = VAR_1;
       VAR_11 = FUNC_2 (VAR_4->n_scale*VAR_10, FUNC_1(VAR_7, VAR_4->n_scale));
     }


   VAR_9 = FUNC_3 (VAR_4);
   VAR_12 = VAR_4->n_scale;
   while ((VAR_10 & 1) == 0)
     {
       VAR_12 = 2*VAR_12;
       FUNC_6 (VAR_9, VAR_9, &VAR_9, VAR_12);
       VAR_10 = VAR_10 >> 1;
     }
   VAR_8 = FUNC_3 (VAR_9);
   VAR_13 = VAR_12;
   VAR_10 = VAR_10 >> 1;


   while (VAR_10 > 0)
     {
       VAR_12 = 2*VAR_12;
       FUNC_6 (VAR_9, VAR_9, &VAR_9, VAR_12);
       if ((VAR_10 & 1) == 1) {
  VAR_13 = VAR_12 + VAR_13;
  FUNC_6 (VAR_8, VAR_9, &VAR_8, VAR_13);
       }
       VAR_10 = VAR_10 >> 1;
     }


   if (VAR_14)
     {
       FUNC_4 (FUNC_0(VAR_3), VAR_8, VAR_6, VAR_11);
       FUNC_5 (&VAR_8);
     }
   else
     {
       FUNC_5 (VAR_6);
       *VAR_6 = VAR_8;
       if ((*VAR_6)->n_scale > VAR_11)
  (*VAR_6)->n_scale = VAR_11;
     }
   FUNC_5 (&VAR_9);
}
