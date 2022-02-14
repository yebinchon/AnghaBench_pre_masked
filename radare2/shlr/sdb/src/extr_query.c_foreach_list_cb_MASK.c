
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char ut8 ;
struct TYPE_2__ {char* root; int out; scalar_t__ encode; } ;
typedef TYPE_1__ ForeachListUser ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char const*,int *) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(void *VAR_0, const char *VAR_1, const char *VAR_2) {
 ForeachListUser *VAR_3 = VAR_0;
 char *VAR_4, *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 ut8 *VAR_9 = ((void*)0);
 if (!VAR_3) {
  return 0;
 }
 VAR_5 = VAR_3->root;
 VAR_7 = FUNC_5 (VAR_1);
 if (VAR_3->encode) {
  VAR_9 = FUNC_3 (VAR_2, ((void*)0));
  if (VAR_9) {
   VAR_2 = (const char *)VAR_9;
  }
 }
 VAR_8 = FUNC_5 (VAR_2);
 if (VAR_5) {
  VAR_6 = FUNC_5 (VAR_5);
  VAR_4 = FUNC_1 (VAR_7 + VAR_8 + VAR_6 + 3);
  if (!VAR_4) {
   FUNC_0 (VAR_9);
   return 0;
  }
  FUNC_2 (VAR_4, VAR_5, VAR_6);
  VAR_4[VAR_6]='/';
  FUNC_2 (VAR_4 + VAR_6 + 1, VAR_1, VAR_7);
  VAR_4[VAR_6 + VAR_7 + 1] = '=';
  FUNC_2 (VAR_4 + VAR_6 + VAR_7 + 2, VAR_2, VAR_8 + 1);
 } else {
  VAR_4 = FUNC_1 (VAR_7 + VAR_8 + 2);
  if (!VAR_4) {
   FUNC_0 (VAR_9);
   return 0;
  }
  FUNC_2 (VAR_4, VAR_1, VAR_7);
  VAR_4[VAR_7] = '=';
  FUNC_2 (VAR_4 + VAR_7 + 1, VAR_2, VAR_8 + 1);
 }
 FUNC_4 (VAR_3->out, VAR_4, 1);
 FUNC_0 (VAR_9);
 FUNC_0 (VAR_4);
 return 1;
}
