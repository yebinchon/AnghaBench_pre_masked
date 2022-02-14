
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef scalar_t__ mrb_bool ;
struct TYPE_3__ {int flags; } ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int VAR_0 ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 char* VAR_1 ;
 int FUNC_5 (int *,int ,char*,int) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,char*) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (char const*,char const*) ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state *VAR_2, mrb_value VAR_3, mrb_bool VAR_4)
{
  const char *VAR_5, *VAR_6;
  char VAR_7[4];
  mrb_value VAR_8 = FUNC_7(VAR_2, "\"");




  VAR_5 = FUNC_3(VAR_3); VAR_6 = FUNC_2(VAR_3);
  for (;VAR_5 < VAR_6; VAR_5++) {
    unsigned char VAR_9, VAR_10;
    VAR_9 = *VAR_5;
    if (VAR_9 == '"'|| VAR_9 == '\\' || (VAR_9 == '#' && FUNC_1(VAR_5+1, VAR_6))) {
      VAR_7[0] = '\\'; VAR_7[1] = VAR_9;
      FUNC_5(VAR_2, VAR_8, VAR_7, 2);
      continue;
    }
    if (FUNC_0(VAR_9)) {
      VAR_7[0] = VAR_9;
      FUNC_5(VAR_2, VAR_8, VAR_7, 1);
      continue;
    }
    switch (VAR_9) {
      case '\n': VAR_10 = 'n'; break;
      case '\r': VAR_10 = 'r'; break;
      case '\t': VAR_10 = 't'; break;
      case '\f': VAR_10 = 'f'; break;
      case '\013': VAR_10 = 'v'; break;
      case '\010': VAR_10 = 'b'; break;
      case '\007': VAR_10 = 'a'; break;
      case 033: VAR_10 = 'e'; break;
      default: VAR_10 = 0; break;
    }
    if (VAR_10) {
      VAR_7[0] = '\\';
      VAR_7[1] = (char)VAR_10;
      FUNC_5(VAR_2, VAR_8, VAR_7, 2);
      continue;
    }
    else {
      VAR_7[0] = '\\';
      VAR_7[1] = 'x';
      VAR_7[3] = VAR_1[VAR_9 % 16]; VAR_9 /= 16;
      VAR_7[2] = VAR_1[VAR_9 % 16];
      FUNC_5(VAR_2, VAR_8, VAR_7, 4);
      continue;
    }
  }
  FUNC_6(VAR_2, VAR_8, "\"");
  return VAR_8;
}
