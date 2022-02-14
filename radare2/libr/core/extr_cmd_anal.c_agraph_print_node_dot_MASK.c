
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int title; int body; } ;
typedef TYPE_1__ RANode ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ,int ,...) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(RANode *VAR_0, void *VAR_1) {
 char *VAR_2 = FUNC_2 (VAR_0->body);

 if (!VAR_2 || !*VAR_2) {
  FUNC_1 ("\"%s\" [URL=\"%s\", color=\"lightgray\", label=\"%s\"]\n",
    VAR_0->title, VAR_0->title, VAR_0->title);
 } else {
  FUNC_1 ("\"%s\" [URL=\"%s\", color=\"lightgray\", label=\"%s\\n%s\"]\n",
    VAR_0->title, VAR_0->title, VAR_0->title, VAR_2);
 }
 FUNC_0 (VAR_2);
}
