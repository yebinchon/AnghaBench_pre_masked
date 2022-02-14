
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mark {int loc; } ;
struct TYPE_4__ {int end; int q; int text; int p; } ;
struct TYPE_3__ {int key; scalar_t__ mod; int x; int y; TYPE_2__* focus; int dialog; scalar_t__ plain; scalar_t__ right; scalar_t__ middle; scalar_t__ down; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int VAR_2 ;





 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 () ;
 int VAR_14 ;
 scalar_t__ FUNC_5 (int ,void*) ;
 int VAR_15 ;
 void* FUNC_6 (int ,int ,void*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 void* FUNC_10 (int ,int ,void*) ;
 void* FUNC_11 (int ,int ,void*) ;
 int FUNC_12 () ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_13 (void*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int VAR_18 ;
 struct mark* VAR_19 ;
 scalar_t__ FUNC_17 (struct mark*) ;
 int VAR_20 ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (struct mark) ;
 struct mark FUNC_24 () ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 TYPE_2__ VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 int * VAR_29 ;
 int FUNC_25 (int,int,int) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 TYPE_1__ VAR_34 ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ) ;

__attribute__((used)) static void FUNC_34(void)
{
 if (VAR_34.key == VAR_2 && VAR_34.mod == VAR_1)
  FUNC_12();

 if (VAR_34.down || VAR_34.middle || VAR_34.right || VAR_34.key)
  VAR_31 = 0;

 if (!VAR_34.focus && VAR_34.key && VAR_34.plain)
 {
  switch (VAR_34.key)
  {
  case 134: FUNC_3(); VAR_29 = ((void*)0); break;
  case 133: VAR_34.dialog = VAR_16; break;
  case 'a': FUNC_29(); break;
  case 'o': FUNC_31(); break;
  case 'L': VAR_32 = !VAR_32; break;
  case 'F': VAR_30 = !VAR_30; break;
  case 'i': VAR_31 = !VAR_31; break;
  case 'r': FUNC_22(); break;
  case 'q': FUNC_12(); break;
  case 'S': FUNC_4(); break;

  case '>': VAR_18 = VAR_20 > 0 ? VAR_20 : VAR_18 + 1; FUNC_21(); break;
  case '<': VAR_18 = VAR_20 > 0 ? VAR_20 : VAR_18 - 1; FUNC_21(); break;

  case 'C': VAR_12 = !VAR_12; break;
  case 'I': VAR_8 = !VAR_8; break;
  case 'e': VAR_11 = !VAR_11; break;
  case 'E': VAR_7 = !VAR_7; break;
  case 'f': FUNC_30(); break;
  case 'w': FUNC_26(); break;
  case 'W': FUNC_2(); break;
  case 'H': FUNC_1(); break;
  case 'Z': FUNC_0(); break;
  case 'z': FUNC_25(VAR_20 > 0 ? VAR_20 : VAR_0, VAR_4/2, VAR_3/2); break;
  case '+': FUNC_25(FUNC_32(VAR_13), VAR_34.x, VAR_34.y); break;
  case '-': FUNC_25(FUNC_33(VAR_13), VAR_34.x, VAR_34.y); break;
  case '[': VAR_10 -= 90; break;
  case ']': VAR_10 += 90; break;
  case 'k': case 128: VAR_22 -= 10; break;
  case 'j': case 135: VAR_22 += 10; break;
  case 'h': case 132: VAR_21 -= 10; break;
  case 'l': case 129: VAR_21 += 10; break;

  case 'b': VAR_20 = FUNC_9(VAR_20, 1); while (VAR_20--) FUNC_27(); break;
  case ' ': VAR_20 = FUNC_9(VAR_20, 1); while (VAR_20--) FUNC_28(); break;
  case 'g': FUNC_16(VAR_20 - 1); break;
  case 'G': FUNC_15(FUNC_7(VAR_5, VAR_14)); break;

  case ',': case 130:
   VAR_20 = FUNC_9(VAR_20, 1);
   while (VAR_20--)
    VAR_9 = FUNC_11(VAR_5, VAR_14, VAR_9);
   break;
  case '.': case 131:
   VAR_20 = FUNC_9(VAR_20, 1);
   while (VAR_20--)
    VAR_9 = FUNC_10(VAR_5, VAR_14, VAR_9);
   break;

  case 'A':
   if (VAR_20 == 0)
    VAR_6 = (VAR_6 == 8 ? 0 : 8);
   else
    VAR_6 = VAR_20;
   break;

  case 'm':
   if (VAR_20 == 0)
    FUNC_20();
   else if (VAR_20 > 0 && VAR_20 < (int)FUNC_17(VAR_19))
    VAR_19[VAR_20] = FUNC_24();
   break;
  case 't':
   if (VAR_20 == 0)
   {
    if (VAR_17 > 0)
     FUNC_19();
   }
   else if (VAR_20 > 0 && VAR_20 < (int)FUNC_17(VAR_19))
   {
    struct mark VAR_35 = VAR_19[VAR_20];
    FUNC_23(VAR_35);
    FUNC_15(VAR_35.loc);
   }
   break;
  case 'T':
   if (VAR_20 == 0)
   {
    if (VAR_15 > 0)
     FUNC_18();
   }
   break;

  case '/':
   FUNC_3();
   VAR_24 = 1;
   VAR_33 = 1;
   VAR_34.focus = &VAR_26;
   VAR_26.p = VAR_26.text;
   VAR_26.q = VAR_26.end;
   break;
  case '?':
   FUNC_3();
   VAR_24 = -1;
   VAR_33 = 1;
   VAR_34.focus = &VAR_26;
   VAR_26.p = VAR_26.text;
   VAR_26.q = VAR_26.end;
   break;
  case 'N':
   VAR_24 = -1;
   VAR_23 = !!VAR_27;
   if (FUNC_5(VAR_25, VAR_9))
   {
    VAR_28 = FUNC_11(VAR_5, VAR_14, VAR_9);
    if (FUNC_13(VAR_28))
     VAR_23 = 0;
   }
   else
   {
    VAR_28 = VAR_9;
   }
   VAR_25 = FUNC_8(-1, -1);
   break;
  case 'n':
   VAR_24 = 1;
   VAR_23 = !!VAR_27;
   if (FUNC_5(VAR_25, VAR_9))
   {
    VAR_28 = FUNC_10(VAR_5, VAR_14, VAR_9);
    if (FUNC_14(VAR_28))
     VAR_23 = 0;
   }
   else
   {
    VAR_28 = VAR_9;
   }
   VAR_25 = FUNC_8(-1, -1);
   break;
  }

  if (VAR_34.key >= '0' && VAR_34.key <= '9')
   VAR_20 = VAR_20 * 10 + VAR_34.key - '0';
  else
   VAR_20 = 0;

  VAR_9 = FUNC_6(VAR_5, VAR_14, VAR_9);
  while (VAR_10 < 0) VAR_10 += 360;
  while (VAR_10 >= 360) VAR_10 -= 360;

  if (!FUNC_5(VAR_25, VAR_9))
   VAR_25 = FUNC_8(-1, -1);

  VAR_34.key = 0;
 }
}
