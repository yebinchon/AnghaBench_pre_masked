
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int use_argb; int width; int height; TYPE_2__* custom_ptr; int writer; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_14__ {size_t size; int * mem; } ;
typedef TYPE_2__ WebPMemoryWriter ;
struct TYPE_15__ {int lossless; } ;
typedef TYPE_3__ WebPConfig ;
typedef scalar_t__ (* Importer ) (TYPE_1__*,int const*,int) ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,float) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_6(const uint8_t* VAR_2, int VAR_3, int VAR_4, int VAR_5,
                     Importer VAR_6, float VAR_7, int VAR_8,
                     uint8_t** VAR_9) {
  WebPPicture VAR_10;
  WebPConfig VAR_11;
  WebPMemoryWriter VAR_12;
  int VAR_13;

  if (VAR_9 == ((void*)0)) return 0;

  if (!FUNC_0(&VAR_11, VAR_0, VAR_7) ||
      !FUNC_5(&VAR_10)) {
    return 0;
  }

  VAR_11.lossless = !!VAR_8;
  VAR_10.use_argb = !!VAR_8;
  VAR_10.width = VAR_3;
  VAR_10.height = VAR_4;
  VAR_10.writer = VAR_1;
  VAR_10.custom_ptr = &VAR_12;
  FUNC_3(&VAR_12);

  VAR_13 = VAR_6(&VAR_10, VAR_2, VAR_5) && FUNC_1(&VAR_11, &VAR_10);
  FUNC_4(&VAR_10);
  if (!VAR_13) {
    FUNC_2(&VAR_12);
    *VAR_9 = ((void*)0);
    return 0;
  }
  *VAR_9 = VAR_12.mem;
  return VAR_12.size;
}
