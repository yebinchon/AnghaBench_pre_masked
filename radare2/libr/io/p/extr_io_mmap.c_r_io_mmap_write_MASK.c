
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_9__ {scalar_t__ off; } ;
struct TYPE_8__ {TYPE_1__* data; } ;
struct TYPE_7__ {int flags; int filename; int buf; } ;
typedef TYPE_1__ RIOMMapFileObj ;
typedef TYPE_2__ RIODesc ;
typedef TYPE_3__ RIO ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int const*,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(RIO *VAR_1, RIODesc *VAR_2, const ut8 *VAR_3, int VAR_4) {
 RIOMMapFileObj *VAR_5;
 int VAR_6 = VAR_4;
 ut64 VAR_7;

 if (!VAR_1 || !VAR_2 || !VAR_2->data || !VAR_3) {
  return -1;
 }
 VAR_5 = VAR_2->data;
 VAR_7 = VAR_1->off;
 if ( !(VAR_5->flags & VAR_0)) {
  return -1;
 }
 if ( (VAR_4 + VAR_7 > FUNC_1 (VAR_5->buf)) || FUNC_1 (VAR_5->buf) == 0) {
  ut64 VAR_8 = VAR_4 + VAR_7;
  FUNC_3 (VAR_5->filename, VAR_8);
 }
 VAR_6 = FUNC_2 (VAR_5->filename, VAR_1->off, VAR_3, VAR_6);
 if (!FUNC_4 (VAR_5) ) {
  FUNC_0 ("io_mmap: failed to refresh the mmap backed buffer.\n");

 }
 return VAR_6;
}
