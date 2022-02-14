
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_4__ {int filename; } ;
typedef TYPE_1__ RIOMMapFileObj ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_3(RIOMMapFileObj *VAR_0, ut64 VAR_1) {
 int VAR_2 = FUNC_1 (VAR_0->filename, VAR_1);
 if (VAR_2 && !FUNC_2 (VAR_0)) {
  FUNC_0 ("r_io_mmap_truncate: Error trying to refresh the mmap'ed file.");
  VAR_2 = 0;
 } else if (VAR_2) {
  FUNC_0 ("r_io_mmap_truncate: Error trying to resize the file.");
 }
 return VAR_2;
}
