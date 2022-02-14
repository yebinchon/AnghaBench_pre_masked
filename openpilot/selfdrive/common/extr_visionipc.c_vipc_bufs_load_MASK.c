
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buf_len; } ;
typedef TYPE_1__ VisionStreamBufs ;
struct TYPE_6__ {int fd; int * addr; int len; } ;
typedef TYPE_2__ VIPCBuf ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,int ,int,int ,int,int ) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(VIPCBuf *VAR_4, const VisionStreamBufs *VAR_5,
                     int VAR_6, const int* VAR_7) {
  for (int VAR_8=0; VAR_8<VAR_6; VAR_8++) {
    if (VAR_4[VAR_8].addr) {
      FUNC_3(VAR_4[VAR_8].addr, VAR_4[VAR_8].len);
      VAR_4[VAR_8].addr = ((void*)0);
      FUNC_1(VAR_4[VAR_8].fd);
    }
    VAR_4[VAR_8].fd = VAR_7[VAR_8];
    VAR_4[VAR_8].len = VAR_5->buf_len;
    VAR_4[VAR_8].addr = FUNC_2(((void*)0), VAR_4[VAR_8].len,
                        VAR_2 | VAR_3,
                        VAR_1, VAR_4[VAR_8].fd, 0);

    FUNC_0(VAR_4[VAR_8].addr != VAR_0);
  }
}
