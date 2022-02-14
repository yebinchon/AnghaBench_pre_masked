
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int (* footnote_def ) (struct buf*,struct buf*,unsigned int,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct buf*,struct sd_markdown*,int *,size_t) ;
 struct buf* FUNC_1 (struct sd_markdown*,int ) ;
 int FUNC_2 (struct sd_markdown*,int ) ;
 int FUNC_3 (struct buf*,struct buf*,unsigned int,int ) ;

__attribute__((used)) static void
FUNC_4(struct buf *VAR_1, struct sd_markdown *VAR_2, unsigned int VAR_3, uint8_t *VAR_4, size_t VAR_5)
{
 struct buf *VAR_6 = 0;
 VAR_6 = FUNC_1(VAR_2, VAR_0);

 FUNC_0(VAR_6, VAR_2, VAR_4, VAR_5);

 if (VAR_2->cb.footnote_def)
 VAR_2->cb.footnote_def(VAR_1, VAR_6, VAR_3, VAR_2->opaque);
 FUNC_2(VAR_2, VAR_0);
}
