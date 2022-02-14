
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int (* link ) (struct buf*,struct buf*,int *,struct buf*,int ) ;int (* normal_text ) (struct buf*,struct buf*,int ) ;} ;
struct sd_markdown {int opaque; TYPE_1__ cb; scalar_t__ in_link_body; } ;
struct buf {size_t size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buf*,char*) ;
 int FUNC_1 (struct buf*,int ,size_t) ;
 struct buf* FUNC_2 (struct sd_markdown*,int ) ;
 int FUNC_3 (struct sd_markdown*,int ) ;
 size_t FUNC_4 (size_t*,struct buf*,int *,size_t,size_t,int ) ;
 int FUNC_5 (struct buf*,struct buf*,int ) ;
 int FUNC_6 (struct buf*,struct buf*,int *,struct buf*,int ) ;
 int FUNC_7 (struct buf*,struct buf*,int *,struct buf*,int ) ;

__attribute__((used)) static size_t
FUNC_8(struct buf *VAR_1, struct sd_markdown *VAR_2, uint8_t *VAR_3, size_t VAR_4, size_t VAR_5)
{
 struct buf *VAR_6, *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10;

 if (!VAR_2->cb.link || VAR_2->in_link_body)
  return 0;

 VAR_6 = FUNC_2(VAR_2, VAR_0);

 if ((VAR_9 = FUNC_4(&VAR_10, VAR_6, VAR_3, VAR_4, VAR_5, 0)) > 0) {
  VAR_7 = FUNC_2(VAR_2, VAR_0);
  FUNC_0(VAR_7, "http://");
  FUNC_1(VAR_7, VAR_6->data, VAR_6->size);

  VAR_1->size -= VAR_10;
  if (VAR_2->cb.normal_text) {
   VAR_8 = FUNC_2(VAR_2, VAR_0);
   VAR_2->cb.normal_text(VAR_8, VAR_6, VAR_2->opaque);
   VAR_2->cb.link(VAR_1, VAR_7, ((void*)0), VAR_8, VAR_2->opaque);
   FUNC_3(VAR_2, VAR_0);
  } else {
   VAR_2->cb.link(VAR_1, VAR_7, ((void*)0), VAR_6, VAR_2->opaque);
  }
  FUNC_3(VAR_2, VAR_0);
 }

 FUNC_3(VAR_2, VAR_0);
 return VAR_9;
}
