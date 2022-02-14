
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ used; scalar_t__ avail; } ;
typedef TYPE_1__ vbuf ;
typedef int byte ;
typedef int adns_status ;
typedef int adns_rrtype ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;

__attribute__((used)) static adns_status FUNC_4(vbuf *VAR_3, adns_rrtype VAR_4) {
  byte *VAR_5;

  FUNC_1(VAR_3);
  FUNC_0(VAR_4 & VAR_1);
  FUNC_0(VAR_0);
  FUNC_2(VAR_3);
  FUNC_3(VAR_3->used <= VAR_3->avail);

  return VAR_2;
}
