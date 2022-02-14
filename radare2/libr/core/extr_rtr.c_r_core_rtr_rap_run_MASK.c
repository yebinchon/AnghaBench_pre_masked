
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* context; } ;
struct TYPE_7__ {int io; } ;
struct TYPE_6__ {int breaked; } ;
typedef int RIODesc ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int ,char*,int,int) ;
 char* FUNC_5 (char*,char const*) ;

__attribute__((used)) static bool FUNC_6(RCore *VAR_1, const char *VAR_2) {
 char *VAR_3 = FUNC_5 ("rap://%s", VAR_2);
 int VAR_4 = VAR_0;
 RIODesc *VAR_5 = FUNC_4 (VAR_1->io, VAR_3, VAR_4, 0644);
 if (VAR_5) {
  if (FUNC_3 (VAR_1->io)) {
   if (!FUNC_1 (VAR_1, VAR_5)) {
    FUNC_0 ()->context->breaked = 1;
   }
   FUNC_2 (VAR_5);


  }
 } else {
  FUNC_0 ()->context->breaked = 1;
 }
 return !FUNC_0 ()->context->breaked;

}
