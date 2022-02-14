
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dstvar; int line; int file; int callname; } ;
struct TYPE_9__ {TYPE_1__ lang; TYPE_2__* remit; } ;
struct TYPE_8__ {int size; int (* set_string ) (TYPE_3__*,int ,char*,int) ;int (* comment ) (TYPE_3__*,char*,char*,char*,int ) ;} ;
typedef TYPE_2__ REggEmit ;
typedef TYPE_3__ REgg ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_3__*,char*,char*,char*,int ) ;
 int FUNC_6 (TYPE_3__*,int ,char*,int) ;

__attribute__((used)) static void FUNC_7(REgg *VAR_0, char *VAR_1, int VAR_2) {
 int VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;
 REggEmit *VAR_8 = VAR_0->remit;

 VAR_8->comment (VAR_0, "encode %s string (%s) (%s)",
  VAR_2? "filtered": "unfiltered", VAR_1, VAR_0->lang.callname);


 if (VAR_2) {
  for (VAR_4 = 0; VAR_1[VAR_4]; VAR_4++) {
   VAR_3 = 0;
   if (VAR_1[VAR_4] == '\\') {
    switch (VAR_1[VAR_4 + 1]) {
    case 't':
     VAR_1[VAR_4] = '\t';
     VAR_3 = 1;
     break;
    case 'n':
     VAR_1[VAR_4] = '\n';
     VAR_3 = 1;
     break;
    case 'e':
     VAR_1[VAR_4] = '\x1b';
     VAR_3 = 1;
     break;
    case 'x':
     VAR_7 = FUNC_3 (VAR_1 + VAR_4 + 2);
     if (VAR_7 == -1) {
      FUNC_1 ("%s:%d Error string format\n",
       VAR_0->lang.file, VAR_0->lang.line);
     }
     VAR_1[VAR_4] = (char) VAR_7;
     VAR_3 = 3;
     break;
    default:
     break;
    }
    if (VAR_3) {
     FUNC_2 (VAR_1 + VAR_4 + 1, VAR_1 + VAR_4 + VAR_3 + 1,
      FUNC_4 (VAR_1 + VAR_4 + VAR_3 + 1) + 1);
    }

   }
  }
 }

 VAR_6 = FUNC_4 (VAR_1);
 VAR_5 = (VAR_6 - VAR_6 % VAR_8->size) + VAR_8->size;
 VAR_8->set_string (VAR_0, VAR_0->lang.dstvar, VAR_1, VAR_5);
 FUNC_0 (VAR_0->lang.dstvar);
}
