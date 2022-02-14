
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int end; int* pages; int page_size; int buf; int pages_amount; int error; } ;
typedef TYPE_1__ R_STREAM_FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,int *,int) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3(R_STREAM_FILE *VAR_2, int VAR_3, int VAR_4, char *VAR_5) {
 int VAR_6, VAR_7;

 if ((VAR_4 - VAR_3) > VAR_2->end) {
  VAR_2->error = VAR_0;
  return;
 }
 VAR_4 = FUNC_0 (VAR_4, VAR_2->pages_amount);

 for (VAR_6 = VAR_3; VAR_6 < VAR_4; VAR_6++) {
  VAR_7 = VAR_2->pages[VAR_6] * VAR_2->page_size;
  if (VAR_7 < 1) {
   return;
  }
  FUNC_2 (VAR_2->buf, VAR_7, VAR_1);
  FUNC_1 (VAR_2->buf, VAR_7,
   (ut8 *)VAR_5, VAR_2->page_size);
  VAR_5 += VAR_2->page_size;
 }
}
