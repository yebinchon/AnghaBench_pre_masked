
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* print; int panels_root; } ;
struct TYPE_6__ {int cur_enabled; } ;
typedef int RStrBuf ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_12(RCore *VAR_3) {
 int VAR_4 = 0;
 RStrBuf *VAR_5, *VAR_6;
repeat:
 VAR_5 = FUNC_10 (((void*)0));
 VAR_6 = FUNC_10 (((void*)0));
 if (!VAR_5) {
  return 0;
 }
 FUNC_0 ();
 FUNC_5 (VAR_6, "Visual Help", VAR_2);
 FUNC_3 ("%s", FUNC_9 (VAR_6));
 FUNC_1 ();
 switch (FUNC_4 ()) {
 case 'q':
  FUNC_8 (VAR_5);
  return VAR_4;
 case '!':
  FUNC_6 (VAR_3, VAR_3->panels_root);
  break;
 case '?':
  FUNC_5 (VAR_5, "Visual mode help", VAR_0);
  FUNC_5 (VAR_5, "Function Keys: (See 'e key.'), defaults to", VAR_1);
  VAR_4 = FUNC_2 (FUNC_9 (VAR_5), "?");
  break;
 case 'v':
  FUNC_7 (VAR_5, "Visual Views:\n\n");
  FUNC_7 (VAR_5,
   " \\     toggle horizonal split mode\n"
   " tt     create a new tab (same as t+)\n"
   " t=     give a name to the current tab\n"
   " t-     close current tab\n"
   " th     select previous tab (same as tj)\n"
   " tl     select next tab (same as tk)\n"
   " t[1-9] select nth tab\n"
   " C   -> rotate scr.color=0,1,2,3\n"
   " R   -> rotate color theme with ecr command which honors scr.randpal\n"
  );
  VAR_4 = FUNC_2 (FUNC_9 (VAR_5), "?");
  break;
 case 'p':
  FUNC_7 (VAR_5, "Visual Print Modes:\n\n");
  FUNC_7 (VAR_5,
   " pP  -> change to the next/previous print mode (hex, dis, ..)\n"
   " TAB -> rotate between all the configurations for the current print mode\n"
  );
  VAR_4 = FUNC_2 (FUNC_9 (VAR_5), "?");
  break;
 case 'e':
  FUNC_7 (VAR_5, "Visual Evals:\n\n");
  FUNC_7 (VAR_5,
   " E      toggle asm.leahints\n"
   " &      rotate asm.bits=16,32,64\n"
  );
  VAR_4 = FUNC_2 (FUNC_9 (VAR_5), "?");
  break;
 case 'c':
  FUNC_11 (VAR_3, !VAR_3->print->cur_enabled);
  FUNC_8 (VAR_5);
  return VAR_4;
 case 'i':
  FUNC_7 (VAR_5, "Visual Insertion Help:\n\n");
  FUNC_7 (VAR_5,
   " i   -> insert bits, bytes or text depending on view\n"
   " a   -> assemble instruction and write the bytes in the current offset\n"
   " A   -> visual assembler\n"
   " +   -> increment value of byte\n"
   " -   -> decrement value of byte\n"
  );
  VAR_4 = FUNC_2 (FUNC_9 (VAR_5), "?");
  break;
 case 'd':
  FUNC_7 (VAR_5, "Visual Debugger Help:\n\n");
  FUNC_7 (VAR_5,
   " $   -> set the program counter (PC register)\n"
   " s   -> step in\n"
   " S   -> step over\n"
   " B   -> toggle breakpoint\n"
   " :dc -> continue\n"
  );
  VAR_4 = FUNC_2 (FUNC_9 (VAR_5), "?");
  break;
 case 'm':
  FUNC_7 (VAR_5, "Visual Moving Around:\n\n");
  FUNC_7 (VAR_5,
   " g        type flag/offset/register name to seek\n"
   " hl       seek to the next/previous byte\n"
   " jk       seek to the next row (core.offset += hex.cols)\n"
   " JK       seek one page down\n"
   " ^        seek to the beginning of the current map\n"
   " $        seek to the end of the current map\n"
   " c        toggle cursor mode (use hjkl to move and HJKL to select a range)\n"
   " mK/'K    mark/go to Key (any key)\n"
  );
  VAR_4 = FUNC_2 (FUNC_9 (VAR_5), "?");
  break;
 case 'a':
  FUNC_7 (VAR_5, "Visual Analysis:\n\n");
  FUNC_7 (VAR_5,
   " df -> define function\n"
   " du -> undefine function\n"
   " dc -> define as code\n"
   " dw -> define as dword (32bit)\n"
   " dw -> define as qword (64bit)\n"
   " dd -> define current block or selected bytes as data\n"
   " V  -> view graph (same as press the 'space' key)\n"
  );
  VAR_4 = FUNC_2 (FUNC_9 (VAR_5), "?");
  break;
 }
 FUNC_8 (VAR_5);
 FUNC_8 (VAR_6);
 goto repeat;
 return VAR_4;
}
