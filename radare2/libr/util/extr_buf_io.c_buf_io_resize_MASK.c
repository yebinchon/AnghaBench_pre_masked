
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut64 ;
struct buf_io_priv {int fd; TYPE_1__* iob; } ;
struct TYPE_2__ {int (* fd_resize ) (int ,int ,int ) ;int io; } ;
typedef int RBuffer ;


 struct buf_io_priv* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_2(RBuffer *VAR_0, ut64 VAR_1) {
 struct buf_io_priv *VAR_2 = FUNC_0 (VAR_0);
 return VAR_2->iob->fd_resize (VAR_2->iob->io, VAR_2->fd, VAR_1);
}
