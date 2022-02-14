
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; } ;
struct xz_dec {size_t in_start; int crc32; TYPE_1__ index; } ;
struct xz_buf {size_t in_pos; size_t in; } ;


 int FUNC_0 (size_t,size_t,int ) ;

__attribute__((used)) static void FUNC_1(struct xz_dec *VAR_0, const struct xz_buf *VAR_1)
{
 size_t VAR_2 = VAR_1->in_pos - VAR_0->in_start;
 VAR_0->index.size += VAR_2;
 VAR_0->crc32 = FUNC_0(VAR_1->in + VAR_0->in_start, VAR_2, VAR_0->crc32);
}
