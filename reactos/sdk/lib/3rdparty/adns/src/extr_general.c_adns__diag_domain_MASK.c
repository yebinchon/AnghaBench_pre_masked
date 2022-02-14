
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ buf; scalar_t__ used; } ;
typedef TYPE_1__ vbuf ;
typedef int byte ;
typedef scalar_t__ adns_status ;
typedef int adns_state ;
typedef int adns_query ;


 scalar_t__ FUNC_0 (int ,int,int ,TYPE_1__*,int ,int const*,int,int*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_3 (scalar_t__) ;
 int VAR_1 ;

const char *FUNC_4(adns_state VAR_2, int VAR_3, adns_query VAR_4,
         vbuf *VAR_5, const byte *VAR_6, int VAR_7, int VAR_8) {
  adns_status VAR_9;

  VAR_9= FUNC_0(VAR_2,VAR_3,VAR_4,VAR_5, VAR_1, VAR_6,VAR_7,&VAR_8,VAR_7);
  if (VAR_9 == VAR_0) {
    return "<cannot report domain... out of memory>";
  }
  if (VAR_9) {
    VAR_5->used= 0;
    if (!(FUNC_2(VAR_5,"<bad format... ") &&
   FUNC_2(VAR_5,FUNC_3(VAR_9)) &&
   FUNC_2(VAR_5,">") &&
   FUNC_1(VAR_5,(byte*)"",1))) {
      return "<cannot report bad format... out of memory>";
    }
  }
  if (!VAR_5->used) {
    FUNC_2(VAR_5,"<truncated ...>");
    FUNC_1(VAR_5,(byte*)"",1);
  }
  return (char*)VAR_5->buf;
}
