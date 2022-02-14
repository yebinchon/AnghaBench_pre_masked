
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int zend_off_t ;
struct TYPE_14__ {TYPE_2__* innerstream; } ;
typedef TYPE_1__ php_stream_temp_data ;
struct TYPE_15__ {scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (TYPE_2__*,int,void**,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 char* FUNC_7 (TYPE_2__*,size_t*) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,char*,size_t) ;

__attribute__((used)) static int FUNC_11(php_stream *VAR_7, int VAR_8, void **VAR_9)
{
 php_stream_temp_data *VAR_10 = (php_stream_temp_data*)VAR_7->abstract;
 php_stream *VAR_11;
 size_t VAR_12;
 char *VAR_13;
 zend_off_t VAR_14;

 FUNC_0(VAR_10 != ((void*)0));

 if (!VAR_10->innerstream) {
  return VAR_1;
 }
 if (FUNC_6(VAR_10->innerstream, VAR_4)) {
  return FUNC_2(VAR_10->innerstream, VAR_8, VAR_9, 0);
 }






 if (VAR_9 == ((void*)0) && VAR_8 == VAR_2) {
  return VAR_6;
 }


 if (VAR_9 == ((void*)0)) {
  return VAR_1;
 }

 VAR_11 = FUNC_4();
 if (VAR_11 == ((void*)0)) {
  FUNC_1(((void*)0), VAR_0, "Unable to create temporary file.");
  return VAR_1;
 }


 VAR_13 = FUNC_7(VAR_10->innerstream, &VAR_12);
 FUNC_10(VAR_11, VAR_13, VAR_12);
 VAR_14 = FUNC_9(VAR_10->innerstream);

 FUNC_5(VAR_10->innerstream, VAR_3);
 VAR_10->innerstream = VAR_11;
 FUNC_3(VAR_7, VAR_10->innerstream);
 FUNC_8(VAR_10->innerstream, VAR_14, VAR_5);

 return FUNC_2(VAR_10->innerstream, VAR_8, VAR_9, 1);
}
