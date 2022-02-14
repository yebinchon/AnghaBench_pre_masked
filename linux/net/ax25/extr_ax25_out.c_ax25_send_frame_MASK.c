
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int ax25_digi ;
struct TYPE_19__ {int slave; } ;
struct TYPE_20__ {int* values; TYPE_2__ dama; } ;
typedef TYPE_3__ ax25_dev ;
struct TYPE_21__ {int state; TYPE_1__* ax25_dev; int * digipeat; void* dest_addr; void* source_addr; } ;
typedef TYPE_4__ ax25_cb ;
typedef void* ax25_address ;
struct TYPE_18__ {int* values; } ;





 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 () ;
 TYPE_3__* FUNC_4 (struct net_device*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 TYPE_4__* FUNC_7 (void**,void**,int *,struct net_device*) ;
 int FUNC_8 (TYPE_4__*,int,struct sk_buff*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int * FUNC_11 (int *,int,int ) ;

ax25_cb *FUNC_12(struct sk_buff *VAR_4, int VAR_5, ax25_address *VAR_6, ax25_address *VAR_7, ax25_digi *VAR_8, struct net_device *VAR_9)
{
 ax25_dev *VAR_10;
 ax25_cb *VAR_11;





 if (VAR_5 == 0) {
  if ((VAR_10 = FUNC_4(VAR_9)) == ((void*)0))
   return ((void*)0);

  VAR_5 = VAR_10->values[VAR_1];
 }




 if ((VAR_11 = FUNC_7(VAR_6, VAR_7, VAR_8, VAR_9)) != ((void*)0)) {
  FUNC_8(VAR_11, VAR_5, VAR_4);
  return VAR_11;
 }

 if ((VAR_10 = FUNC_4(VAR_9)) == ((void*)0))
  return ((void*)0);

 if ((VAR_11 = FUNC_3()) == ((void*)0))
  return ((void*)0);

 FUNC_6(VAR_11, VAR_10);

 VAR_11->source_addr = *VAR_6;
 VAR_11->dest_addr = *VAR_7;

 if (VAR_8 != ((void*)0)) {
  VAR_11->digipeat = FUNC_11(VAR_8, sizeof(*VAR_8), VAR_3);
  if (VAR_11->digipeat == ((void*)0)) {
   FUNC_2(VAR_11);
   return ((void*)0);
  }
 }

 switch (VAR_11->ax25_dev->values[VAR_2]) {
 case 128:
 case 129:
  FUNC_10(VAR_11);
  break;
 }





 FUNC_1(VAR_11);

 FUNC_0(VAR_11);

 VAR_11->state = VAR_0;

 FUNC_9(VAR_11);

 FUNC_8(VAR_11, VAR_5, VAR_4);

 return VAR_11;
}
