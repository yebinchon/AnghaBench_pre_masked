
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int php_stream_filter ;
struct TYPE_4__ {int writefilters; int readfilters; } ;
typedef TYPE_1__ php_stream ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (char*,int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (char*,char*,char**) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(php_stream *VAR_1, char *VAR_2, int VAR_3, int VAR_4)
{
 char *VAR_5, *VAR_6 = ((void*)0);
 php_stream_filter *VAR_7;

 VAR_5 = FUNC_4(VAR_2, "|", &VAR_6);
 while (VAR_5) {
  FUNC_5(VAR_5, FUNC_6(VAR_5));
  if (VAR_3) {
   if ((VAR_7 = FUNC_2(VAR_5, ((void*)0), FUNC_3(VAR_1)))) {
    FUNC_1(&VAR_1->readfilters, VAR_7);
   } else {
    FUNC_0(((void*)0), VAR_0, "Unable to create filter (%s)", VAR_5);
   }
  }
  if (VAR_4) {
   if ((VAR_7 = FUNC_2(VAR_5, ((void*)0), FUNC_3(VAR_1)))) {
    FUNC_1(&VAR_1->writefilters, VAR_7);
   } else {
    FUNC_0(((void*)0), VAR_0, "Unable to create filter (%s)", VAR_5);
   }
  }
  VAR_5 = FUNC_4(((void*)0), "|", &VAR_6);
 }
}
