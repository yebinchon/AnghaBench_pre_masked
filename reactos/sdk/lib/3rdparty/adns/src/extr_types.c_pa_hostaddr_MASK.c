
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int parseinfo ;
typedef scalar_t__ adns_status ;
typedef int adns_rr_hostaddr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int*,int,int *) ;

__attribute__((used)) static adns_status FUNC_1(const parseinfo *VAR_2, int VAR_3, int VAR_4, void *VAR_5) {
  adns_rr_hostaddr *VAR_6= VAR_5;
  adns_status VAR_7;

  VAR_7= FUNC_0(VAR_2, &VAR_3, VAR_4, VAR_6);
  if (VAR_7) return VAR_7;
  if (VAR_3 != VAR_4) return VAR_0;

  return VAR_1;
}
