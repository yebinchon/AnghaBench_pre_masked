
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int filename; } ;
typedef TYPE_1__ phar_entry_info ;
struct TYPE_9__ {int fname; } ;
typedef TYPE_2__ phar_archive_data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char**,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int) ;
 int FUNC_2 (char**,int,char*,int ,int ) ;

phar_entry_info * FUNC_3(phar_archive_data *VAR_2, phar_entry_info *VAR_3, char **VAR_4)
{
 if (VAR_4) {
  *VAR_4 = ((void*)0);
 }

 if (VAR_0 == FUNC_0(VAR_3, VAR_4, 1)) {
  return ((void*)0);
 }
 if (-1 == FUNC_1(VAR_3, 0, VAR_1, 0, 1)) {
  FUNC_2(VAR_4, 4096, "phar error: cannot seek to start of file \"%s\" in phar \"%s\"", VAR_3->filename, VAR_2->fname);
  return ((void*)0);
 }
 return VAR_3;
}
