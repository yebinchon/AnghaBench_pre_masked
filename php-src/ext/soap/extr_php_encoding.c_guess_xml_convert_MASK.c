
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int xmlNodePtr ;
typedef int encodeTypePtr ;
typedef int encodePtr ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int,int ,int ) ;

__attribute__((used)) static xmlNodePtr FUNC_3(encodeTypePtr VAR_1, zval *VAR_2, int VAR_3, xmlNodePtr VAR_4)
{
 encodePtr VAR_5;
 xmlNodePtr VAR_6;

 if (VAR_2) {
  VAR_5 = FUNC_1(FUNC_0(VAR_2));
 } else {
  VAR_5 = FUNC_1(VAR_0);
 }
 VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_3, VAR_4, 0);





 return VAR_6;
}
