
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_2__* xmlNodePtr ;
typedef TYPE_3__* sdlParamPtr ;
typedef int * encodePtr ;
struct TYPE_12__ {TYPE_1__* element; int * encode; } ;
struct TYPE_11__ {scalar_t__ name; } ;
struct TYPE_10__ {int def; int nillable; int fixed; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,int *,int,TYPE_2__*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static xmlNodePtr FUNC_7(zval *VAR_0, sdlParamPtr VAR_1, char *VAR_2, int VAR_3, xmlNodePtr VAR_4)
{
 xmlNodePtr VAR_5;
 encodePtr VAR_6;
 zval VAR_7;

 FUNC_2(&VAR_7);
 if (VAR_1 != ((void*)0)) {
  VAR_6 = VAR_1->encode;
  if (VAR_0 == ((void*)0)) {
   if (VAR_1->element) {
    if (VAR_1->element->fixed) {
     FUNC_1(&VAR_7, VAR_1->element->fixed);
     VAR_0 = &VAR_7;
    } else if (VAR_1->element->def && !VAR_1->element->nillable) {
     FUNC_1(&VAR_7, VAR_1->element->def);
     VAR_0 = &VAR_7;
    }
   }
  }
 } else {
  VAR_6 = ((void*)0);
 }
 VAR_5 = FUNC_3(VAR_6, VAR_0, VAR_3, VAR_4);
 FUNC_6(&VAR_7);
 if (!FUNC_4((char*)VAR_5->name, "BOGUS")) {
  FUNC_5(VAR_5, FUNC_0(VAR_2));
 }
 return VAR_5;
}
