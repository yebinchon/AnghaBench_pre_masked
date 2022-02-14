
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SLConn {int fd; } ;
struct TYPE_2__ {int iClock; } ;


 int FUNC_0 (int ,char*,char const*,int ) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (struct SLConn*,int ,int) ;
 int FUNC_3 (char const*,char const**,int*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_4(struct SLConn *VAR_1, const char *VAR_2){
  const char *VAR_3;
  int VAR_4;

  FUNC_3(VAR_2, &VAR_3, &VAR_4);
  if( VAR_4!=6 || 0!=FUNC_1("ATTACH", VAR_3, 6) ){

    FUNC_0(VAR_1->fd, "%s; -- clock=%d\n", VAR_2, VAR_0.iClock++);
  }else{

    FUNC_2(VAR_1, 0, 1);
  }
}
