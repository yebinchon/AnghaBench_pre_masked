
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t len; } ;
struct TYPE_6__ {TYPE_1__ tsv; } ;
typedef TYPE_2__ TString ;


 char* FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char) ;

__attribute__((used)) static void FUNC_4(const TString* VAR_0)
{
 const char* VAR_1=FUNC_0(VAR_0);
 size_t VAR_2,VAR_3=VAR_0->tsv.len;
 FUNC_3('"');
 for (VAR_2=0; VAR_2<VAR_3; VAR_2++)
 {
  int VAR_4=VAR_1[VAR_2];
  switch (VAR_4)
  {
   case '"': FUNC_2("\\\""); break;
   case '\\': FUNC_2("\\\\"); break;
   case '\a': FUNC_2("\\a"); break;
   case '\b': FUNC_2("\\b"); break;
   case '\f': FUNC_2("\\f"); break;
   case '\n': FUNC_2("\\n"); break;
   case '\r': FUNC_2("\\r"); break;
   case '\t': FUNC_2("\\t"); break;
   case '\v': FUNC_2("\\v"); break;
   default: if (FUNC_1((unsigned char)VAR_4))
      FUNC_3(VAR_4);
  else
   FUNC_2("\\%03u",(unsigned char)VAR_4);
  }
 }
 FUNC_3('"');
}
