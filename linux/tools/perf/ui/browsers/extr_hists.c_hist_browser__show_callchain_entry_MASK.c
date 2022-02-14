
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int width; } ;
struct hist_browser {TYPE_2__ b; TYPE_1__* selection; scalar_t__ show_dso; } ;
struct callchain_print_arg {int is_current_entry; } ;
struct TYPE_9__ {scalar_t__ sym; } ;
struct callchain_list {TYPE_1__ ms; } ;
struct TYPE_11__ {scalar_t__ src; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char FUNC_0 (struct callchain_list*) ;
 TYPE_8__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,unsigned short,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,unsigned short) ;
 int FUNC_4 (TYPE_2__*,char*,char) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,char) ;
 int FUNC_7 (TYPE_2__*,char const*,int) ;

__attribute__((used)) static void FUNC_8(struct hist_browser *VAR_3,
            struct callchain_list *VAR_4,
            const char *VAR_5, int VAR_6,
            unsigned short VAR_7,
            struct callchain_print_arg *VAR_8)
{
 int VAR_9, VAR_10;
 char VAR_11 = FUNC_0(VAR_4);
 bool VAR_12 = VAR_3->show_dso && VAR_4->ms.sym && FUNC_1(VAR_4->ms.sym)->src;

 VAR_9 = VAR_0;
 VAR_10 = VAR_3->b.width - (VAR_6 + 2);
 if (FUNC_3(&VAR_3->b, VAR_7)) {
  VAR_3->selection = &VAR_4->ms;
  VAR_9 = VAR_1;
  VAR_8->is_current_entry = 1;
 }

 FUNC_5(&VAR_3->b, VAR_9);
 FUNC_2(&VAR_3->b, VAR_7, 0);
 FUNC_7(&VAR_3->b, " ", VAR_6);
 FUNC_4(&VAR_3->b, "%c", VAR_11);
 FUNC_6(&VAR_3->b, VAR_12 ? VAR_2 : ' ');
 FUNC_7(&VAR_3->b, VAR_5, VAR_10);
}
