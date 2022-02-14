
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int php_stream ;
struct TYPE_8__ {scalar_t__ fp_type; int * fp; int tmp; int phar; scalar_t__ link; } ;
typedef TYPE_1__ phar_entry_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,char*,int,int *) ;

php_stream *FUNC_6(phar_entry_info *VAR_4, int VAR_5)
{
 if (VAR_5 && VAR_4->link) {
  phar_entry_info *VAR_6 = FUNC_3(VAR_4);

  if (VAR_6 && VAR_6 != VAR_4) {
   return FUNC_6(VAR_6, 1);
  }
 }

 if (FUNC_2(VAR_4) == VAR_0) {
  if (!FUNC_0(VAR_4)) {

   FUNC_4(VAR_4->phar);
  }
  return FUNC_0(VAR_4);
 } else if (FUNC_2(VAR_4) == VAR_2) {
  return FUNC_1(VAR_4);
 } else if (VAR_4->fp_type == VAR_1) {
  return VAR_4->fp;
 } else {

  if (!VAR_4->fp) {
   VAR_4->fp = FUNC_5(VAR_4->tmp, "rb", VAR_3|0, ((void*)0));
  }
  return VAR_4->fp;
 }
}
