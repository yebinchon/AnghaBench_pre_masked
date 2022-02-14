
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef int xmlNodePtr ;
typedef int smart_str ;
struct TYPE_3__ {scalar_t__ prefix; } ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char) ;
 int FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (int *,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(xmlNodePtr VAR_5, const char* VAR_6, const char* VAR_7, smart_str* VAR_8)
{

 if (VAR_6) {
  xmlNsPtr VAR_9;
  if (FUNC_0(VAR_4) == VAR_2 &&
      FUNC_6(VAR_6,VAR_1) == 0) {
   VAR_6 = VAR_3;
  } else if (FUNC_0(VAR_4) == VAR_0 &&
             FUNC_6(VAR_6,VAR_3) == 0) {
   VAR_6 = VAR_1;
  }
  VAR_9 = FUNC_1(VAR_5, VAR_6);
  FUNC_5(VAR_8, (char*)VAR_9->prefix);
  FUNC_3(VAR_8, ':');
 }
 FUNC_4(VAR_8, VAR_7, FUNC_7(VAR_7));
 FUNC_2(VAR_8);
}
