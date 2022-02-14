
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ uint8_t ;
struct php_user_filter_data {int * ce; int classname; } ;
struct TYPE_6__ {int abstract; } ;
typedef TYPE_1__ php_stream_filter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,char*) ;
 int FUNC_11 (int *,char*,int *) ;
 int FUNC_12 (int *,int *,int *,int *,int ,int *) ;
 int FUNC_13 (char*) ;
 int VAR_4 ;
 int FUNC_14 (char*,char const*,size_t) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int ,char*,...) ;
 TYPE_1__* FUNC_17 (int *,int *,int ) ;
 int FUNC_18 (TYPE_1__*) ;
 char* FUNC_19 (size_t,int,int) ;
 size_t FUNC_20 (char const*) ;
 char* FUNC_21 (char const*,char) ;
 int VAR_5 ;
 int VAR_6 ;
 struct php_user_filter_data* FUNC_22 (int ,char*,size_t) ;
 int * FUNC_23 (int ) ;
 int FUNC_24 (TYPE_1__*,int ) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static php_stream_filter *FUNC_26(const char *VAR_7,
  zval *VAR_8, uint8_t VAR_9)
{
 struct php_user_filter_data *VAR_10 = ((void*)0);
 php_stream_filter *VAR_11;
 zval VAR_12, VAR_13;
 zval VAR_14;
 zval VAR_15;
 size_t VAR_16;


 if (VAR_9) {
  FUNC_16(((void*)0), VAR_0,
    "cannot use a user-space filter with a persistent stream");
  return ((void*)0);
 }

 VAR_16 = FUNC_20(VAR_7);


 if (((void*)0) == (VAR_10 = FUNC_22(FUNC_0(VAR_5), (char*)VAR_7, VAR_16))) {
  char *VAR_17;






  if ((VAR_17 = FUNC_21(VAR_7, '.'))) {
   char *VAR_18 = FUNC_19(VAR_16, 1, 3);


   FUNC_14(VAR_18, VAR_7, VAR_16 + 1);
   VAR_17 = VAR_18 + (VAR_17 - VAR_7);
   while (VAR_17) {
    FUNC_1(VAR_17[0] == '.');
    VAR_17[1] = '*';
    VAR_17[2] = '\0';
    if (((void*)0) != (VAR_10 = FUNC_22(FUNC_0(VAR_5), VAR_18, FUNC_20(VAR_18)))) {
     VAR_17 = ((void*)0);
    } else {
     *VAR_17 = '\0';
     VAR_17 = FUNC_21(VAR_18, '.');
    }
   }
   FUNC_13(VAR_18);
  }
  if (VAR_10 == ((void*)0)) {
   FUNC_16(((void*)0), VAR_0,
     "Err, filter \"%s\" is not in the user-filter map, but somehow the user-filter-factory was invoked for it!?", VAR_7);
   return ((void*)0);
  }
 }


 if (VAR_10->ce == ((void*)0)) {
  if (((void*)0) == (VAR_10->ce = FUNC_23(VAR_10->classname))) {
   FUNC_16(((void*)0), VAR_0,
     "user-filter \"%s\" requires class \"%s\", but that class is not defined",
     VAR_7, FUNC_2(VAR_10->classname));
   return ((void*)0);
  }
 }


 if (FUNC_15(&VAR_12, VAR_10->ce) == VAR_1) {
  return ((void*)0);
 }

 VAR_11 = FUNC_17(&VAR_6, ((void*)0), 0);
 if (VAR_11 == ((void*)0)) {
  FUNC_25(&VAR_12);
  return ((void*)0);
 }


 FUNC_10(&VAR_12, "filtername", (char*)VAR_7);


 if (VAR_8) {
  FUNC_11(&VAR_12, "params", VAR_8);
 } else {
  FUNC_9(&VAR_12, "params");
 }


 FUNC_5(&VAR_14, "oncreate", sizeof("oncreate")-1);

 FUNC_12(((void*)0),
   &VAR_12,
   &VAR_14,
   &VAR_15,
   0, ((void*)0));

 if (FUNC_8(VAR_15) != VAR_3) {
  if (FUNC_8(VAR_15) == VAR_2) {

   FUNC_25(&VAR_15);


   FUNC_6(&VAR_11->abstract);
   FUNC_18(VAR_11);


   FUNC_25(&VAR_12);


   return ((void*)0);
  }
  FUNC_25(&VAR_15);
 }
 FUNC_25(&VAR_14);


 FUNC_4(&VAR_13, FUNC_24(VAR_11, VAR_4));
 FUNC_3(&VAR_11->abstract, FUNC_7(VAR_12));
 FUNC_11(&VAR_12, "filter", &VAR_13);

 FUNC_25(&VAR_13);

 return VAR_11;
}
