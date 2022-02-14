
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
typedef scalar_t__ uint16 ;
struct TYPE_9__ {int size; int * data; int * p; int * end; } ;
struct TYPE_8__ {scalar_t__ mcs_id; int (* process ) (TYPE_2__*) ;TYPE_2__ in; } ;
typedef TYPE_1__ VCHANNEL ;
typedef TYPE_2__* STREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 TYPE_1__* VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,int) ;

void
FUNC_6(STREAM VAR_4, uint16 VAR_5)
{
 uint32 VAR_6, VAR_7;
 uint32 VAR_8;
 VCHANNEL *VAR_9 = ((void*)0);
 unsigned int VAR_10;
 STREAM VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
 {
  VAR_9 = &VAR_2[VAR_10];
  if (VAR_9->mcs_id == VAR_5)
   break;
 }

 if (VAR_10 >= VAR_3)
  return;

 FUNC_1(VAR_4, VAR_6);
 FUNC_1(VAR_4, VAR_7);
 if ((VAR_7 & VAR_0) && (VAR_7 & VAR_1))
 {

  VAR_9->process(VAR_4);
 }
 else
 {

  VAR_11 = &VAR_9->in;
  if (VAR_7 & VAR_0)
  {
   if (VAR_6 > VAR_11->size)
   {
    VAR_11->data = (uint8 *) FUNC_5(VAR_11->data, VAR_6);
    VAR_11->size = VAR_6;
   }
   VAR_11->p = VAR_11->data;
  }

  VAR_8 = FUNC_0(VAR_4->end - VAR_4->p, VAR_11->data + VAR_11->size - VAR_11->p);
  FUNC_2(VAR_11->p, VAR_4->p, VAR_8);
  VAR_11->p += VAR_8;

  if (VAR_7 & VAR_1)
  {
   VAR_11->end = VAR_11->p;
   VAR_11->p = VAR_11->data;
   VAR_9->process(VAR_11);
  }
 }
}
