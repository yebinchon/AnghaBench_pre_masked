
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int wrapper; scalar_t__ abstract; } ;
typedef TYPE_2__ php_stream ;
struct TYPE_7__ {int phar; TYPE_1__* internal_file; } ;
typedef TYPE_3__ phar_entry_data ;
struct TYPE_5__ {int timestamp; scalar_t__ is_modified; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ,char**) ;
 int FUNC_2 (int ,int ,char*,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(php_stream *VAR_2)
{
 char *VAR_3;
 int VAR_4;
 phar_entry_data *VAR_5 = (phar_entry_data *) VAR_2->abstract;

 if (VAR_5->internal_file->is_modified) {
  VAR_5->internal_file->timestamp = FUNC_3(0);
  VAR_4 = FUNC_1(VAR_5->phar, 0, 0, 0, &VAR_3);
  if (VAR_3) {
   FUNC_2(VAR_2->wrapper, VAR_1, "%s", VAR_3);
   FUNC_0(VAR_3);
  }
  return VAR_4;
 } else {
  return VAR_0;
 }
}
