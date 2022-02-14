
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fname; } ;
typedef TYPE_1__ phar_archive_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int *) ;

int FUNC_4(phar_archive_data *VAR_4)
{
 if (FUNC_0(VAR_4)) {
  return VAR_3;
 }

 if (FUNC_2(VAR_4->fname)) {
  return VAR_0;
 }

 FUNC_1(VAR_4, FUNC_3(VAR_4->fname, "rb", VAR_1|VAR_2|0, ((void*)0)));

 if (!FUNC_0(VAR_4)) {
  return VAR_0;
 }

 return VAR_3;
}
