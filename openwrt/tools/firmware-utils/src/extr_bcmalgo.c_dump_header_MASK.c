
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int crc; int her_znaet_chto; int ldaddress; int hcs; int build_date; int filelen; int filename; int rev_min; int rev_maj; int control; int magic; } ;
typedef TYPE_1__ ldr_header_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5 ( ldr_header_t* VAR_0 )
{
 FUNC_2 ( "=== Header Information ===\n" );
 FUNC_2 ( "Header magic:\t0x%04X\n",FUNC_3 ( VAR_0->magic ) );
 FUNC_2 ( "Control:\t0x%04X (%s)\n",FUNC_3 ( VAR_0->control ), FUNC_0 ( VAR_0->control ) );
 FUNC_2 ( "Major rev. :\t0x%04X\n",FUNC_3 ( VAR_0->rev_maj ) );
 FUNC_2 ( "Minor rev. :\t0x%04X\n",FUNC_3 ( VAR_0->rev_min ) );
 FUNC_2 ( "File name :\t%s\n", ( char* ) &VAR_0->filename );
 FUNC_2 ( "File length:\t%d bytes\n", FUNC_4 ( VAR_0->filelen ) );
 FUNC_2 ( "Build time:\t0x%08X //FixMe: print in human-readable form\n", FUNC_4 ( VAR_0->build_date ) );
 FUNC_2 ( "HCS:\t\t0x%04X  ",FUNC_3 ( VAR_0->hcs ) );
 uint16_t VAR_1 = FUNC_1 ( VAR_0 );
 int VAR_2=0;
 if ( VAR_1 ==FUNC_3 ( VAR_0->hcs ) )
 {
  FUNC_2 ( "(OK!)\n" );
 }
 else
 {
  FUNC_2 ( "(ERROR! expected 0x%04X)\n",VAR_1 );
  VAR_2=1;
 }

 FUNC_2 ( "Load address:\t0x%08X\n", FUNC_4 ( VAR_0->ldaddress ) );
 FUNC_2 ( "HNW:\t\t0x%04X\n",FUNC_3 ( VAR_0->her_znaet_chto ) );
 FUNC_2 ( "CRC:\t\t0x%08X\n",FUNC_4 ( VAR_0->crc ) );
 FUNC_2 ( "=== Binary Header Dump===\n" );
 int VAR_3,VAR_4;
 uint8_t* VAR_5 = ( uint8_t* ) VAR_0;
 for ( VAR_3=0;VAR_3<=sizeof ( ldr_header_t );VAR_3++ )
 {
  if ( VAR_3 % 8==0 )
   FUNC_2 ( "\n" );
  FUNC_2 ( "0x%02x   ",VAR_5[VAR_3] );
 }
 FUNC_2 ( "\n\n== End Of Header dump ==\n" );
 return VAR_2;
}
