
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int nexttype; scalar_t__ nextvalue; scalar_t__* now; int cflags; } ;
struct state {int dummy; } ;
struct cvec {int dummy; } ;
typedef scalar_t__ chr ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int const) ;
 struct cvec* FUNC_6 (struct vars*,scalar_t__ const*,scalar_t__ const*,int) ;
 struct cvec* FUNC_7 (struct vars*,scalar_t__,int) ;
 scalar_t__ FUNC_8 (struct vars*,scalar_t__ const*,scalar_t__ const*) ;
 int FUNC_9 (struct vars*,scalar_t__,struct state*,struct state*) ;
 struct cvec* FUNC_10 (struct vars*,scalar_t__,scalar_t__,int) ;
 scalar_t__* FUNC_11 (struct vars*) ;
 int FUNC_12 (struct vars*,struct cvec*,struct state*,struct state*) ;

__attribute__((used)) static void
FUNC_13(struct vars *VAR_6,
    struct state *VAR_7,
    struct state *VAR_8)
{
 chr VAR_9;
 chr VAR_10;
 struct cvec *VAR_11;
 const chr *VAR_12;
 const chr *VAR_13;
 chr VAR_14[1];


 switch (VAR_6->nexttype)
 {
  case 128:
   FUNC_0(VAR_3);
   return;
   break;
  case 129:
   VAR_14[0] = VAR_6->nextvalue;
   FUNC_2();

   if (!FUNC_5(128))
   {
    FUNC_9(VAR_6, VAR_14[0], VAR_7, VAR_8);
    return;
   }
   VAR_9 = FUNC_8(VAR_6, VAR_14, VAR_14 + 1);
   FUNC_3();
   break;
  case 131:
   VAR_12 = VAR_6->now;
   VAR_13 = FUNC_11(VAR_6);
   FUNC_1(VAR_12 < VAR_13, VAR_1);
   FUNC_3();
   VAR_9 = FUNC_8(VAR_6, VAR_12, VAR_13);
   FUNC_3();
   break;
  case 130:
   VAR_12 = VAR_6->now;
   VAR_13 = FUNC_11(VAR_6);
   FUNC_1(VAR_12 < VAR_13, VAR_1);
   FUNC_3();
   VAR_9 = FUNC_8(VAR_6, VAR_12, VAR_13);
   FUNC_3();
   VAR_11 = FUNC_7(VAR_6, VAR_9, (VAR_6->cflags & VAR_4));
   FUNC_3();
   FUNC_12(VAR_6, VAR_11, VAR_7, VAR_8);
   return;
   break;
  case 132:
   VAR_12 = VAR_6->now;
   VAR_13 = FUNC_11(VAR_6);
   FUNC_1(VAR_12 < VAR_13, VAR_2);
   FUNC_3();
   VAR_11 = FUNC_6(VAR_6, VAR_12, VAR_13, (VAR_6->cflags & VAR_4));
   FUNC_3();
   FUNC_12(VAR_6, VAR_11, VAR_7, VAR_8);
   return;
   break;
  default:
   FUNC_0(VAR_0);
   return;
   break;
 }

 if (FUNC_5(128))
 {
  FUNC_2();
  switch (VAR_6->nexttype)
  {
   case 129:
   case 128:
    VAR_14[0] = VAR_6->nextvalue;
    FUNC_2();
    VAR_10 = FUNC_8(VAR_6, VAR_14, VAR_14 + 1);
    FUNC_3();
    break;
   case 131:
    VAR_12 = VAR_6->now;
    VAR_13 = FUNC_11(VAR_6);
    FUNC_1(VAR_12 < VAR_13, VAR_1);
    FUNC_3();
    VAR_10 = FUNC_8(VAR_6, VAR_12, VAR_13);
    FUNC_3();
    break;
   default:
    FUNC_0(VAR_3);
    return;
    break;
  }
 }
 else
  VAR_10 = VAR_9;





 if (VAR_9 != VAR_10)
  FUNC_4(VAR_5);
 VAR_11 = FUNC_10(VAR_6, VAR_9, VAR_10, (VAR_6->cflags & VAR_4));
 FUNC_3();
 FUNC_12(VAR_6, VAR_11, VAR_7, VAR_8);
}
