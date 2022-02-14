
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {int * s; } ;
struct TYPE_4__ {char* filename; TYPE_1__ metadata_str; int metadata; scalar_t__ metadata_len; scalar_t__ is_persistent; scalar_t__ filename_len; void* tmp; void* link; int * phar; } ;
typedef TYPE_2__ phar_entry_info ;
typedef int phar_archive_data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (void*) ;
 void* FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (char**,int *,scalar_t__) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(zval *VAR_2, void *VAR_3)
{
 phar_entry_info *VAR_4 = (phar_entry_info *)FUNC_1(VAR_2);

 VAR_4->phar = (phar_archive_data *)VAR_3;

 if (VAR_4->link) {
  VAR_4->link = FUNC_4(VAR_4->link);
 }

 if (VAR_4->tmp) {
  VAR_4->tmp = FUNC_4(VAR_4->tmp);
 }

 VAR_4->metadata_str.s = ((void*)0);
 VAR_4->filename = FUNC_5(VAR_4->filename, VAR_4->filename_len);
 VAR_4->is_persistent = 0;

 if (FUNC_2(VAR_4->metadata) != VAR_0) {
  if (VAR_4->metadata_len) {
   char *VAR_5 = FUNC_5((char *) FUNC_0(VAR_4->metadata), VAR_4->metadata_len);

   FUNC_6((char **) &VAR_5, &VAR_4->metadata, VAR_4->metadata_len);
   FUNC_3(VAR_5);
  } else {
   FUNC_7(&VAR_4->metadata);
   VAR_4->metadata_str.s = ((void*)0);
  }
 }
 return VAR_1;
}
