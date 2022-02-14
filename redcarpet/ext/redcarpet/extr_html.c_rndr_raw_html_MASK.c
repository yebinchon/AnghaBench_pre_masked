
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html_renderopt {int flags; } ;
struct buf {int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct buf*,int ,int ) ;
 int FUNC_1 (struct buf*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct buf *VAR_5, const struct buf *VAR_6, void *VAR_7)
{
 struct html_renderopt *VAR_8 = VAR_7;



 if((VAR_8->flags & VAR_0) != 0) {
  FUNC_1(VAR_5, VAR_6->data, VAR_6->size);
  return 1;
 }

 if ((VAR_8->flags & VAR_1) != 0)
  return 1;

 if ((VAR_8->flags & VAR_4) != 0 &&
  FUNC_2(VAR_6->data, VAR_6->size, "style"))
  return 1;

 if ((VAR_8->flags & VAR_3) != 0 &&
  FUNC_2(VAR_6->data, VAR_6->size, "a"))
  return 1;

 if ((VAR_8->flags & VAR_2) != 0 &&
  FUNC_2(VAR_6->data, VAR_6->size, "img"))
  return 1;

 FUNC_0(VAR_5, VAR_6->data, VAR_6->size);
 return 1;
}
