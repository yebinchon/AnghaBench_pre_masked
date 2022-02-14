
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct block_context {int flags; int (* func ) (TYPE_1__*,scalar_t__*,scalar_t__,scalar_t__,int,int ) ;int priv_data; TYPE_1__* fs; scalar_t__ errcode; scalar_t__ ind_buf; scalar_t__ bcount; } ;
typedef scalar_t__ blk_t ;
typedef scalar_t__ blk64_t ;
struct TYPE_9__ {scalar_t__ s_first_data_block; } ;
struct TYPE_8__ {int blocksize; TYPE_7__* super; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct block_context*,int) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__*,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__*,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__*,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_7 (TYPE_1__*,scalar_t__*,scalar_t__,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_8(blk_t *VAR_8, blk_t VAR_9,
        int VAR_10, struct block_context *VAR_11)
{
 int VAR_12 = 0, VAR_13 = 0;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 blk_t *VAR_18;
 blk64_t VAR_19;

 VAR_16 = VAR_11->fs->blocksize >> 2;
 if (!(VAR_11->flags & VAR_6) &&
     !(VAR_11->flags & VAR_5)) {
  VAR_19 = *VAR_8;
  VAR_12 = (*VAR_11->func)(VAR_11->fs, &VAR_19,
       VAR_2, VAR_9,
       VAR_10, VAR_11->priv_data);
  *VAR_8 = VAR_19;
 }
 FUNC_0(VAR_11, VAR_12);
 if (!*VAR_8 || (VAR_12 & VAR_0)) {
  VAR_11->bcount += VAR_16;
  return VAR_12;
 }
 if (*VAR_8 >= FUNC_1(VAR_11->fs->super) ||
     *VAR_8 < VAR_11->fs->super->s_first_data_block) {
  VAR_11->errcode = VAR_7;
  VAR_12 |= VAR_3;
  return VAR_12;
 }
 VAR_11->errcode = FUNC_2(VAR_11->fs, *VAR_8,
          VAR_11->ind_buf);
 if (VAR_11->errcode) {
  VAR_12 |= VAR_3;
  return VAR_12;
 }

 VAR_18 = (blk_t *) VAR_11->ind_buf;
 VAR_17 = 0;
 if (VAR_11->flags & VAR_4) {
  for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++, VAR_11->bcount++, VAR_18++) {
   VAR_19 = *VAR_18;
   VAR_15 = (*VAR_11->func)(VAR_11->fs, &VAR_19, VAR_11->bcount,
          *VAR_8, VAR_17,
          VAR_11->priv_data);
   *VAR_18 = VAR_19;
   VAR_13 |= VAR_15;
   if (VAR_15 & VAR_0) {
    VAR_12 |= VAR_0;
    break;
   }
   VAR_17 += sizeof(blk_t);
  }
 } else {
  for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++, VAR_11->bcount++, VAR_18++) {
   if (*VAR_18 == 0)
    goto skip_sparse;
   VAR_19 = *VAR_18;
   VAR_15 = (*VAR_11->func)(VAR_11->fs, &VAR_19, VAR_11->bcount,
          *VAR_8, VAR_17,
          VAR_11->priv_data);
   *VAR_18 = VAR_19;
   VAR_13 |= VAR_15;
   if (VAR_15 & VAR_0) {
    VAR_12 |= VAR_0;
    break;
   }
  skip_sparse:
   VAR_17 += sizeof(blk_t);
  }
 }
 FUNC_0(VAR_11, VAR_13);
 if (VAR_13 & VAR_1) {
  VAR_11->errcode = FUNC_3(VAR_11->fs, *VAR_8,
            VAR_11->ind_buf);
  if (VAR_11->errcode)
   VAR_12 |= VAR_3 | VAR_0;
 }
 if ((VAR_11->flags & VAR_6) &&
     !(VAR_11->flags & VAR_5) &&
     !(VAR_12 & VAR_0)) {
  VAR_19 = *VAR_8;
  VAR_12 |= (*VAR_11->func)(VAR_11->fs, &VAR_19,
        VAR_2, VAR_9,
        VAR_10, VAR_11->priv_data);
  *VAR_8 = VAR_19;
 }
 FUNC_0(VAR_11, VAR_12);
 return VAR_12;
}
