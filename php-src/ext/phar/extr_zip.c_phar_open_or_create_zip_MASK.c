
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int is_data; int is_zip; scalar_t__ is_tar; scalar_t__ internal_file_start; scalar_t__ is_brandnew; } ;
typedef TYPE_1__ phar_archive_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,char*,size_t,int,int ,TYPE_1__**,char**) ;
 int FUNC_1 (char**,int,char*,char*) ;

int FUNC_2(char *VAR_2, size_t VAR_3, char *VAR_4, size_t VAR_5, int VAR_6, uint32_t VAR_7, phar_archive_data** VAR_8, char **VAR_9)
{
 phar_archive_data *VAR_10;
 int VAR_11 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, &VAR_10, VAR_9);

 if (VAR_0 == VAR_11) {
  return VAR_0;
 }

 if (VAR_8) {
  *VAR_8 = VAR_10;
 }

 VAR_10->is_data = VAR_6;

 if (VAR_10->is_zip) {
  return VAR_11;
 }

 if (VAR_10->is_brandnew) {
  VAR_10->internal_file_start = 0;
  VAR_10->is_zip = 1;
  VAR_10->is_tar = 0;
  return VAR_1;
 }


 if (VAR_9) {
  FUNC_1(VAR_9, 4096, "phar zip error: phar \"%s\" already exists as a regular phar and must be deleted from disk prior to creating as a zip-based phar", VAR_2);
 }

 return VAR_0;
}
