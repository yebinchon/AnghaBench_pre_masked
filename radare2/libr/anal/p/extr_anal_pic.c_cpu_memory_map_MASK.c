
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut32 ;
struct TYPE_8__ {int io; TYPE_1__* (* open_at ) (int ,char*,int ,int ,int ) ;int (* fd_remap ) (int ,int ,int ) ;scalar_t__ (* fd_get_name ) (int ,int ) ;} ;
struct TYPE_7__ {int fd; } ;
typedef TYPE_1__ RIODesc ;
typedef TYPE_2__ RIOBind ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_1__* FUNC_4 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static RIODesc *FUNC_5 (RIOBind *VAR_1, RIODesc *VAR_2, ut32 VAR_3,
    ut32 VAR_4) {
 char *VAR_5 = FUNC_1 ("malloc://%d", VAR_4);
 if (VAR_2 && VAR_1->fd_get_name (VAR_1->io, VAR_2->fd)) {
  VAR_1->fd_remap (VAR_1->io, VAR_2->fd, VAR_3);
 } else {
  VAR_2 = VAR_1->open_at (VAR_1->io, VAR_5, VAR_0, 0, VAR_3);
 }
 FUNC_0 (VAR_5);
 return VAR_2;
}
