
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_document ;
typedef int fz_context ;
struct TYPE_5__ {int most_recent_html; TYPE_2__* dc_creator; TYPE_2__* dc_title; int outline; int set; int zip; int accel; TYPE_2__* spine; } ;
typedef TYPE_1__ epub_document ;
struct TYPE_6__ {struct TYPE_6__* path; struct TYPE_6__* next; } ;
typedef TYPE_2__ epub_chapter ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_0, fz_document *VAR_1)
{
 epub_document *VAR_2 = (epub_document*)VAR_1;
 epub_chapter *VAR_3, *VAR_4;
 VAR_3 = VAR_2->spine;
 while (VAR_3)
 {
  VAR_4 = VAR_3->next;
  FUNC_5(VAR_0, VAR_3->path);
  FUNC_5(VAR_0, VAR_3);
  VAR_3 = VAR_4;
 }
 FUNC_0(VAR_0, VAR_2->accel);
 FUNC_1(VAR_0, VAR_2->zip);
 FUNC_3(VAR_0, VAR_2->set);
 FUNC_4(VAR_0, VAR_2->outline);
 FUNC_5(VAR_0, VAR_2->dc_title);
 FUNC_5(VAR_0, VAR_2->dc_creator);
 FUNC_2(VAR_0, VAR_2->most_recent_html);
 FUNC_6(VAR_0, VAR_2);
}
