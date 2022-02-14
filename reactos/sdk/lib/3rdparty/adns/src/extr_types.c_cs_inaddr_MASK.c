
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbuf ;
struct in_addr {int dummy; } ;
typedef int adns_status ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (struct in_addr const) ;

__attribute__((used)) static adns_status FUNC_3(vbuf *VAR_1, const void *VAR_2) {
  const struct in_addr *VAR_3= VAR_2, VAR_4= *VAR_3;
  const char *VAR_5;

  VAR_5= FUNC_2(VAR_4); FUNC_1(VAR_5);
  FUNC_0(VAR_5);
  return VAR_0;
}
