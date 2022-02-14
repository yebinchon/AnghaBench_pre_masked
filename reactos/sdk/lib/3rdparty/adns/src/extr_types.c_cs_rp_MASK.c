
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vbuf ;
typedef scalar_t__ adns_status ;
struct TYPE_2__ {int * array; } ;
typedef TYPE_1__ adns_rr_strpair ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static adns_status FUNC_3(vbuf *VAR_1, const void *VAR_2) {
  const adns_rr_strpair *VAR_3= VAR_2;
  adns_status VAR_4;

  VAR_4= FUNC_2(VAR_1,VAR_3->array[0]); if (VAR_4) return VAR_4;
  FUNC_0(" ");
  VAR_4= FUNC_1(VAR_1,VAR_3->array[1]); if (VAR_4) return VAR_4;

  return VAR_0;
}
