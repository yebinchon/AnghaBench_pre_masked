
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t seq_keysym; struct TYPE_8__* next; } ;
typedef TYPE_2__ key_translation ;
struct TYPE_7__ {TYPE_2__** keymap; } ;
struct TYPE_9__ {TYPE_1__ xkeymap; } ;
typedef TYPE_3__ RDPCLIENT ;
typedef size_t KeySym ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*,char*,size_t) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 size_t FUNC_5 (char*,char*) ;
 size_t FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(RDPCLIENT * VAR_3, char *VAR_4, char *VAR_5)
{
 KeySym VAR_6;
 key_translation *VAR_7, **VAR_8;
 size_t VAR_9;
 char VAR_10[VAR_1];


 VAR_9 = FUNC_6(VAR_4, " \t");
 VAR_4 += VAR_9;


 VAR_9 = FUNC_5(VAR_4, " \t\0");
 FUNC_1(VAR_10, VAR_4, VAR_9 + 1);
 VAR_4 += VAR_9;

 VAR_6 = FUNC_2(VAR_10);
 if (VAR_6 == VAR_2)
 {
  FUNC_0(("Bad keysym \"%s\" in keymap %s (ignoring line)\n", VAR_10, VAR_5));
  return;
 }


 FUNC_0(("Adding sequence for keysym (0x%lx, %s) -> ", VAR_6, VAR_10));

 FUNC_3(VAR_3->xkeymap.keymap[VAR_6 & VAR_0]);
 VAR_8 = &VAR_3->xkeymap.keymap[VAR_6 & VAR_0];

 while (*VAR_4)
 {

  VAR_9 = FUNC_6(VAR_4, " \t");
  VAR_4 += VAR_9;


  VAR_9 = FUNC_5(VAR_4, " \t\0");
  FUNC_1(VAR_10, VAR_4, VAR_9 + 1);
  VAR_4 += VAR_9;

  VAR_6 = FUNC_2(VAR_10);
  if (VAR_6 == VAR_2)
  {
   FUNC_0(("Bad keysym \"%s\" in keymap %s (ignoring line)\n", VAR_10,
       VAR_5));
   return;
  }


  VAR_7 = (key_translation *) FUNC_7(sizeof(key_translation));
  FUNC_4(VAR_7, 0, sizeof(key_translation));
  *VAR_8 = VAR_7;
  VAR_8 = &VAR_7->next;
  VAR_7->seq_keysym = VAR_6;

  FUNC_0(("0x%x, ", (unsigned int) VAR_6));
 }
 FUNC_0(("\n"));
}
