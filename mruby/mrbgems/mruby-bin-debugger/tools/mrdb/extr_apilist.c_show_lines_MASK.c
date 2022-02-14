
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ lineno; int * fp; } ;
typedef TYPE_1__ source_file ;
typedef int buf ;


 int VAR_0 ;
 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int *) ;

__attribute__((used)) static void
FUNC_3(source_file *VAR_1, uint16_t VAR_2, uint16_t VAR_3)
{
  char VAR_4[VAR_0];
  int VAR_5 = 1, VAR_6 = 0, VAR_7 = 0;

  if (VAR_1->fp == ((void*)0)) {
    return;
  }

  while (FUNC_0(VAR_4, sizeof(VAR_4), VAR_1->fp) != ((void*)0)) {
    VAR_6 = FUNC_2(VAR_4, VAR_1->fp);

    if (VAR_2 <= VAR_1->lineno) {
      if (VAR_5) {
        FUNC_1("%-8d", VAR_1->lineno);
      }
      VAR_5 = VAR_6;
      FUNC_1(VAR_6 ? "%s\n" : "%s", VAR_4);
      VAR_7 = 1;
    }

    if (VAR_6) {
      if (VAR_3 < ++VAR_1->lineno) {
        break;
      }
    }
  }

  if (VAR_7 && !VAR_6) {
    FUNC_1("\n");
  }
}
