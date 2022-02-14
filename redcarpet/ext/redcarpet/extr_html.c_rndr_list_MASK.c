
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int size; char* data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buf*,char*,int) ;
 int FUNC_1 (struct buf*,char) ;

__attribute__((used)) static void
FUNC_2(struct buf *VAR_1, const struct buf *VAR_2, int VAR_3, void *VAR_4)
{
 if (VAR_1->size) FUNC_1(VAR_1, '\n');
 FUNC_0(VAR_1, VAR_3 & VAR_0 ? "<ol>\n" : "<ul>\n", 5);
 if (VAR_2) FUNC_0(VAR_1, VAR_2->data, VAR_2->size);
 FUNC_0(VAR_1, VAR_3 & VAR_0 ? "</ol>\n" : "</ul>\n", 6);
}
