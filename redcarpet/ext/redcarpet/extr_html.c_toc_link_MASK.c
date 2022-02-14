
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {scalar_t__ size; int data; } ;


 int FUNC_0 (struct buf*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct buf *VAR_0, const struct buf *VAR_1, const struct buf *VAR_2, const struct buf *VAR_3, void *VAR_4)
{
 if (VAR_3 && VAR_3->size)
  FUNC_0(VAR_0, VAR_3->data, VAR_3->size);
 return 1;
}
