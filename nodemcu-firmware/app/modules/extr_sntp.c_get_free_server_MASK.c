
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ip_addr_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static ip_addr_t* FUNC_3() {
  ip_addr_t* VAR_2 = (ip_addr_t *) FUNC_1((VAR_0 + 1) * sizeof(ip_addr_t));

  if (VAR_0 > 0) {
    FUNC_2(VAR_2, VAR_1, VAR_0 * sizeof(ip_addr_t));
  }
  if (VAR_1) {
    FUNC_0(VAR_1);
  }
  VAR_1 = VAR_2;

  return VAR_1 + VAR_0;
}
