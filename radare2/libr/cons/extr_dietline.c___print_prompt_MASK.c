
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int index; int length; scalar_t__ data; } ;
struct TYPE_9__ {char* prompt; TYPE_2__ buffer; } ;
struct TYPE_8__ {int rows; TYPE_1__* line; } ;
struct TYPE_6__ {scalar_t__ prompt_type; } ;
typedef TYPE_3__ RCons ;


 char* VAR_0 ;
 TYPE_5__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int,int,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 TYPE_3__* FUNC_9 () ;
 int FUNC_10 (char*) ;
 int VAR_3 ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static void FUNC_12() {
        RCons *VAR_4 = FUNC_9 ();
 int VAR_5 = FUNC_7 (((void*)0)) - 2;
 int VAR_6 = FUNC_0 (1, FUNC_11 (VAR_1.buffer.data));
 int VAR_7, VAR_8, VAR_9 = FUNC_0 (1, VAR_5 - FUNC_10 (VAR_1.prompt) - 2);
 if (VAR_4->line->prompt_type == VAR_2) {
                FUNC_8 (0, VAR_4->rows);
                FUNC_6 ();
 }
 FUNC_5 (0);
 FUNC_4 ("\r%s%s", VAR_0, VAR_1.prompt);
 FUNC_3 (VAR_1.buffer.data, 1, FUNC_1 (VAR_9, VAR_6), VAR_3);
 FUNC_4 ("\r%s", VAR_1.prompt);
 if (VAR_1.buffer.index > VAR_9) {
  FUNC_4 ("< ");
  VAR_8 = VAR_1.buffer.index - VAR_9;
  if (VAR_8 > sizeof (VAR_1.buffer.data)) {
   VAR_8 = sizeof (VAR_1.buffer.data) - 1;
  }
 } else {
  VAR_8 = 0;
 }
 VAR_7 = VAR_1.buffer.index - VAR_8;
 if (VAR_7 > 0 && (VAR_8 + VAR_7) <= VAR_1.buffer.length) {
  FUNC_3 (VAR_1.buffer.data + VAR_8, 1, VAR_7, VAR_3);
 }
 FUNC_2 (VAR_3);
}
