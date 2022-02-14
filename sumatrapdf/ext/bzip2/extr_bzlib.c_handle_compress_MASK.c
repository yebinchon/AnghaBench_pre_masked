
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* state; } ;
typedef TYPE_2__ bz_stream ;
struct TYPE_13__ {scalar_t__ state; scalar_t__ state_out_pos; scalar_t__ numZ; scalar_t__ mode; scalar_t__ avail_in_expect; scalar_t__ nblock; scalar_t__ nblockMAX; TYPE_1__* strm; } ;
struct TYPE_11__ {scalar_t__ avail_in; } ;
typedef TYPE_3__ EState ;
typedef int Bool ;


 int FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static
Bool FUNC_6 ( bz_stream* VAR_7 )
{
   Bool VAR_8 = VAR_5;
   Bool VAR_9 = VAR_5;
   EState* VAR_10 = VAR_7->state;

   while (VAR_6) {

      if (VAR_10->state == VAR_4) {
         VAR_9 |= FUNC_2 ( VAR_10 );
         if (VAR_10->state_out_pos < VAR_10->numZ) break;
         if (VAR_10->mode == VAR_0 &&
             VAR_10->avail_in_expect == 0 &&
             FUNC_4(VAR_10)) break;
         FUNC_5 ( VAR_10 );
         VAR_10->state = VAR_3;
         if (VAR_10->mode == VAR_1 &&
             VAR_10->avail_in_expect == 0 &&
             FUNC_4(VAR_10)) break;
      }

      if (VAR_10->state == VAR_3) {
         VAR_8 |= FUNC_1 ( VAR_10 );
         if (VAR_10->mode != VAR_2 && VAR_10->avail_in_expect == 0) {
            FUNC_3 ( VAR_10 );
            FUNC_0 ( VAR_10, (Bool)(VAR_10->mode == VAR_0) );
            VAR_10->state = VAR_4;
         }
         else
         if (VAR_10->nblock >= VAR_10->nblockMAX) {
            FUNC_0 ( VAR_10, VAR_5 );
            VAR_10->state = VAR_4;
         }
         else
         if (VAR_10->strm->avail_in == 0) {
            break;
         }
      }

   }

   return VAR_8 || VAR_9;
}
