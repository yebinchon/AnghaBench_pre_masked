
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nb_target_deps; int target_deps; } ;
typedef TYPE_1__ TCCState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (void***,int *,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_1__*,char const*) ;
 int FUNC_8 (TYPE_1__*) ;

int FUNC_9(TCCState *VAR_2, const char *VAR_3, int VAR_4)
{
 const char *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_6 (VAR_3);
 if (VAR_5[0]) {
  VAR_5++;
 }


 VAR_6 = FUNC_7 (VAR_2, VAR_3);
 if (VAR_6 < 0) {
  if (VAR_4 & VAR_1) {
   FUNC_5 ("file '%s' not found", VAR_3);
  }
  return VAR_6;
 }


 FUNC_1 ((void ***) &VAR_2->target_deps, &VAR_2->nb_target_deps,
  FUNC_2 (VAR_3));

 if (VAR_4 & VAR_0) {
  VAR_6 = FUNC_8 (VAR_2);
  goto the_end;
 }

 if (!VAR_5[0] || !FUNC_0 (VAR_5, "c") || !FUNC_0 (VAR_5, "h") || !FUNC_0 (VAR_5, "cparse")) {

  VAR_6 = FUNC_4 (VAR_2);
  goto the_end;
 }
 if (VAR_6 < 0) {
  FUNC_5 ("unrecognized file type");
 }

the_end:
 FUNC_3 ();
 return VAR_6;
}
