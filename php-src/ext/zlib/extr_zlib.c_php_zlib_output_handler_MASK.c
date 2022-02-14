
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Z; } ;
typedef TYPE_1__ php_zlib_context ;
struct TYPE_7__ {int op; } ;
typedef TYPE_2__ php_output_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int ,int*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static int FUNC_8(void **VAR_11, php_output_context *VAR_12)
{
 php_zlib_context *VAR_13 = *(php_zlib_context **) VAR_11;

 if (!FUNC_5()) {
  if ((VAR_12->op & VAR_5)
  && (VAR_12->op != (VAR_5|VAR_1|VAR_2))
  ) {
   FUNC_7(FUNC_1("Vary: Accept-Encoding"), 1, 0);
  }
  return VAR_0;
 }

 if (VAR_7 != FUNC_6(VAR_13, VAR_12)) {
  return VAR_0;
 }

 if (!(VAR_12->op & VAR_1)) {
  int VAR_14;

  if (VAR_7 == FUNC_4(VAR_3, &VAR_14)) {

   if (!(VAR_14 & VAR_6)) {
    if (FUNC_0(VAR_9) || !FUNC_2(VAR_10)) {
     FUNC_3(&VAR_13->Z);
     return VAR_0;
    }
    switch (FUNC_2(VAR_8)) {
     case 128:
      FUNC_7(FUNC_1("Content-Encoding: gzip"), 1, 1);
      break;
     case 129:
      FUNC_7(FUNC_1("Content-Encoding: deflate"), 1, 1);
      break;
     default:
      FUNC_3(&VAR_13->Z);
      return VAR_0;
    }
    FUNC_7(FUNC_1("Vary: Accept-Encoding"), 1, 0);
    FUNC_4(VAR_4, ((void*)0));
   }
  }
 }

 return VAR_7;
}
