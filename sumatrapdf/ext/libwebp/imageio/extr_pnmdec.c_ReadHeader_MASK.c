
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int bytes_per_px; int depth; int max_value; int height; int width; int data_size; int * data; scalar_t__ seen_flags; } ;
typedef TYPE_1__ PNMInfo ;


 int VAR_0 ;
 size_t FUNC_0 (int *,size_t,int ,char*,size_t*) ;
 size_t FUNC_1 (TYPE_1__* const,size_t) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int*,...) ;

__attribute__((used)) static size_t FUNC_3(PNMInfo* const VAR_2) {
  size_t VAR_3 = 0;
  char VAR_4[VAR_0 + 1];
  size_t VAR_5;
  if (VAR_2 == ((void*)0)) return 0;
  if (VAR_2->data == ((void*)0) || VAR_2->data_size < VAR_1) return 0;

  VAR_2->width = VAR_2->height = 0;
  VAR_2->type = -1;
  VAR_2->seen_flags = 0;
  VAR_2->bytes_per_px = 0;
  VAR_2->depth = 0;
  VAR_2->max_value = 0;

  VAR_3 = FUNC_0(VAR_2->data, VAR_3, VAR_2->data_size, VAR_4, &VAR_5);
  if (VAR_3 == 0 || FUNC_2(VAR_4, "P%d", &VAR_2->type) != 1) return 0;
  if (VAR_2->type == 7) {
    VAR_3 = FUNC_1(VAR_2, VAR_3);
  } else {
    VAR_3 = FUNC_0(VAR_2->data, VAR_3, VAR_2->data_size, VAR_4, &VAR_5);
    if (VAR_3 == 0 || FUNC_2(VAR_4, "%d %d", &VAR_2->width, &VAR_2->height) != 2) {
      return 0;
    }
    VAR_3 = FUNC_0(VAR_2->data, VAR_3, VAR_2->data_size, VAR_4, &VAR_5);
    if (VAR_3 == 0 || FUNC_2(VAR_4, "%d", &VAR_2->max_value) != 1) return 0;


    VAR_2->depth = (VAR_2->type == 5) ? 1 : 3;
  }

  if (VAR_2->width <= 0 || VAR_2->height <= 0 ||
      VAR_2->type <= 0 || VAR_2->type >= 9 ||
      VAR_2->depth <= 0 || VAR_2->depth == 2 || VAR_2->depth > 4 ||
      VAR_2->max_value <= 0 || VAR_2->max_value >= 65536) {
    return 0;
  }
  VAR_2->bytes_per_px = VAR_2->depth * (VAR_2->max_value > 255 ? 2 : 1);
  return VAR_3;
}
