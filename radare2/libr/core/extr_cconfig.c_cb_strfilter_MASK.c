
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* value; } ;
struct TYPE_6__ {TYPE_1__* bin; } ;
struct TYPE_5__ {char strfilter; } ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RConfigNode ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore*) VAR_0;
 RConfigNode *VAR_3 = (RConfigNode*) VAR_1;
 if (VAR_3->value[0] == '?') {
  if (FUNC_2 (VAR_3->value) > 1 && VAR_3->value[1] == '?') {
   FUNC_1 ("Valid values for bin.str.filter:\n"
    "a  only alphanumeric printable\n"
    "8  only strings with utf8 chars\n"
    "p  file/directory paths\n"
    "e  email-like addresses\n"
    "u  urls\n"
    "i  IPv4 address-like strings\n"
    "U  only uppercase strings\n"
    "f  format-strings\n");
  } else {
   FUNC_0 (VAR_3);
  }
  return 0;
 } else {
  VAR_2->bin->strfilter = VAR_3->value[0];
 }
 return 1;
}
