
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* cFileName; char* cAlternateFileName; } ;
struct TYPE_6__ {TYPE_1__ data; struct TYPE_6__* next; struct TYPE_6__* down; } ;
typedef char* LPCWSTR ;
typedef TYPE_2__ Entry ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static Entry* FUNC_1(Entry* VAR_0, LPCWSTR VAR_1)
{
 Entry* VAR_2;

 for(VAR_2=VAR_0->down; VAR_2; VAR_2=VAR_2->next) {
  LPCWSTR VAR_3 = VAR_1;
  LPCWSTR VAR_4 = VAR_2->data.cFileName;

  do {
   if (!*VAR_3 || *VAR_3 == '\\' || *VAR_3 == '/')
    return VAR_2;
  } while(FUNC_0(*VAR_3++) == FUNC_0(*VAR_4++));

  VAR_3 = VAR_1;
  VAR_4 = VAR_2->data.cAlternateFileName;

  do {
   if (!*VAR_3 || *VAR_3 == '\\' || *VAR_3 == '/')
    return VAR_2;
  } while(FUNC_0(*VAR_3++) == FUNC_0(*VAR_4++));
 }

 return 0;
}
