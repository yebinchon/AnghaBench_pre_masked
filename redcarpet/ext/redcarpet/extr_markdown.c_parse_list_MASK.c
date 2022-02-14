
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int (* list ) (struct buf*,struct buf*,int,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; } ;
struct buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct buf*,struct sd_markdown*,int *,size_t,int*) ;
 struct buf* FUNC_1 (struct sd_markdown*,int ) ;
 int FUNC_2 (struct sd_markdown*,int ) ;
 int FUNC_3 (struct buf*,struct buf*,int,int ) ;

__attribute__((used)) static size_t
FUNC_4(struct buf *VAR_2, struct sd_markdown *VAR_3, uint8_t *VAR_4, size_t VAR_5, int VAR_6)
{
 struct buf *VAR_7 = 0;
 size_t VAR_8 = 0, VAR_9;

 VAR_7 = FUNC_1(VAR_3, VAR_0);

 while (VAR_8 < VAR_5) {
  VAR_9 = FUNC_0(VAR_7, VAR_3, VAR_4 + VAR_8, VAR_5 - VAR_8, &VAR_6);
  VAR_8 += VAR_9;

  if (!VAR_9 || (VAR_6 & VAR_1))
   break;
 }

 if (VAR_3->cb.list)
  VAR_3->cb.list(VAR_2, VAR_7, VAR_6, VAR_3->opaque);
 FUNC_2(VAR_3, VAR_0);
 return VAR_8;
}
