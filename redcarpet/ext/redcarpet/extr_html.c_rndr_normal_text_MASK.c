
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int size; int data; } ;


 int FUNC_0 (struct buf*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct buf *VAR_0, const struct buf *VAR_1, void *VAR_2)
{
 if (VAR_1)
  FUNC_0(VAR_0, VAR_1->data, VAR_1->size);
}
