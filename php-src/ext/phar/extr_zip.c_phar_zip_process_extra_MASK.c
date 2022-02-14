
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int php_stream ;
struct TYPE_5__ {int perms; int size; int crc32; } ;
typedef TYPE_1__ phar_zip_unix3 ;
struct TYPE_6__ {char* tag; int size; } ;
typedef TYPE_2__ phar_zip_extra_field_header ;
struct TYPE_7__ {int flags; scalar_t__ is_dir; } ;
typedef TYPE_3__ phar_entry_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static int FUNC_3(php_stream *VAR_5, phar_entry_info *VAR_6, uint16_t VAR_7)
{
 union {
  phar_zip_extra_field_header header;
  phar_zip_unix3 unix3;
 } VAR_8;
 size_t VAR_9;

 do {
  if (sizeof(VAR_8.header) != FUNC_1(VAR_5, (char *) &VAR_8.header, sizeof(VAR_8.header))) {
   return VAR_0;
  }

  if (VAR_8.header.tag[0] != 'n' || VAR_8.header.tag[1] != 'u') {

   FUNC_2(VAR_5, FUNC_0(VAR_8.header.size), VAR_3);
   VAR_7 -= FUNC_0(VAR_8.header.size) + 4;
   continue;
  }


  VAR_9 = FUNC_1(VAR_5, (char *) &(VAR_8.unix3.crc32), sizeof(VAR_8.unix3) - sizeof(VAR_8.header));
  VAR_7 -= VAR_9 + 4;

  if (sizeof(VAR_8.unix3) - sizeof(VAR_8.header) != VAR_9) {
   return VAR_0;
  }

  if (FUNC_0(VAR_8.unix3.size) > sizeof(VAR_8.unix3) - 4) {

   FUNC_2(VAR_5, FUNC_0(VAR_8.unix3.size) - sizeof(VAR_8.unix3.size), VAR_3);
  }


  VAR_6->flags &= VAR_1;

  if (VAR_6->is_dir) {
   VAR_6->flags |= FUNC_0(VAR_8.unix3.perms) & VAR_2;
  } else {
   VAR_6->flags |= FUNC_0(VAR_8.unix3.perms) & VAR_2;
  }

 } while (VAR_7);

 return VAR_4;
}
