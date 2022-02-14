
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
struct TYPE_4__ {int vaddr; TYPE_1__ text_range; } ;
typedef TYPE_2__ RKext ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
 RKext *VAR_2 = (RKext *) VAR_0;
 RKext *VAR_3 = (RKext *) VAR_1;
 int VAR_4 = VAR_2->vaddr - VAR_3->vaddr;
 if (VAR_4 == 0) {
  return VAR_2->text_range.size - VAR_3->text_range.size;
 }
 return VAR_4;
}
