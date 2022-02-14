
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buf_io_priv {int fd; TYPE_1__* iob; } ;
typedef int st64 ;
struct TYPE_2__ {int io; int (* fd_seek ) (int ,int ,int ,int) ;} ;
typedef int RBuffer ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct buf_io_priv* FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static st64 FUNC_3(RBuffer *VAR_3, st64 VAR_4, int VAR_5) {
 struct buf_io_priv *VAR_6 = FUNC_0 (VAR_3);
 int VAR_7;

 switch (VAR_5) {
 default:
  FUNC_1 ();
 case 128:
  VAR_7 = VAR_2;
  break;
 case 129:
  VAR_7 = VAR_1;
  break;
 case 130:
  VAR_7 = VAR_0;
  break;
 }
 return VAR_6->iob->fd_seek (VAR_6->iob->io, VAR_6->fd, VAR_4, VAR_7);
}
