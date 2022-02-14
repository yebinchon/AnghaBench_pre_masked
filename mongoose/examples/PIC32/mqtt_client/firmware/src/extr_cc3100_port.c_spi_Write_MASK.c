
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int spiObjectIdx0; } ;
typedef int Fd_t ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned char*,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 TYPE_1__ VAR_0 ;

int FUNC_5(Fd_t VAR_1, unsigned char *VAR_2, int VAR_3) {
  if (VAR_3 > 512) {
    FUNC_4("BUFFER TOO SMALL");
    return 0;
  }

  FUNC_0();
  uint8_t VAR_4[512];
  FUNC_1(VAR_2, VAR_4, VAR_3);
  FUNC_2(VAR_0.spiObjectIdx0);
  FUNC_3();

  return VAR_3;
}
