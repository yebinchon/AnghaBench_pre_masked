
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chapter_num; int doc; } ;
typedef TYPE_1__ fz_html_key ;
typedef int fz_context ;


 int FUNC_0 (char*,int,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, char *VAR_1, int VAR_2, void *VAR_3)
{
 fz_html_key *VAR_4 = (fz_html_key *)VAR_3;
 FUNC_0(VAR_1, VAR_2, "(html doc=%p, ch=%d)", VAR_4->doc, VAR_4->chapter_num);
}
