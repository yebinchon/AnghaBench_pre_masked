
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* body; int title; } ;
typedef TYPE_1__ RANode ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(RANode *VAR_0, void *VAR_1) {
 char *VAR_2, *VAR_3;
 int VAR_4 = FUNC_4 (VAR_0->body);

 if (VAR_4 > 0 && VAR_0->body[VAR_4 - 1] == '\n') {
  VAR_4--;
 }
 VAR_2 = FUNC_1 (VAR_0->body, VAR_4);
 VAR_3 = FUNC_3 ("agn \"%s\" base64:%s\n", VAR_0->title, VAR_2);
 FUNC_2 (VAR_3);
 FUNC_0 (VAR_3);
 FUNC_0 (VAR_2);
}
