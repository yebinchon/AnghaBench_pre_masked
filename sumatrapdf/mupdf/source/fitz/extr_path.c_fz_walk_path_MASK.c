
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int (* closepath ) (int *,void*) ;int (* lineto ) (int *,void*,float,float) ;int (* moveto ) (int *,void*,float,float) ;int (* rectto ) (int *,void*,float,float,float,float) ;int (* curveto ) (int *,void*,float,float,float,float,float,float) ;int (* quadto ) (int *,void*,float,float,float,float) ;int (* curvetoy ) (int *,void*,float,float,float,float) ;int (* curvetov ) (int *,void*,float,float,float,float) ;} ;
typedef TYPE_1__ fz_path_walker ;
struct TYPE_7__ {int packed; int cmd_len; float* coords; int* cmds; } ;
typedef TYPE_2__ fz_path ;
struct TYPE_8__ {int cmd_len; size_t coord_len; } ;
typedef TYPE_3__ fz_packed_path ;
typedef int fz_context ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,void*,float,float,float,float,float,float) ;
 int FUNC_2 (int *,void*,float,float,float,float,float,float) ;
 int FUNC_3 (int *,void*) ;
 int FUNC_4 (int *,void*,float,float) ;
 int FUNC_5 (int *,void*) ;
 int FUNC_6 (int *,void*,float,float) ;
 int FUNC_7 (int *,void*) ;
 int FUNC_8 (int *,void*,float,float) ;
 int FUNC_9 (int *,void*) ;
 int FUNC_10 (int *,void*,float,float) ;
 int FUNC_11 (int *,void*) ;
 int FUNC_12 (int *,void*) ;
 int FUNC_13 (int *,void*,float,float) ;
 int FUNC_14 (int *,void*) ;
 int FUNC_15 (int *,void*,float,float,float,float) ;
 int FUNC_16 (int *,void*,float,float) ;
 int FUNC_17 (int *,void*,float,float) ;
 int FUNC_18 (int *,void*,float,float) ;
 int FUNC_19 (int *,void*,float,float) ;
 int FUNC_20 (int *,void*) ;
 int FUNC_21 (int *,void*,float,float,float,float) ;
 int FUNC_22 (int *,void*,float,float,float,float,float,float) ;
 int FUNC_23 (int *,void*) ;
 int FUNC_24 (int *,void*,float,float,float,float) ;
 int FUNC_25 (int *,void*,float,float,float,float,float,float) ;
 int FUNC_26 (int *,void*) ;
 int FUNC_27 (int *,void*,float,float,float,float) ;

