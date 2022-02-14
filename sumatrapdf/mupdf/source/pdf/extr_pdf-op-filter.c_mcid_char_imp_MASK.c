
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pos; int * utf8; } ;
struct TYPE_4__ {TYPE_2__ actualtext; TYPE_2__ alt; int * mcid_obj; } ;
typedef TYPE_1__ tag_record ;
typedef int pdf_filter_processor ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int,int,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_4, pdf_filter_processor *VAR_5, tag_record *VAR_6, int VAR_7, int VAR_8)
{
 if (VAR_6->mcid_obj == ((void*)0))

  return;

 if (VAR_8)
 {

  FUNC_2(VAR_4, VAR_6->mcid_obj, FUNC_0(VAR_2));

  FUNC_2(VAR_4, VAR_6->mcid_obj, FUNC_0(VAR_3));
 }


 FUNC_4(VAR_4, VAR_7, VAR_8, &VAR_6->alt);

 FUNC_4(VAR_4, VAR_7, VAR_8, &VAR_6->actualtext);




 if (VAR_8)
  VAR_8 = (VAR_6->alt.pos == -1 || VAR_6->actualtext.pos == -1);
 else if (VAR_6->alt.pos >= 0 || VAR_6->actualtext.pos >= 0)
 {

  VAR_8 = 0;
 }

 if (VAR_8)
 {


  if (VAR_6->actualtext.pos == -1)
   FUNC_2(VAR_4, VAR_6->mcid_obj, FUNC_0(VAR_0));
  if (VAR_6->alt.pos == -1)
   FUNC_2(VAR_4, VAR_6->mcid_obj, FUNC_0(VAR_1));
  FUNC_3(VAR_4, VAR_6->mcid_obj);
  VAR_6->mcid_obj = ((void*)0);
  FUNC_1(VAR_4, VAR_6->alt.utf8);
  VAR_6->alt.utf8 = ((void*)0);
  FUNC_1(VAR_4, VAR_6->actualtext.utf8);
  VAR_6->actualtext.utf8 = ((void*)0);
 }
}
