
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vbuf ;
typedef scalar_t__ adns_status ;
struct TYPE_4__ {TYPE_1__* array; } ;
typedef TYPE_2__ adns_rr_intstrpair ;
struct TYPE_3__ {int i; int str; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static adns_status FUNC_2(vbuf *VAR_1, const void *VAR_2) {
  const adns_rr_intstrpair *VAR_3= VAR_2;
  adns_status VAR_4;

  VAR_4= FUNC_1(VAR_1,VAR_3->array[0].str,VAR_3->array[0].i); if (VAR_4) return VAR_4;
  FUNC_0(" ");
  VAR_4= FUNC_1(VAR_1,VAR_3->array[1].str,VAR_3->array[1].i); if (VAR_4) return VAR_4;
  return VAR_0;
}
