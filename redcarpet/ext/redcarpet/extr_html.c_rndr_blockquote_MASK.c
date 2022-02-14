
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {scalar_t__ size; int data; } ;


 int FUNC_0 (struct buf*,char*) ;
 int FUNC_1 (struct buf*,int ,scalar_t__) ;
 int FUNC_2 (struct buf*,char) ;

__attribute__((used)) static void
FUNC_3(struct buf *VAR_0, const struct buf *VAR_1, void *VAR_2)
{
 if (VAR_0->size) FUNC_2(VAR_0, '\n');
 FUNC_0(VAR_0, "<blockquote>\n");
 if (VAR_1) FUNC_1(VAR_0, VAR_1->data, VAR_1->size);
 FUNC_0(VAR_0, "</blockquote>\n");
}
