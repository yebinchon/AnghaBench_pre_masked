
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int UChar ;
struct TYPE_11__ {size_t nblock; int blockCRC; int combinedCRC; int blockNo; int verbosity; int* zbits; int origPtr; scalar_t__ blockSize100k; scalar_t__ arr2; scalar_t__ numZ; } ;
typedef TYPE_1__ EState ;
typedef scalar_t__ Bool ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,int,int,size_t) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

void FUNC_11 ( EState* VAR_4, Bool VAR_5 )
{
   if (VAR_4->nblock > 0) {

      FUNC_2 ( VAR_4->blockCRC );
      VAR_4->combinedCRC = (VAR_4->combinedCRC << 1) | (VAR_4->combinedCRC >> 31);
      VAR_4->combinedCRC ^= VAR_4->blockCRC;
      if (VAR_4->blockNo > 1) VAR_4->numZ = 0;

      if (VAR_4->verbosity >= 2)
         FUNC_4( "    block %d: crc = 0x%08x, "
                   "combined CRC = 0x%08x, size = %d\n",
                   VAR_4->blockNo, VAR_4->blockCRC, VAR_4->combinedCRC, VAR_4->nblock );

      FUNC_0 ( VAR_4 );
   }

   VAR_4->zbits = (UChar*) (&((UChar*)VAR_4->arr2)[VAR_4->nblock]);


   if (VAR_4->blockNo == 1) {
      FUNC_1 ( VAR_4 );
      FUNC_6 ( VAR_4, VAR_1 );
      FUNC_6 ( VAR_4, VAR_2 );
      FUNC_6 ( VAR_4, VAR_3 );
      FUNC_6 ( VAR_4, (UChar)(VAR_0 + VAR_4->blockSize100k) );
   }

   if (VAR_4->nblock > 0) {

      FUNC_6 ( VAR_4, 0x31 ); FUNC_6 ( VAR_4, 0x41 );
      FUNC_6 ( VAR_4, 0x59 ); FUNC_6 ( VAR_4, 0x26 );
      FUNC_6 ( VAR_4, 0x53 ); FUNC_6 ( VAR_4, 0x59 );


      FUNC_7 ( VAR_4, VAR_4->blockCRC );
      FUNC_8(VAR_4,1,0);

      FUNC_8 ( VAR_4, 24, VAR_4->origPtr );
      FUNC_9 ( VAR_4 );
      FUNC_10 ( VAR_4 );
   }



   if (VAR_5) {

      FUNC_6 ( VAR_4, 0x17 ); FUNC_6 ( VAR_4, 0x72 );
      FUNC_6 ( VAR_4, 0x45 ); FUNC_6 ( VAR_4, 0x38 );
      FUNC_6 ( VAR_4, 0x50 ); FUNC_6 ( VAR_4, 0x90 );
      FUNC_7 ( VAR_4, VAR_4->combinedCRC );
      if (VAR_4->verbosity >= 2)
         FUNC_3( "    final combined CRC = 0x%08x\n   ", VAR_4->combinedCRC );
      FUNC_5 ( VAR_4 );
   }
}
