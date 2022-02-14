
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltTemplatePtr ;
struct TYPE_3__ {scalar_t__ mode; scalar_t__ match; } ;



__attribute__((used)) static char *
FUNC_0(xsltTemplatePtr VAR_0) {
  static char VAR_1[1001];
  char *VAR_2 = (char *)VAR_0->match;
  int VAR_3=0,VAR_4;


  for (VAR_4=0; VAR_3<1000 && VAR_2[VAR_4]; VAR_3++,VAR_4++) {
      for(;VAR_2[VAR_4]==' ';VAR_4++);
      VAR_1[VAR_3]=VAR_2[VAR_4];
  }
  if(VAR_3<998 && VAR_0->mode) {

    VAR_1[VAR_3++]='[';
    VAR_2=(char *)VAR_0->mode;
    for (VAR_4=0; VAR_3<999 && VAR_2[VAR_4]; VAR_3++,VAR_4++) {
      VAR_1[VAR_3]=VAR_2[VAR_4];
    }
    VAR_1[VAR_3++]=']';
  }
  VAR_1[VAR_3]='\0';
  return VAR_1;
}
