
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_5__ {int has_error; } ;
struct TYPE_6__ {TYPE_1__ err; } ;
typedef TYPE_2__ ser_context ;






 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,double) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*,char*,char*) ;
 int FUNC_11 (int ,int ,int *,double*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static zend_long FUNC_15(const zval *VAR_0, ser_context *VAR_1)
{
 zend_long VAR_2 = 0;
 zval VAR_3;

 FUNC_3(&VAR_3);
 if (FUNC_8(VAR_0) != 130) {
  FUNC_0(&VAR_3, (zval *)VAR_0);
  VAR_0 = &VAR_3;
 }

 switch (FUNC_8(VAR_0)) {
 case 130:
long_case:
  VAR_2 = FUNC_4(VAR_0);
  break;


 case 131:
double_case:
  FUNC_9(&VAR_3);
  goto long_case;

 case 129:
 case 128: {
  zend_long VAR_4;
  double VAR_5;

  if (!FUNC_12(&VAR_3)) {
   VAR_1->err.has_error = 1;
   break;
  }

  switch (FUNC_11(FUNC_6(VAR_3), FUNC_5(VAR_3), &VAR_4, &VAR_5, 0)) {
  case 131:
   FUNC_14(&VAR_3);
   FUNC_1(&VAR_3, VAR_5);
   goto double_case;

  case 130:
   FUNC_14(&VAR_3);
   FUNC_2(&VAR_3, VAR_4);
   goto long_case;
  }


  FUNC_10(VAR_1, "expected an integer, but got a non numeric "
    "string (possibly from a converted object): '%s'", FUNC_7(VAR_0));
  break;
 }

 default:
  FUNC_10(VAR_1, "%s", "expected an integer, either of a PHP "
    "integer type or of a convertible type");
  break;
 }

 FUNC_13(&VAR_3);

 return VAR_2;
}
