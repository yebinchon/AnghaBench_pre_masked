
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int parseinfo ;
typedef scalar_t__ adns_status ;
struct TYPE_2__ {int * array; } ;
typedef TYPE_1__ adns_rr_strpair ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const*,int*,int,int *,int ) ;
 scalar_t__ FUNC_1 (int const*,int*,int,int *) ;
 int VAR_2 ;

__attribute__((used)) static adns_status FUNC_2(const parseinfo *VAR_3, int VAR_4, int VAR_5, void *VAR_6) {
  adns_rr_strpair *VAR_7= VAR_6;
  adns_status VAR_8;

  VAR_8= FUNC_1(VAR_3, &VAR_4, VAR_5, &VAR_7->array[0]);
  if (VAR_8) return VAR_8;

  VAR_8= FUNC_0(VAR_3, &VAR_4, VAR_5, &VAR_7->array[1], VAR_2);
  if (VAR_8) return VAR_8;

  if (VAR_4 != VAR_5) return VAR_0;
  return VAR_1;
}
