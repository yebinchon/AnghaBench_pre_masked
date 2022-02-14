
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t nrofbuffers; TYPE_1__** buffers; } ;
struct TYPE_6__ {scalar_t__ state; size_t primary_mixpos; int lock; int hwbuf; scalar_t__ buflen; } ;
typedef size_t INT ;
typedef TYPE_1__ IDirectSoundBufferImpl ;
typedef TYPE_2__ DirectSoundDevice ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 size_t FUNC_1 (TYPE_1__*,size_t,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static DWORD FUNC_5(const DirectSoundDevice *VAR_6, DWORD VAR_7, DWORD VAR_8, BOOL VAR_9, BOOL *VAR_10)
{
 INT VAR_11, VAR_12;
 DWORD VAR_13 = 0;
 IDirectSoundBufferImpl *VAR_14;


 *VAR_10 = VAR_5;

 FUNC_4("(%d,%d,%d)\n", VAR_7, VAR_8, VAR_9);
 for (VAR_11 = 0; VAR_11 < VAR_6->nrofbuffers; VAR_11++) {
  VAR_14 = VAR_6->buffers[VAR_11];

  FUNC_4("MixToPrimary for %p, state=%d\n", VAR_14, VAR_14->state);

  if (VAR_14->buflen && VAR_14->state && !VAR_14->hwbuf) {
   FUNC_4("Checking %p, mixlen=%d\n", VAR_14, VAR_8);
   FUNC_2(&VAR_14->lock, VAR_5);

   if (VAR_14->state == VAR_4) {
    VAR_14->state = VAR_3;
    FUNC_0(VAR_14, 0, 0);
   } else if (VAR_14->state != VAR_3) {


    if ((VAR_14->state == VAR_2) || VAR_9) {
     VAR_14->primary_mixpos = VAR_7;
    }


    if (VAR_14->state == VAR_2)
     VAR_14->state = VAR_1;


    VAR_12 = FUNC_1(VAR_14, VAR_7, VAR_8);

    if (!VAR_13) VAR_13 = VAR_12;



    else if (VAR_12) VAR_13 = (VAR_12 < VAR_13) ? VAR_12 : VAR_13;

    *VAR_10 = VAR_0;
   }
   FUNC_3(&VAR_14->lock);
  }
 }

 FUNC_4("Mixed at least %d from all buffers\n", VAR_13);
 return VAR_13;
}
