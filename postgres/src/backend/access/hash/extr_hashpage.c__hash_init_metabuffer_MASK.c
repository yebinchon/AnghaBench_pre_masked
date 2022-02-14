
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
typedef double uint16 ;
struct TYPE_9__ {double hashm_ffactor; int hashm_bsize; int hashm_bmsize; int hashm_maxbucket; int hashm_highmask; int hashm_lowmask; int* hashm_spares; int* hashm_mapp; int hashm_ovflpoint; scalar_t__ hashm_firstfree; int hashm_procid; scalar_t__ hashm_bmshift; scalar_t__ hashm_nmaps; scalar_t__ hashm_ntuples; int hashm_version; int hashm_magic; } ;
struct TYPE_8__ {int hasho_bucket; int hasho_page_id; int hasho_flag; void* hasho_nextblkno; void* hasho_prevblkno; } ;
struct TYPE_7__ {int pd_lower; } ;
typedef int RegProcedure ;
typedef TYPE_1__* PageHeader ;
typedef scalar_t__ Page ;
typedef TYPE_2__* HashPageOpaque ;
typedef int HashMetaPageData ;
typedef TYPE_3__* HashMetaPage ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__) ;
 TYPE_3__* FUNC_6 (scalar_t__) ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int*,int ,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int) ;

void
FUNC_13(Buffer VAR_7, double VAR_8, RegProcedure VAR_9,
       uint16 VAR_10, bool VAR_11)
{
 HashMetaPage VAR_12;
 HashPageOpaque VAR_13;
 Page VAR_14;
 double VAR_15;
 uint32 VAR_16;
 uint32 VAR_17;
 uint32 VAR_18;
 VAR_15 = VAR_8 / VAR_10;
 if (VAR_15 <= 2.0)
  VAR_16 = 2;
 else if (VAR_15 >= (double) 0x40000000)
  VAR_16 = 0x40000000;
 else
  VAR_16 = FUNC_9(FUNC_12(VAR_15));

 VAR_17 = FUNC_12(VAR_16);
 FUNC_0(VAR_17 < VAR_3);

 VAR_14 = FUNC_3(VAR_7);
 if (VAR_11)
  FUNC_11(VAR_14, FUNC_4(VAR_7));

 VAR_13 = (HashPageOpaque) FUNC_8(VAR_14);
 VAR_13->hasho_prevblkno = VAR_5;
 VAR_13->hasho_nextblkno = VAR_5;
 VAR_13->hasho_bucket = -1;
 VAR_13->hasho_flag = VAR_6;
 VAR_13->hasho_page_id = VAR_1;

 VAR_12 = FUNC_6(VAR_14);

 VAR_12->hashm_magic = VAR_2;
 VAR_12->hashm_version = VAR_4;
 VAR_12->hashm_ntuples = 0;
 VAR_12->hashm_nmaps = 0;
 VAR_12->hashm_ffactor = VAR_10;
 VAR_12->hashm_bsize = FUNC_5(VAR_14);

 for (VAR_18 = FUNC_10(VAR_12->hashm_bsize); VAR_18 > 0; --VAR_18)
 {
  if ((1 << VAR_18) <= VAR_12->hashm_bsize)
   break;
 }
 FUNC_0(VAR_18 > 0);
 VAR_12->hashm_bmsize = 1 << VAR_18;
 VAR_12->hashm_bmshift = VAR_18 + VAR_0;
 FUNC_0((1 << FUNC_2(VAR_12)) == (FUNC_1(VAR_12) + 1));






 VAR_12->hashm_procid = VAR_9;





 VAR_12->hashm_maxbucket = VAR_16 - 1;





 VAR_12->hashm_highmask = (1 << (FUNC_10(VAR_16 + 1))) - 1;
 VAR_12->hashm_lowmask = (VAR_12->hashm_highmask >> 1);

 FUNC_7(VAR_12->hashm_spares, 0, sizeof(VAR_12->hashm_spares));
 FUNC_7(VAR_12->hashm_mapp, 0, sizeof(VAR_12->hashm_mapp));


 VAR_12->hashm_spares[VAR_17] = 1;
 VAR_12->hashm_ovflpoint = VAR_17;
 VAR_12->hashm_firstfree = 0;






 ((PageHeader) VAR_14)->pd_lower =
  ((char *) VAR_12 + sizeof(HashMetaPageData)) - (char *) VAR_14;
}