void FUNC_28(fz_context *VAR_0, const fz_path *VAR_1, const fz_path_walker *VAR_2, void *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 float VAR_7, VAR_8, VAR_9, VAR_10;
 uint8_t *VAR_11;
 float *VAR_12;

 switch (VAR_1->packed)
 {
 case 133:
 case 134:
  VAR_6 = VAR_1->cmd_len;
  VAR_12 = VAR_1->coords;
  VAR_11 = VAR_1->cmds;
  break;
 case 135:
  VAR_6 = ((fz_packed_path *)VAR_1)->cmd_len;
  VAR_12 = (float *)&((fz_packed_path *)VAR_1)[1];
  VAR_11 = (uint8_t *)&VAR_12[((fz_packed_path *)VAR_1)->coord_len];
  break;
 default:
  FUNC_0("This never happens" == ((void*)0));
  return;
 }

 if (VAR_6 == 0)
  return;

 for (VAR_5=0, VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
 {
  uint8_t VAR_13 = VAR_11[VAR_4];

  switch (VAR_13)
  {
  case 149:
  case 148:
   VAR_2->curveto(VAR_0, VAR_3,
     VAR_12[VAR_5],
     VAR_12[VAR_5+1],
     VAR_12[VAR_5+2],
     VAR_12[VAR_5+3],
     VAR_7 = VAR_12[VAR_5+4],
     VAR_8 = VAR_12[VAR_5+5]);
   VAR_5 += 6;
   if (VAR_13 == 148)
   {
    if (VAR_2->closepath)
     VAR_2->closepath(VAR_0, VAR_3);
    VAR_7 = VAR_9;
    VAR_8 = VAR_10;
   }
   break;
  case 147:
  case 146:
   if (VAR_2->curvetov)
    VAR_2->curvetov(VAR_0, VAR_3,
      VAR_12[VAR_5],
      VAR_12[VAR_5+1],
      VAR_7 = VAR_12[VAR_5+2],
      VAR_8 = VAR_12[VAR_5+3]);
   else
   {
    VAR_2->curveto(VAR_0, VAR_3,
      VAR_7,
      VAR_8,
      VAR_12[VAR_5],
      VAR_12[VAR_5+1],
      VAR_12[VAR_5+2],
      VAR_12[VAR_5+3]);
    VAR_7 = VAR_12[VAR_5+2];
    VAR_8 = VAR_12[VAR_5+3];
   }
   VAR_5 += 4;
   if (VAR_13 == 146)
   {
    if (VAR_2->closepath)
     VAR_2->closepath(VAR_0, VAR_3);
    VAR_7 = VAR_9;
    VAR_8 = VAR_10;
   }
   break;
  case 145:
  case 144:
   if (VAR_2->curvetoy)
    VAR_2->curvetoy(VAR_0, VAR_3,
      VAR_12[VAR_5],
      VAR_12[VAR_5+1],
      VAR_7 = VAR_12[VAR_5+2],
      VAR_8 = VAR_12[VAR_5+3]);
   else
    VAR_2->curveto(VAR_0, VAR_3,
      VAR_12[VAR_5],
      VAR_12[VAR_5+1],
      VAR_12[VAR_5+2],
      VAR_12[VAR_5+3],
      VAR_7 = VAR_12[VAR_5+2],
      VAR_8 = VAR_12[VAR_5+3]);
   VAR_5 += 4;
   if (VAR_13 == 144)
   {
    if (VAR_2->closepath)
     VAR_2->closepath(VAR_0, VAR_3);
    VAR_7 = VAR_9;
    VAR_8 = VAR_10;
   }
   break;
  case 132:
  case 131:
   if (VAR_2->quadto)
    VAR_2->quadto(VAR_0, VAR_3,
     VAR_12[VAR_5],
     VAR_12[VAR_5+1],
     VAR_7 = VAR_12[VAR_5+2],
     VAR_8 = VAR_12[VAR_5+3]);
   else
   {
    float VAR_14 = VAR_12[VAR_5] * 2;
    float VAR_15 = VAR_12[VAR_5+1] * 2;
    float VAR_16 = (VAR_7 + VAR_14) / 3;
    float VAR_17 = (VAR_8 + VAR_15) / 3;
    VAR_7 = VAR_12[VAR_5+2];
    VAR_8 = VAR_12[VAR_5+3];
    VAR_14 = (VAR_14 + VAR_7) / 3;
    VAR_15 = (VAR_15 + VAR_8) / 3;

    VAR_2->curveto(VAR_0, VAR_3,
     VAR_16,
     VAR_17,
     VAR_14,
     VAR_15,
     VAR_7,
     VAR_8);
   }
   VAR_5 += 4;
   if (VAR_13 == 131)
   {
    if (VAR_2->closepath)
     VAR_2->closepath(VAR_0, VAR_3);
    VAR_7 = VAR_9;
    VAR_8 = VAR_10;
   }
   break;
  case 137:
  case 136:
   VAR_2->moveto(VAR_0, VAR_3,
    VAR_7 = VAR_12[VAR_5],
    VAR_8 = VAR_12[VAR_5+1]);
   VAR_5 += 2;
   VAR_9 = VAR_7;
   VAR_10 = VAR_8;
   if (VAR_13 == 136)
   {
    if (VAR_2->closepath)
     VAR_2->closepath(VAR_0, VAR_3);
    VAR_7 = VAR_9;
    VAR_8 = VAR_10;
   }
   break;
  case 139:
  case 138:
   VAR_2->lineto(VAR_0, VAR_3,
    VAR_7 = VAR_12[VAR_5],
    VAR_8 = VAR_12[VAR_5+1]);
   VAR_5 += 2;
   if (VAR_13 == 138)
   {
    if (VAR_2->closepath)
     VAR_2->closepath(VAR_0, VAR_3);
    VAR_7 = VAR_9;
    VAR_8 = VAR_10;
   }
   break;
  case 141:
  case 140:
   VAR_2->lineto(VAR_0, VAR_3,
    VAR_7 = VAR_12[VAR_5],
    VAR_8);
   VAR_5 += 1;
   if (VAR_13 == 140)
   {
    if (VAR_2->closepath)
     VAR_2->closepath(VAR_0, VAR_3);
    VAR_7 = VAR_9;
    VAR_8 = VAR_10;
   }
   break;
  case 129:
  case 128:
   VAR_2->lineto(VAR_0, VAR_3,
    VAR_7,
    VAR_8 = VAR_12[VAR_5]);
   VAR_5 += 1;
   if (VAR_13 == 128)
   {
    if (VAR_2->closepath)
     VAR_2->closepath(VAR_0, VAR_3);
    VAR_7 = VAR_9;
    VAR_8 = VAR_10;
   }
   break;
  case 143:
  case 142:
   VAR_2->lineto(VAR_0, VAR_3,
    VAR_7,
    VAR_8);
   if (VAR_13 == 142)
   {
    if (VAR_2->closepath)
     VAR_2->closepath(VAR_0, VAR_3);
    VAR_7 = VAR_9;
    VAR_8 = VAR_10;
   }
   break;
  case 130:
   if (VAR_2->rectto)
   {
    VAR_2->rectto(VAR_0, VAR_3,
      VAR_7 = VAR_12[VAR_5],
      VAR_8 = VAR_12[VAR_5+1],
      VAR_12[VAR_5+2],
      VAR_12[VAR_5+3]);
   }
   else
   {
    VAR_2->moveto(VAR_0, VAR_3,
     VAR_7 = VAR_12[VAR_5],
     VAR_8 = VAR_12[VAR_5+1]);
    VAR_2->lineto(VAR_0, VAR_3,
     VAR_12[VAR_5+2],
     VAR_12[VAR_5+1]);
    VAR_2->lineto(VAR_0, VAR_3,
     VAR_12[VAR_5+2],
     VAR_12[VAR_5+3]);
    VAR_2->lineto(VAR_0, VAR_3,
     VAR_12[VAR_5],
     VAR_12[VAR_5+3]);
    if (VAR_2->closepath)
     VAR_2->closepath(VAR_0, VAR_3);
   }
   VAR_9 = VAR_7;
   VAR_10 = VAR_8;
   VAR_5 += 4;
   break;
  }
 }
}
