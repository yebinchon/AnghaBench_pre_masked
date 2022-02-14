
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* pages; int indx; int page_size; int pages_amount; int size; int free_; int stream_file; int * buf; } ;
typedef TYPE_1__ R_PDB_STREAM ;
typedef int RBuffer ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int*,int,int,int) ;

__attribute__((used)) static int FUNC_1(R_PDB_STREAM *VAR_1, RBuffer *VAR_2 , int *VAR_3,
        int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
 VAR_1->buf = VAR_2;
 VAR_1->pages = VAR_3;
 VAR_1->indx = VAR_5;
 VAR_1->page_size = VAR_7;
 VAR_1->pages_amount = VAR_4;
 if (VAR_6 == -1) {
  VAR_1->size = VAR_4 * VAR_7;
 } else {
  VAR_1->size = VAR_6;
 }
 FUNC_0 (&(VAR_1->stream_file), VAR_2, VAR_3, VAR_4, VAR_6, VAR_7);
 VAR_1->free_ = VAR_0;

 return 1;
}
