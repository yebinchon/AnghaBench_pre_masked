
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ current_level; } ;
struct html_renderopt {TYPE_1__ toc_data; } ;
struct buf {int dummy; } ;


 int FUNC_0 (struct buf*,char*) ;

__attribute__((used)) static void
FUNC_1(struct buf *VAR_0, void *VAR_1)
{
 struct html_renderopt *VAR_2 = VAR_1;

 while (VAR_2->toc_data.current_level > 0) {
  FUNC_0(VAR_0, "</li>\n</ul>\n");
  VAR_2->toc_data.current_level--;
 }
}
