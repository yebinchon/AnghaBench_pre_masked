
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut32 ;
typedef scalar_t__ ut16 ;
struct TYPE_7__ {int class_idx; } ;
struct TYPE_8__ {TYPE_1__ cp_method; } ;
struct TYPE_9__ {scalar_t__ tag; TYPE_2__ info; } ;
typedef int RCore ;
typedef int RBinJavaObj ;
typedef TYPE_3__ RBinJavaCPTypeObj ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int *,scalar_t__) ;
 char* FUNC_4 (int *,TYPE_3__*) ;
 char* FUNC_5 (int *,int ) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,char*,char*,char*) ;
 char* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static char * FUNC_10 (RCore *VAR_3, RBinJavaObj *VAR_4, ut16 VAR_5) {
 char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 RBinJavaCPTypeObj * VAR_10 = FUNC_3 (VAR_4, VAR_5);
 char * VAR_11 = ((void*)0);
 if (VAR_5 == 0) {
  VAR_11 = FUNC_8 ("NULL");
  return VAR_11;
 }

 if (VAR_10->tag == VAR_1 ||
  VAR_10->tag == VAR_2 ||
  VAR_10->tag == VAR_0) {
  VAR_6 = FUNC_5 (VAR_4, VAR_10->info.cp_method.class_idx);
  VAR_8 = FUNC_4 (VAR_4, VAR_10);
  VAR_9 = FUNC_2 (VAR_4, VAR_10);
 }

 if (VAR_6 && VAR_8) {
  ut32 VAR_12 = 0;
  VAR_12 += FUNC_9 (VAR_6);
  VAR_12 += FUNC_9 (VAR_8);
  VAR_12 += 2;
  VAR_7 = FUNC_1 (VAR_12);
  FUNC_7 (VAR_7, VAR_12, "%s.%s", VAR_6, VAR_8);
 }
 if (VAR_7) {
  VAR_11 = FUNC_6 (VAR_7, VAR_9);
 }
 FUNC_0 (VAR_6);
 FUNC_0 (VAR_8);
 FUNC_0 (VAR_9);
 FUNC_0 (VAR_7);
 return VAR_11;
}
