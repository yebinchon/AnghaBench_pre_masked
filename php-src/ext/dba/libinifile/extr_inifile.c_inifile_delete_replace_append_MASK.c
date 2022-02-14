
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int zend_bool ;
struct TYPE_18__ {char* value; } ;
typedef TYPE_1__ val_type ;
typedef int php_stream ;
struct TYPE_19__ {scalar_t__ name; scalar_t__ group; } ;
typedef TYPE_2__ key_type ;
struct TYPE_20__ {int * fp; } ;
typedef TYPE_3__ inifile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,size_t,size_t,TYPE_3__**) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*,TYPE_2__ const*,int *) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__ const*,size_t*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__ const*,size_t*) ;
 int FUNC_6 (TYPE_3__*,size_t) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,scalar_t__,...) ;
 int FUNC_12 (int *,size_t,int ) ;
 scalar_t__ FUNC_13 (int *) ;
 int * FUNC_14 (int ,int) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (int *,char*) ;

__attribute__((used)) static int FUNC_17(inifile *VAR_6, const key_type *VAR_7, const val_type *VAR_8, int VAR_9, zend_bool *VAR_10)
{
 size_t VAR_11=0, VAR_12;
 inifile *VAR_13 = ((void*)0);
 php_stream *VAR_14 = ((void*)0);
 int VAR_15;
 FUNC_0(!VAR_9 || (VAR_7->name && VAR_8));


 FUNC_3(VAR_6, VAR_7, &VAR_11);
 FUNC_5(VAR_6, VAR_7, &VAR_12);
 if (VAR_9) {
  VAR_15 = VAR_5;
 } else {
  VAR_15 = FUNC_1(VAR_6, VAR_11, VAR_12, &VAR_13);
 }


 if (VAR_15 == VAR_5) {
  VAR_14 = FUNC_14(0, 64 * 1024);
  if (!VAR_14) {
   FUNC_7(((void*)0), VAR_0, "Could not create temporary stream");
   VAR_15 = VAR_1;
  } else {
   FUNC_12(VAR_6->fp, 0, VAR_3);
   if (VAR_12 != (size_t)FUNC_13(VAR_6->fp)) {
    FUNC_12(VAR_6->fp, VAR_12, VAR_4);
    if (VAR_5 != FUNC_9(VAR_6->fp, VAR_14, VAR_2, ((void*)0))) {
     FUNC_7(((void*)0), VAR_0, "Could not copy remainder to temporary stream");
     VAR_15 = VAR_1;
    }
   }
  }
 }


 if (VAR_15 == VAR_5) {
  if (!VAR_8 || (VAR_7->name && FUNC_15(VAR_7->name))) {
   VAR_15 = FUNC_6(VAR_6, VAR_9 ? VAR_12 : VAR_11);
  }
 }

 if (VAR_15 == VAR_5) {
  if (VAR_7->name && FUNC_15(VAR_7->name)) {

   if (!VAR_9 && VAR_13) {
    VAR_15 = FUNC_2(VAR_6, VAR_13, VAR_7, VAR_10);
   }





   if (VAR_8) {
    if (VAR_11 == VAR_12 && VAR_7->group && FUNC_15(VAR_7->group)) {
     FUNC_11(VAR_6->fp, "[%s]\n", VAR_7->group);
    }
    FUNC_11(VAR_6->fp, "%s=%s\n", VAR_7->name, VAR_8->value ? VAR_8->value : "");
   }
  }





  if (VAR_14 && FUNC_13(VAR_14)) {
   FUNC_12(VAR_14, 0, VAR_4);
   FUNC_12(VAR_6->fp, 0, VAR_3);
   if (VAR_5 != FUNC_9(VAR_14, VAR_6->fp, VAR_2, ((void*)0))) {
    FUNC_16(((void*)0), "Could not copy from temporary stream - ini file truncated");
    VAR_15 = VAR_1;
   }
  }
 }

 if (VAR_13) {
  FUNC_8(VAR_13->fp);
  FUNC_4(VAR_13, 0);
 }
 if (VAR_14) {
  FUNC_8(VAR_14);
 }
 FUNC_10(VAR_6->fp);
 FUNC_12(VAR_6->fp, 0, VAR_4);

 return VAR_15;
}
