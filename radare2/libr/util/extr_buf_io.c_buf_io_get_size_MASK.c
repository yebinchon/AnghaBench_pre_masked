
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut64 ;
struct buf_io_priv {int fd; TYPE_1__* iob; } ;
struct TYPE_2__ {int io; int (* fd_size ) (int ,int ) ;} ;
typedef int RBuffer ;


 struct buf_io_priv* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static ut64 FUNC_2(RBuffer *VAR_0) {
 struct buf_io_priv *VAR_1 = FUNC_0 (VAR_0);
 return VAR_1->iob->fd_size (VAR_1->iob->io, VAR_1->fd);
}
