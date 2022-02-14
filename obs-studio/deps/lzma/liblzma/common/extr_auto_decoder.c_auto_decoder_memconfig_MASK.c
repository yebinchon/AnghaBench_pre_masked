
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ lzma_ret ;
struct TYPE_4__ {scalar_t__ (* memconfig ) (int ,scalar_t__*,scalar_t__*,scalar_t__) ;int coder; } ;
struct TYPE_5__ {scalar_t__ memlimit; TYPE_1__ next; } ;
typedef TYPE_2__ lzma_coder ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static lzma_ret
FUNC_2(lzma_coder *VAR_2, uint64_t *VAR_3,
  uint64_t *VAR_4, uint64_t VAR_5)
{
 lzma_ret VAR_6;

 if (VAR_2->next.memconfig != ((void*)0)) {
  VAR_6 = VAR_2->next.memconfig(VAR_2->next.coder,
    VAR_3, VAR_4, VAR_5);
  FUNC_0(*VAR_4 == VAR_2->memlimit);
 } else {


  *VAR_3 = VAR_0;
  *VAR_4 = VAR_2->memlimit;
  VAR_6 = VAR_1;
 }

 if (VAR_6 == VAR_1 && VAR_5 != 0)
  VAR_2->memlimit = VAR_5;

 return VAR_6;
}
