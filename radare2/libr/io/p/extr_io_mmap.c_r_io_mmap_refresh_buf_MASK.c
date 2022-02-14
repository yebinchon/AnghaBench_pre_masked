
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_4__ {int * buf; int flags; int filename; int * io_backref; } ;
typedef TYPE_1__ RIOMMapFileObj ;
typedef int RIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int ,int ) ;

__attribute__((used)) static bool FUNC_4(RIOMMapFileObj *VAR_1) {
 RIO* VAR_2 = VAR_1->io_backref;
 ut64 VAR_3 = VAR_1->buf? FUNC_2 (VAR_1->buf): 0;
 if (VAR_1->buf) {
  FUNC_0 (VAR_1->buf);
  VAR_1->buf = ((void*)0);
 }
 VAR_1->buf = FUNC_1 (VAR_1->filename, VAR_1->flags);
 if (VAR_1->buf) {
  FUNC_3 (VAR_2, VAR_1, VAR_3, VAR_0);
 }
 return VAR_1->buf != ((void*)0);
}
