
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
typedef scalar_t__ st64 ;
struct TYPE_4__ {int rawio; int fd; scalar_t__ nocache; int mode; int perm; int filename; int * buf; int * io_backref; } ;
typedef TYPE_1__ RIOMMapFileObj ;
typedef int RIO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(RIOMMapFileObj *VAR_3) {
 RIO* VAR_4 = VAR_3->io_backref;
 ut64 VAR_5;
 if (VAR_3->buf) {
  VAR_5 = FUNC_4 (VAR_3->buf);
  FUNC_2 (VAR_3->buf);
  VAR_3->buf = ((void*)0);
 } else {
  VAR_5 = 0;
 }
 st64 VAR_6 = FUNC_5 (VAR_3->filename);
 if (VAR_6 > VAR_2) {

  VAR_3->rawio = 1;
 }
 if (VAR_3->rawio) {
  VAR_3->fd = FUNC_0 (VAR_3->filename, VAR_3->perm, VAR_3->mode);
  if (VAR_3->nocache) {



  }
  return (VAR_3->fd != -1);
 }
 VAR_3->buf = FUNC_3 (VAR_3->filename, VAR_3->perm);
 if (VAR_3->buf) {
  FUNC_6 (VAR_4, VAR_3, VAR_5, VAR_1);
  return 1;
 } else {
  VAR_3->rawio = 1;
  VAR_3->fd = FUNC_0 (VAR_3->filename, VAR_3->perm, VAR_3->mode);
  if (VAR_3->nocache) {



  }
  return (VAR_3->fd != -1);
 }
 return 0;
}
