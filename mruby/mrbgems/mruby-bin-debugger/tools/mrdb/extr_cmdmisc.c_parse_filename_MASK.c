
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_state ;
typedef int mrb_bool ;
struct TYPE_3__ {char* filename; } ;
typedef TYPE_1__ listcmd_parser_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static mrb_bool
FUNC_5(mrb_state *VAR_2, char **VAR_3, listcmd_parser_state *VAR_4)
{
  char *VAR_5;
  int VAR_6;

  if (VAR_4->filename != ((void*)0)) {
    FUNC_0(VAR_2, VAR_4->filename);
    VAR_4->filename = ((void*)0);
  }

  if ((VAR_5 = FUNC_2(*VAR_3, ':')) != ((void*)0)) {
    VAR_6 = VAR_5 - *VAR_3;
  }
  else {
    VAR_6 = FUNC_3(*VAR_3);
  }

  if (VAR_6 > 0) {
    VAR_4->filename = (char*)FUNC_1(VAR_2, VAR_6 + 1);
    FUNC_4(VAR_4->filename, *VAR_3, VAR_6);
    VAR_4->filename[VAR_6] = '\0';
    *VAR_3 += VAR_6;
    return VAR_1;
  }
  else {
    return VAR_0;
  }
}
