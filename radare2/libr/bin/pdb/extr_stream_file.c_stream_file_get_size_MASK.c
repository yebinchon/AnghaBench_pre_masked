
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int end; int page_size; int pos; } ;
typedef TYPE_1__ R_STREAM_FILE ;


 int FUNC_0 (int,int,int ,int ) ;

void FUNC_1(R_STREAM_FILE *VAR_0, int *VAR_1) {
 int VAR_2 = 0, VAR_3 = 0;
 FUNC_0(VAR_2, VAR_3, VAR_0->pos, VAR_0->page_size);
 (void)VAR_2;
 *VAR_1 = VAR_0->end - VAR_3;
}
