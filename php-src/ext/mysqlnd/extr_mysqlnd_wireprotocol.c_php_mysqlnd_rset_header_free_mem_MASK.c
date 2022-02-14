
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * s; } ;
struct TYPE_4__ {TYPE_1__ info_or_local_file; } ;
typedef TYPE_2__ MYSQLND_PACKET_RSET_HEADER ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static
void FUNC_2(void * VAR_1)
{
 MYSQLND_PACKET_RSET_HEADER *VAR_2= (MYSQLND_PACKET_RSET_HEADER *) VAR_1;
 FUNC_0("php_mysqlnd_rset_header_free_mem");
 if (VAR_2->info_or_local_file.s) {
  FUNC_1(VAR_2->info_or_local_file.s);
  VAR_2->info_or_local_file.s = ((void*)0);
 }
 VAR_0;
}
