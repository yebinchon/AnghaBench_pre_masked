
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct gr_info_s {int scfsi; scalar_t__ part2_3_length; int big_values; scalar_t__ scalefac_compress; int block_type; int* table_select; int region1start; int region2start; void* count1table_select; void* scalefac_scale; void* preflag; void* mixed_block_flag; scalar_t__ pow2gain; scalar_t__* full_gain; } ;
struct III_sideinfo {int main_data_begin; int private_bits; TYPE_1__* ch; } ;
struct TYPE_10__ {size_t lsf; int bitreservoir; unsigned char* wordpointer; int ssize; int framesize; int gainpow2; scalar_t__ mpeg25; scalar_t__ error_protection; scalar_t__ num; int to_ignore; } ;
typedef TYPE_2__ mpg123_handle ;
struct TYPE_11__ {int* longIdx; } ;
struct TYPE_9__ {struct gr_info_s* gr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int const) ;
 TYPE_6__* VAR_3 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int,long) ;
 void* FUNC_4 (TYPE_2__*) ;
 void* FUNC_5 (TYPE_2__*,int const) ;
 int FUNC_6 (TYPE_2__*,int const) ;
 int FUNC_7 (unsigned char*,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(mpg123_handle *VAR_5, struct III_sideinfo *VAR_6,int VAR_7, int VAR_8,long VAR_9,int VAR_10)
{
 int VAR_11, VAR_12;
 int VAR_13 = (VAR_10 == VAR_1) ? 4 : 0;

 const int VAR_14[2][5] = { { 2,9,5,3,4 } , { 1,8,1,2,9 } };
 const int *VAR_15 = VAR_14[VAR_5->lsf];

 VAR_6->main_data_begin = FUNC_5(VAR_5, VAR_15[1]);

 if(VAR_6->main_data_begin > VAR_5->bitreservoir)
 {
  if(!VAR_5->to_ignore && VAR_2) FUNC_3(VAR_4, "Note: missing %d bytes in bit reservoir for frame %li\n", (int)(VAR_6->main_data_begin - VAR_5->bitreservoir), (long)VAR_5->num);


  FUNC_0(VAR_5, VAR_15[1]);
  if(VAR_5->lsf == 0)
  {
   VAR_5->wordpointer[0] = (unsigned char) (VAR_5->bitreservoir >> 1);
   VAR_5->wordpointer[1] = (unsigned char) ((VAR_5->bitreservoir & 1) << 7);
  }
  else VAR_5->wordpointer[0] = (unsigned char) VAR_5->bitreservoir;



  FUNC_7(VAR_5->wordpointer+2, 0, VAR_5->ssize-2);


  VAR_6->main_data_begin = FUNC_5(VAR_5, VAR_15[1]);
 }



 VAR_5->bitreservoir = VAR_5->bitreservoir + VAR_5->framesize - VAR_5->ssize - (VAR_5->error_protection ? 2 : 0);

 if(VAR_5->bitreservoir > (unsigned int) (VAR_5->lsf == 0 ? 511 : 255))
 VAR_5->bitreservoir = (VAR_5->lsf == 0 ? 511 : 255);



 if (VAR_7 == 1)
 VAR_6->private_bits = FUNC_6(VAR_5, VAR_15[2]);
 else
 VAR_6->private_bits = FUNC_6(VAR_5, VAR_15[3]);

 if(!VAR_5->lsf) for(VAR_11=0; VAR_11<VAR_7; VAR_11++)
 {
  VAR_6->ch[VAR_11].gr[0].scfsi = -1;
  VAR_6->ch[VAR_11].gr[1].scfsi = FUNC_6(VAR_5, 4);
 }

 for (VAR_12=0; VAR_12<VAR_15[0]; VAR_12++)
 for (VAR_11=0; VAR_11<VAR_7; VAR_11++)
 {
  register struct gr_info_s *VAR_16 = &(VAR_6->ch[VAR_11].gr[VAR_12]);

  VAR_16->part2_3_length = FUNC_5(VAR_5, 12);
  VAR_16->big_values = FUNC_5(VAR_5, 9);
  if(VAR_16->big_values > 288)
  {
   if(VAR_0) FUNC_2("big_values too large!");
   VAR_16->big_values = 288;
  }
  VAR_16->pow2gain = VAR_5->gainpow2+256 - FUNC_6(VAR_5, 8) + VAR_13;
  if(VAR_8) VAR_16->pow2gain += 2;
  VAR_16->scalefac_compress = FUNC_5(VAR_5, VAR_15[4]);
  if(VAR_16->part2_3_length == 0)
  {
   if(VAR_16->scalefac_compress > 0)
    FUNC_1( "scalefac_compress _should_ be zero instead of %i"
    , VAR_16->scalefac_compress );
   VAR_16->scalefac_compress = 0;
  }

  if(FUNC_4(VAR_5))
  {
   int VAR_17;
   VAR_16->block_type = FUNC_6(VAR_5, 2);
   VAR_16->mixed_block_flag = FUNC_4(VAR_5);
   VAR_16->table_select[0] = FUNC_6(VAR_5, 5);
   VAR_16->table_select[1] = FUNC_6(VAR_5, 5);




   VAR_16->table_select[2] = 0;
   for(VAR_17=0;VAR_17<3;VAR_17++)
   VAR_16->full_gain[VAR_17] = VAR_16->pow2gain + (FUNC_6(VAR_5, 3)<<3);

   if(VAR_16->block_type == 0)
   {
    if(VAR_0) FUNC_2("Blocktype == 0 and window-switching == 1 not allowed.");
    return 1;
   }


   if( (!VAR_5->lsf || (VAR_16->block_type == 2)) && !VAR_5->mpeg25)
   {
    VAR_16->region1start = 36>>1;
    VAR_16->region2start = 576>>1;
   }
   else
   {
    if(VAR_5->mpeg25)
    {
     int VAR_18,VAR_19;
     if((VAR_16->block_type == 2) && (!VAR_16->mixed_block_flag) ) VAR_18 = 5;
     else VAR_18 = 7;


     VAR_19 = 20 - VAR_18;
     VAR_16->region1start = VAR_3[VAR_9].longIdx[VAR_18+1] >> 1 ;
     VAR_16->region2start = VAR_3[VAR_9].longIdx[VAR_18+1+VAR_19+1] >> 1;
    }
    else
    {
     VAR_16->region1start = 54>>1;
     VAR_16->region2start = 576>>1;
    }
   }
  }
  else
  {
   int VAR_20,VAR_21,VAR_22;
   for (VAR_20=0; VAR_20<3; VAR_20++)
   VAR_16->table_select[VAR_20] = FUNC_6(VAR_5, 5);

   VAR_21 = FUNC_6(VAR_5, 4);
   VAR_22 = FUNC_6(VAR_5, 3);
   VAR_16->region1start = VAR_3[VAR_9].longIdx[VAR_21+1] >> 1 ;


   if(VAR_21+1+VAR_22+1 > 22) VAR_16->region2start = 576>>1;
   else VAR_16->region2start = VAR_3[VAR_9].longIdx[VAR_21+1+VAR_22+1] >> 1;

   VAR_16->block_type = 0;
   VAR_16->mixed_block_flag = 0;
  }
  if(!VAR_5->lsf) VAR_16->preflag = FUNC_4(VAR_5);

  VAR_16->scalefac_scale = FUNC_4(VAR_5);
  VAR_16->count1table_select = FUNC_4(VAR_5);
 }
 return 0;
}
