
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
typedef scalar_t__ uint16 ;
struct TYPE_12__ {int size; int * data; int * p; int * end; } ;
struct TYPE_11__ {scalar_t__ mcs_id; int (* process ) (TYPE_3__*,TYPE_2__*) ;TYPE_2__ in; } ;
typedef TYPE_1__ VCHANNEL ;
struct TYPE_13__ {unsigned int num_channels; TYPE_1__* channels; } ;
typedef TYPE_2__* STREAM ;
typedef TYPE_3__ RDPCLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,int) ;

void
FUNC_6(RDPCLIENT * VAR_2, STREAM VAR_3, uint16 VAR_4)
{
 uint32 VAR_5, VAR_6;
 uint32 VAR_7;
 VCHANNEL *VAR_8 = ((void*)0);
 unsigned int VAR_9;
 STREAM VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_2->num_channels; VAR_9++)
 {
  VAR_8 = &VAR_2->channels[VAR_9];
  if (VAR_8->mcs_id == VAR_4)
   break;
 }

 if (VAR_9 >= VAR_2->num_channels)
  return;

 FUNC_1(VAR_3, VAR_5);
 FUNC_1(VAR_3, VAR_6);
 if ((VAR_6 & VAR_0) && (VAR_6 & VAR_1))
 {

  VAR_8->process(VAR_2, VAR_3);
 }
 else
 {

  VAR_10 = &VAR_8->in;
  if (VAR_6 & VAR_0)
  {
   if (VAR_5 > VAR_10->size)
   {
    VAR_10->data = (uint8 *) FUNC_5(VAR_10->data, VAR_5);
    VAR_10->size = VAR_5;
   }
   VAR_10->p = VAR_10->data;
  }

  VAR_7 = FUNC_0(VAR_3->end - VAR_3->p, VAR_10->data + VAR_10->size - VAR_10->p);
  FUNC_2(VAR_10->p, VAR_3->p, VAR_7);
  VAR_10->p += VAR_7;

  if (VAR_6 & VAR_1)
  {
   VAR_10->end = VAR_10->p;
   VAR_10->p = VAR_10->data;
   VAR_8->process(VAR_2, VAR_10);
  }
 }
}
