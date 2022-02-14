
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_7__ {int max_block_id; TYPE_1__* blocks; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_6__ {scalar_t__ bimg_len; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_2(XLogReaderState *VAR_0, uint32 *VAR_1, uint32 *VAR_2)
{
 int VAR_3;
 *VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 <= VAR_0->max_block_id; VAR_3++)
 {
  if (FUNC_1(VAR_0, VAR_3))
   *VAR_2 += VAR_0->blocks[VAR_3].bimg_len;
 }





 *VAR_1 = FUNC_0(VAR_0) - *VAR_2;
}
