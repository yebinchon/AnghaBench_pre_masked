
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ read_pos; scalar_t__ read_limit; scalar_t__ action; scalar_t__ write_pos; int * buffer; scalar_t__ read_ahead; } ;
typedef TYPE_1__ lzma_mf ;
struct TYPE_8__ {int is_initialized; int * literal; int rc; int ** is_match; } ;
typedef TYPE_2__ lzma_coder ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ,int,int ) ;

__attribute__((used)) static bool
FUNC_5(lzma_coder *VAR_2, lzma_mf *VAR_3)
{
 FUNC_0(FUNC_1(VAR_3) == 0);

 if (VAR_3->read_pos == VAR_3->read_limit) {
  if (VAR_3->action == VAR_1)
   return 0;


  FUNC_0(VAR_3->write_pos == VAR_3->read_pos);
  FUNC_0(VAR_3->action == VAR_0);
 } else {


  FUNC_2(VAR_3, 1);
  VAR_3->read_ahead = 0;
  FUNC_3(&VAR_2->rc, &VAR_2->is_match[0][0], 0);
  FUNC_4(&VAR_2->rc, VAR_2->literal[0], 8, VAR_3->buffer[0]);
 }


 VAR_2->is_initialized = 1;

 return 1;
}
