
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int (* free ) (char*) ;} ;
struct TYPE_11__ {TYPE_7__* options; } ;
struct TYPE_10__ {TYPE_2__* assembler; } ;
struct TYPE_9__ {TYPE_1__* cur; } ;
struct TYPE_8__ {char const* features; } ;
typedef TYPE_3__ RCore ;
typedef TYPE_4__ RConfigNode ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_7__*,char*) ;
 int FUNC_2 (char*,char) ;
 char* FUNC_3 (char*,int) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(RCore *VAR_0, RConfigNode *VAR_1) {
 int VAR_2, VAR_3;

 if (VAR_0 && VAR_0->assembler && VAR_0->assembler->cur) {
  if (VAR_0->assembler->cur->features) {
   char *VAR_4 = FUNC_4 (VAR_0->assembler->cur->features);
   VAR_3 = FUNC_2 (VAR_4, ',');
   for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
    VAR_1->options->free = FUNC_0;
    const char *VAR_5 = FUNC_3 (VAR_4, VAR_2);
    if (VAR_5) {
     FUNC_1 (VAR_1->options, FUNC_4 (VAR_5));
    }
   }
   FUNC_0 (VAR_4);
  }
 }
}
