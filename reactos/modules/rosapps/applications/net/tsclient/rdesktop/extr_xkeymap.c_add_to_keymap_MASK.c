
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16 ;
struct TYPE_8__ {int modifiers; int scancode; } ;
typedef TYPE_2__ key_translation ;
struct TYPE_7__ {TYPE_2__** keymap; } ;
struct TYPE_9__ {TYPE_1__ xkeymap; } ;
typedef TYPE_3__ RDPCLIENT ;
typedef size_t KeySym ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(RDPCLIENT * VAR_2, char *VAR_3, uint8 VAR_4, uint16 VAR_5, char *VAR_6)
{
 KeySym VAR_7;
 key_translation *VAR_8;

 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7 == VAR_1)
 {
  FUNC_0(("Bad keysym \"%s\" in keymap %s (ignoring)\n", VAR_3, VAR_6));
  return;
 }

 FUNC_0(("Adding translation, keysym=0x%x, scancode=0x%x, "
     "modifiers=0x%x\n", (unsigned int) VAR_7, VAR_4, VAR_5));

 VAR_8 = (key_translation *) FUNC_4(sizeof(key_translation));
 FUNC_3(VAR_8, 0, sizeof(key_translation));
 VAR_8->scancode = VAR_4;
 VAR_8->modifiers = VAR_5;
 FUNC_2(VAR_2->xkeymap.keymap[VAR_7 & VAR_0]);
 VAR_2->xkeymap.keymap[VAR_7 & VAR_0] = VAR_8;

 return;
}
