
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct match {int offp; TYPE_2__* pmatch; TYPE_1__* g; } ;
typedef size_t sopno ;
struct TYPE_4__ {char* rm_so; char* rm_eo; } ;
struct TYPE_3__ {int nsub; int * strip; } ;


 int FUNC_0 (char*,char*,char*,size_t,size_t) ;
 int FUNC_1 (int ) ;

 size_t FUNC_2 (int ) ;






 char* FUNC_3 (struct match*,char*,char*,size_t,size_t) ;

__attribute__((used)) static char *
FUNC_4(struct match *VAR_0, char *VAR_1, char *VAR_2, sopno VAR_3, sopno VAR_4)
{
 int VAR_5;
 sopno VAR_6;
 sopno VAR_7;
 char *VAR_8;
 char *VAR_9;
 char *VAR_10;
 char *VAR_11;
 sopno VAR_12;
 sopno VAR_13;
 char *VAR_14;
 char *VAR_15;
 char *VAR_16;
 char *VAR_17;

 FUNC_0("diss", VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_8 = VAR_1;
 for (VAR_6 = VAR_3; VAR_6 < VAR_4; VAR_6 = VAR_7) {

  VAR_7 = VAR_6;
  switch (FUNC_1(VAR_0->g->strip[VAR_7])) {
  case 134:
  case 133:
   VAR_7 += FUNC_2(VAR_0->g->strip[VAR_7]);
   break;
  case 141:
   while (FUNC_1(VAR_0->g->strip[VAR_7]) != 130)
    VAR_7 += FUNC_2(VAR_0->g->strip[VAR_7]);
   break;
  }
  VAR_7++;


  switch (FUNC_1(VAR_0->g->strip[VAR_6])) {
  case 140:
   break;
  case 142:
   VAR_8++;
   break;
  case 144:
  case 139:
  case 143:
  case 138:
   break;
  case 147:
  case 146:
   VAR_8++;
   break;
  case 145:
  case 131:
   break;

  case 133:
   VAR_9 = VAR_2;
   for (;;) {

    VAR_10 = FUNC_3(VAR_0, VAR_8, VAR_9, VAR_6, VAR_7);
    if (VAR_10) {

     VAR_11 = FUNC_3(VAR_0, VAR_10, VAR_2, VAR_7, VAR_4);
     if (VAR_11 == VAR_2)
      break;

     VAR_9 = VAR_10 - 1;
    }
   }
   VAR_12 = VAR_6 + 1;
   VAR_13 = VAR_7 - 1;

   if (FUNC_3(VAR_0, VAR_8, VAR_10, VAR_12, VAR_13) != ((void*)0)) {
    VAR_17 = FUNC_4(VAR_0, VAR_8, VAR_10, VAR_12, VAR_13);
    if (VAR_17 != VAR_10) return ((void*)0);
   } else if (VAR_8 != VAR_10) return ((void*)0);
   VAR_8 = VAR_10;
   break;
  case 134:
   VAR_9 = VAR_2;
   for (;;) {

    VAR_10 = FUNC_3(VAR_0, VAR_8, VAR_9, VAR_6, VAR_7);
    if (VAR_10 != ((void*)0)) {

     VAR_11 = FUNC_3(VAR_0, VAR_10, VAR_2, VAR_7, VAR_4);
     if (VAR_11 == VAR_2)
      break;

     VAR_9 = VAR_10 - 1;
    }
   }
   VAR_12 = VAR_6 + 1;
   VAR_13 = VAR_7 - 1;
   VAR_14 = VAR_8;
   VAR_16 = VAR_14;
   for (;;) {
    VAR_15 = FUNC_3(VAR_0, VAR_14, VAR_10, VAR_12, VAR_13);
    if (!VAR_15 || VAR_15 == VAR_14)
     break;
    VAR_16 = VAR_14;
    VAR_14 = VAR_15;
   }
   if (!VAR_15) {

    VAR_15 = VAR_14;
    VAR_14 = VAR_16;
   }
   if (VAR_15 == VAR_10) {
    if (FUNC_3(VAR_0, VAR_14, VAR_15, VAR_12, VAR_13) == VAR_10) {
     VAR_17 = FUNC_4(VAR_0, VAR_14, VAR_15, VAR_12, VAR_13);
     if (VAR_17 == VAR_15) {
      VAR_8 = VAR_10;
     }
    }
   }
   break;
  case 141:
   VAR_9 = VAR_2;
   for (;;) {

    VAR_10 = FUNC_3(VAR_0, VAR_8, VAR_9, VAR_6, VAR_7);
    if (VAR_10) {

     VAR_11 = FUNC_3(VAR_0, VAR_10, VAR_2, VAR_7, VAR_4);
     if (VAR_11 == VAR_2)
      break;

     VAR_9 = VAR_10 - 1;
    }
   }
   VAR_12 = VAR_6 + 1;
   VAR_13 = VAR_6 + FUNC_2(VAR_0->g->strip[VAR_6]) - 1;
   if (FUNC_1(VAR_0->g->strip[VAR_13]) != 136) {
    break;
   }
   for (;;) {
    if (FUNC_3(VAR_0, VAR_8, VAR_10, VAR_12, VAR_13) == VAR_10)
     break;

    if (FUNC_1(VAR_0->g->strip[VAR_13]) == 136) {
     VAR_13++;
     if (FUNC_1(VAR_0->g->strip[VAR_13]) == 135) {
      VAR_12 = VAR_13 + 1;
      VAR_13 += FUNC_2(VAR_0->g->strip[VAR_13]);
      if (FUNC_1(VAR_0->g->strip[VAR_13]) == 135) {
       VAR_13--;
      } else {
       if (FUNC_1(VAR_0->g->strip[VAR_13]) != 130) {
        break;
       }
      }
     }
    }
   }
   VAR_17 = FUNC_4(VAR_0, VAR_8, VAR_10, VAR_12, VAR_13);
   if (VAR_17 == VAR_10) {
    VAR_8 = VAR_10;
   }
   break;
  case 129:
  case 128:
  case 136:
  case 135:
  case 130:
   break;
  case 137:
   VAR_5 = FUNC_2(VAR_0->g->strip[VAR_6]);
   if (VAR_5 > 0 && VAR_5 <= VAR_0->g->nsub) {
    VAR_0->pmatch[VAR_5].rm_so = VAR_8 - VAR_0->offp;
   }
   break;
  case 132:
   VAR_5 = FUNC_2(VAR_0->g->strip[VAR_6]);
   if (VAR_5 > 0 && VAR_5 <= VAR_0->g->nsub) {
    VAR_0->pmatch[VAR_5].rm_eo = VAR_8 - VAR_0->offp;
   }
   break;
  default:
   break;
  }
 }

 if (VAR_8 == VAR_2) {
  return VAR_8;
 } else {
  return ((void*)0);
 }
}
