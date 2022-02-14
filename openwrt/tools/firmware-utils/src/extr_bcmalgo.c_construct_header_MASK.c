
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int* filename; void* hcs; void* crc; void* ldaddress; void* filelen; void* build_date; void* rev_maj; void* rev_min; scalar_t__ control; void* magic; } ;
typedef TYPE_1__ ldr_header_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,char const*,int) ;

ldr_header_t* FUNC_8 ( uint32_t VAR_0, uint16_t VAR_1,uint16_t VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5, const char* VAR_6, uint32_t VAR_7 )
{
 ldr_header_t* VAR_8 = FUNC_1 ( sizeof ( ldr_header_t ) );
 VAR_8->magic=FUNC_3 ( VAR_0 );
 VAR_8->control=0;
 VAR_8->rev_min = FUNC_3 ( VAR_2 );
 VAR_8->rev_maj = FUNC_3 ( VAR_1 );
 VAR_8->build_date = FUNC_4 ( VAR_3 );
 VAR_8->filelen = FUNC_4 ( VAR_4 );
 VAR_8->ldaddress = FUNC_4 ( VAR_5 );
 FUNC_2 ( "Creating header for %s...\n", VAR_6 );
 if ( FUNC_6 ( VAR_6 ) >63 )
 {
  FUNC_2 ( "[!] Filename too long - stripping it to 63 bytes.\n" );
  FUNC_7 ( ( char* ) &VAR_8->filename, VAR_6, 63 );
  VAR_8->filename[63]=0x00;
 }
 else
 {
  FUNC_5 ( ( char* ) &VAR_8->filename, VAR_6 );
 }
 VAR_8->crc=FUNC_4 ( VAR_7 );
 VAR_8->hcs = FUNC_3 ( FUNC_0 ( VAR_8 ) );
 return VAR_8;
}
