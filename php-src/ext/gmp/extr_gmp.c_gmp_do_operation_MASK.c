
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_uchar ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(zend_uchar VAR_1, zval *VAR_2, zval *VAR_3, zval *VAR_4)
{
 zval VAR_5;
 int VAR_6;

 if (VAR_2 == VAR_3) {
  FUNC_0(&VAR_5, VAR_3);
  VAR_3 = &VAR_5;
 }

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_6 == VAR_0 && VAR_3 == &VAR_5) {
  FUNC_2(VAR_3);
 }

 return VAR_6;
}
