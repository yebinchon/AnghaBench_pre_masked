
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct TYPE_2__ {scalar_t__ (* input_filter ) (int ,char*,char**,size_t,size_t*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int *) ;
 char* VAR_1 ;
 TYPE_1__ VAR_2 ;
 char* VAR_3 ;
 size_t FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,char*,char**,size_t,size_t*) ;
 scalar_t__ FUNC_4 (int ,char*,char**,size_t,size_t*) ;
 scalar_t__ FUNC_5 (int ,char*,char**,size_t,size_t*) ;
 scalar_t__ FUNC_6 (int ,char*,char**,size_t,size_t*) ;
 scalar_t__ FUNC_7 (int ,char*,char**,size_t,size_t*) ;

__attribute__((used)) static void FUNC_8(zval *VAR_4)
{
 size_t VAR_5;
 char *VAR_6 = "";




 FUNC_0(VAR_4);


 VAR_5 = FUNC_2(VAR_1);
 if (VAR_2.input_filter(VAR_0, "PHP_SELF", &VAR_1, VAR_5, &VAR_5)) {
  FUNC_1("PHP_SELF", VAR_1, VAR_4);
 }
 if (VAR_2.input_filter(VAR_0, "SCRIPT_NAME", &VAR_1, VAR_5, &VAR_5)) {
  FUNC_1("SCRIPT_NAME", VAR_1, VAR_4);
 }

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_2.input_filter(VAR_0, "SCRIPT_FILENAME", &VAR_3, VAR_5, &VAR_5)) {
  FUNC_1("SCRIPT_FILENAME", VAR_3, VAR_4);
 }
 if (VAR_2.input_filter(VAR_0, "PATH_TRANSLATED", &VAR_3, VAR_5, &VAR_5)) {
  FUNC_1("PATH_TRANSLATED", VAR_3, VAR_4);
 }

 VAR_5 = 0U;
 if (VAR_2.input_filter(VAR_0, "DOCUMENT_ROOT", &VAR_6, VAR_5, &VAR_5)) {
  FUNC_1("DOCUMENT_ROOT", VAR_6, VAR_4);
 }
}
