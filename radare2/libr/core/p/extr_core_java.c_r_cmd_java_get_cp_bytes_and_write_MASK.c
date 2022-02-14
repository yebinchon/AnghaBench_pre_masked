
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef int ut32 ;
typedef int ut16 ;
struct TYPE_19__ {int tag; } ;
struct TYPE_18__ {int loadaddr; } ;
struct TYPE_17__ {int io; TYPE_1__* file; } ;
struct TYPE_16__ {int fd; } ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RBinJavaObj ;
typedef TYPE_4__ RBinJavaCPTypeObj ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int * FUNC_5 (int ,int*,int const*,scalar_t__ const) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*,int *,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_10 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_11 (TYPE_2__*,scalar_t__,int ,int) ;
 scalar_t__ FUNC_12 (TYPE_2__*,scalar_t__,int const*,int) ;
 scalar_t__ FUNC_13 (int ,int ,int *,scalar_t__) ;
 scalar_t__ FUNC_14 (int ,scalar_t__) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int FUNC_17 (RCore *VAR_0, RBinJavaObj *VAR_1, ut16 VAR_2, ut64 VAR_3, const ut8 * VAR_4, const ut64 VAR_5) {
 int VAR_6 = 0;
 RBinJavaCPTypeObj *VAR_7 = FUNC_7 (VAR_1, VAR_2);
 ut64 VAR_8 = FUNC_15 (VAR_0->io);
 ut32 VAR_9 = 0, VAR_10 = VAR_1 ? FUNC_6 (VAR_1, VAR_2): -1;
 ut8 * VAR_11 = ((void*)0);

 if (VAR_10 == -1) {
  return VAR_6;
 }

 VAR_11 = FUNC_5 (VAR_7->tag, &VAR_9, VAR_4, VAR_5);

 if (VAR_9 < VAR_10) {
  VAR_6 = FUNC_11 (VAR_0, VAR_3+VAR_10, 0, (int)VAR_9 - (int)VAR_10) &&
  FUNC_14(VAR_0->io, VAR_8 + (int) VAR_9 - (int) VAR_10);
 } else if (VAR_9 > VAR_10) {
  VAR_6 = FUNC_9(VAR_0, VAR_3, (int)VAR_9 - (int)VAR_10);
 } else {
  FUNC_1 ("[X] r_cmd_java_get_cp_bytes_and_write: Failed to resize the file correctly aborting.\n");
  return VAR_6;
 }

 if (VAR_9 > 0 && VAR_11) {
  VAR_6 = FUNC_12(VAR_0, VAR_3, (const ut8 *)VAR_11, VAR_9) && FUNC_10 (VAR_0, VAR_3, 1);
 }

 if (VAR_6 == 0) {
  FUNC_1 ("[X] r_cmd_java_get_cp_bytes_and_write: Failed to write the bytes to the file correctly aborting.\n");
  return VAR_6;
 }

 FUNC_0 (VAR_11);

 if (VAR_6 == 1) {
  ut64 VAR_12 = 0;
  ut8 * VAR_13 = ((void*)0);
  VAR_6 = FUNC_16 (VAR_0->io, VAR_0->file->fd);
  VAR_12 = FUNC_15 (VAR_0->io);
  VAR_13 = VAR_12 > 0 ? FUNC_3 (VAR_12) : ((void*)0);
  if (VAR_13) {
   FUNC_4 (VAR_13, 0, VAR_12);
   VAR_6 = VAR_12 == FUNC_13 (VAR_0->io, VAR_1->loadaddr,
    VAR_13, VAR_12) ? 1 : 0;
   if (VAR_6 == 1) {
    VAR_6 = FUNC_8 (
     VAR_0, VAR_1, VAR_13, VAR_12);
   } else {
    FUNC_1 ("[X] r_cmd_java_get_cp_bytes_and_write: Failed to read the file in aborted, bin reload.\n");
   }
   FUNC_2 (VAR_13);
  }
 }
 return VAR_6;
}
