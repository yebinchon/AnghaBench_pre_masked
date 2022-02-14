
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int (* autolink ) (struct buf*,struct buf*,int ,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; scalar_t__ in_link_body; } ;
struct buf {size_t size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct buf* FUNC_0 (struct sd_markdown*,int ) ;
 int FUNC_1 (struct sd_markdown*,int ) ;
 size_t FUNC_2 (size_t*,struct buf*,int *,size_t,size_t,int ) ;
 int FUNC_3 (struct buf*,struct buf*,int ,int ) ;

__attribute__((used)) static size_t
FUNC_4(struct buf *VAR_3, struct sd_markdown *VAR_4, uint8_t *VAR_5, size_t VAR_6, size_t VAR_7)
{
 struct buf *VAR_8;
 size_t VAR_9, VAR_10;

 if (!VAR_4->cb.autolink || VAR_4->in_link_body)
  return 0;

 VAR_8 = FUNC_0(VAR_4, VAR_0);

 if ((VAR_9 = FUNC_2(&VAR_10, VAR_8, VAR_5, VAR_6, VAR_7, VAR_2)) > 0) {
  VAR_3->size -= VAR_10;
  VAR_4->cb.autolink(VAR_3, VAR_8, VAR_1, VAR_4->opaque);
 }

 FUNC_1(VAR_4, VAR_0);
 return VAR_9;
}
