
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pages_amount; int page_size; int pos; int end; } ;
typedef TYPE_1__ R_STREAM_FILE ;


 int FUNC_0 (int,int,int,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (TYPE_1__*,int,int,char*) ;

void FUNC_6(R_STREAM_FILE *VAR_0, int VAR_1, char *VAR_2) {
 int VAR_3, VAR_4, VAR_5, VAR_6;
 if (VAR_1 == -1) {
  char *VAR_7 = (char *) FUNC_3(VAR_0->pages_amount * VAR_0->page_size);
  if (VAR_7) {
   FUNC_0(VAR_3, VAR_4, VAR_0->pos, VAR_0->page_size);
   (void)VAR_6;
   FUNC_5 (VAR_0, 0, VAR_0->pages_amount, VAR_7);
   VAR_0->pos = VAR_0->end;
   FUNC_4 (VAR_2, VAR_7 + VAR_4, VAR_0->end - VAR_4);
   FUNC_2 (VAR_7);
  }
 } else {
  FUNC_0(VAR_3, VAR_4, VAR_0->pos, VAR_0->page_size);
  FUNC_0(VAR_5, VAR_6, VAR_0->pos + VAR_1, VAR_0->page_size);
  (void)VAR_6;
  char *VAR_8 = (char *) FUNC_1(VAR_0->page_size * (VAR_5 + 1 - VAR_3), 1);
  if (VAR_8) {
   FUNC_5(VAR_0, VAR_3, VAR_5 + 1, VAR_8);
   VAR_0->pos += VAR_1;
   FUNC_4(VAR_2, VAR_8 + VAR_4, VAR_1);
   FUNC_2 (VAR_8);
  }
 }
}
