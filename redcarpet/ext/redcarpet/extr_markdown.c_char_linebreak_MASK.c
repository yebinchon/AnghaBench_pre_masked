
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_2__ {scalar_t__ (* linebreak ) (struct buf*,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {int size; char* data; } ;


 scalar_t__ FUNC_0 (struct buf*,int ) ;

__attribute__((used)) static size_t
FUNC_1(struct buf *VAR_0, struct sd_markdown *VAR_1, uint8_t *VAR_2, size_t VAR_3, size_t VAR_4)
{
 if (VAR_3 < 2 || VAR_2[-1] != ' ' || VAR_2[-2] != ' ')
  return 0;


 while (VAR_0->size && VAR_0->data[VAR_0->size - 1] == ' ')
  VAR_0->size--;

 return VAR_1->cb.linebreak(VAR_0, VAR_1->opaque) ? 1 : 0;
}
