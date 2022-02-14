
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html_renderopt {int dummy; } ;
struct buf {int dummy; } ;


 scalar_t__ FUNC_0 (struct html_renderopt*) ;
 int FUNC_1 (struct buf*,char*) ;

__attribute__((used)) static int
FUNC_2(struct buf *VAR_0, void *VAR_1)
{
 struct html_renderopt *VAR_2 = VAR_1;
 FUNC_1(VAR_0, FUNC_0(VAR_2) ? "<br/>\n" : "<br>\n");
 return 1;
}
