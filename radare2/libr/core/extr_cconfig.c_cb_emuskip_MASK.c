
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* value; } ;
typedef TYPE_1__ RConfigNode ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0, void *VAR_1) {
 RConfigNode *VAR_2 = (RConfigNode*) VAR_1;
 if (*VAR_2->value == '?') {
  if (FUNC_2 (VAR_2->value) > 1 && VAR_2->value[1] == '?') {
   FUNC_1 ("Concatenation of meta types encoded as characters:\n" "'d': data\n'c': code\n's': string\n'f': format\n'm': magic\n" "'h': hide\n'C': comment\n'r': run\n" "(default is 'ds' to skip data and strings)\n");



  } else {
   FUNC_0 (VAR_2);
  }
  return 0;
 }
 return 1;
}
