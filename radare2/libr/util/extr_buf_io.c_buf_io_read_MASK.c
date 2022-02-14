
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct buf_io_priv {int fd; TYPE_1__* iob; } ;
typedef int st64 ;
struct TYPE_2__ {int io; int (* fd_read ) (int ,int ,int *,int ) ;} ;
typedef int RBuffer ;


 struct buf_io_priv* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static st64 FUNC_2(RBuffer *VAR_0, ut8 *VAR_1, ut64 VAR_2) {
 struct buf_io_priv *VAR_3 = FUNC_0 (VAR_0);
 return VAR_3->iob->fd_read (VAR_3->iob->io, VAR_3->fd, VAR_1, VAR_2);
}
