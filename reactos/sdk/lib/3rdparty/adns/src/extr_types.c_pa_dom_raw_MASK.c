
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int parseinfo ;
typedef scalar_t__ adns_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int*,int,char**,int ) ;
 int VAR_2 ;

__attribute__((used)) static adns_status FUNC_1(const parseinfo *VAR_3, int VAR_4, int VAR_5, void *VAR_6) {
  char **VAR_7= VAR_6;
  adns_status VAR_8;

  VAR_8= FUNC_0(VAR_3, &VAR_4, VAR_5, VAR_7, VAR_2);
  if (VAR_8) return VAR_8;

  if (VAR_4 != VAR_5) return VAR_0;
  return VAR_1;
}
