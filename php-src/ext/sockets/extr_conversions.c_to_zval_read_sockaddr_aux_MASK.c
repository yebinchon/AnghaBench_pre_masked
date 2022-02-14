
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct sockaddr {int sa_family; } ;
typedef int res_context ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (char const*,int *,int *) ;
 int FUNC_4 (char const*,int *,int *) ;
 int FUNC_5 (char const*,int *,int *) ;

__attribute__((used)) static void FUNC_6(const char *VAR_0, zval *VAR_1, res_context *VAR_2)
{
 const struct sockaddr *VAR_3 = (struct sockaddr *)VAR_0;

 if (VAR_3->sa_family == 0) {
  FUNC_0(VAR_1);
  return;
 }

 FUNC_1(VAR_1);

 switch (VAR_3->sa_family) {
 case 130:
  FUNC_3(VAR_0, VAR_1, VAR_2);
  break;







 case 128:
  FUNC_5(VAR_0, VAR_1, VAR_2);
  break;

 default:
  FUNC_2(VAR_2, "cannot read struct sockaddr with family %d; "
    "not supported",
    (int)VAR_3->sa_family);
  break;
 }
}
