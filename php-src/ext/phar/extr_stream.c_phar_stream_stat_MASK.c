
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int php_stream_statbuf ;
struct TYPE_4__ {scalar_t__ abstract; } ;
typedef TYPE_1__ php_stream ;
struct TYPE_5__ {int internal_file; int phar; } ;
typedef TYPE_2__ phar_entry_data ;


 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(php_stream *VAR_0, php_stream_statbuf *VAR_1)
{
 phar_entry_data *VAR_2 = (phar_entry_data *)VAR_0->abstract;


 if (!VAR_1) {
  return -1;
 }

 FUNC_0(VAR_2->phar, VAR_2->internal_file, VAR_1, 0);
 return 0;
}
