
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct outline_parser {scalar_t__ cat; } ;
struct TYPE_3__ {int down; int flow_head; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;


 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int) ;
 char const* FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static const char *
FUNC_5(fz_context *VAR_0, struct outline_parser *VAR_1, fz_html_box *VAR_2)
{
 if (!VAR_1->cat)
  VAR_1->cat = FUNC_3(VAR_0, 1024);
 else
  FUNC_2(VAR_0, VAR_1->cat);

 FUNC_1(VAR_0, VAR_1->cat, VAR_2->flow_head);
 FUNC_0(VAR_0, VAR_1->cat, VAR_2->down);

 return FUNC_4(VAR_0, VAR_1->cat);
}
