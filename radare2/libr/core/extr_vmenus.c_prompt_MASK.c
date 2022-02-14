
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmd ;
struct TYPE_4__ {TYPE_1__* line; } ;
struct TYPE_3__ {char* prompt; char* contents; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int,int ,int *) ;
 int FUNC_3 (int) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (char const*) ;
 void* FUNC_6 (char const*) ;

__attribute__((used)) static char *FUNC_7(const char *VAR_0, const char *VAR_1) {
 char VAR_2[1024];
 char *VAR_3 = ((void*)0);
 char *VAR_4 = FUNC_6 (FUNC_4 ()->line->prompt);
 FUNC_3 (1);
 if (VAR_1 && *VAR_1) {
  FUNC_1 (FUNC_4 ()->line->contents);
  FUNC_4 ()->line->contents = FUNC_6 (VAR_1);
 } else {
  FUNC_0 (FUNC_4 ()->line->contents);
 }
 *VAR_2 = '\0';
 FUNC_5 (VAR_0);
 if (FUNC_2 (VAR_2, sizeof (VAR_2) - 1, 0, ((void*)0)) < 0) {
  *VAR_2 = '\0';
 }

 if (*VAR_2) {
  VAR_3 = FUNC_6 (VAR_2);
 }
 FUNC_5 (VAR_4);
 FUNC_1 (VAR_4);
 FUNC_0 (FUNC_4 ()->line->contents);
 return VAR_3;
}
