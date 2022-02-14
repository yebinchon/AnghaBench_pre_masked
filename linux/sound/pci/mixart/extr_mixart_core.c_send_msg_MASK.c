
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ object_id; scalar_t__ desc; } ;
struct mixart_msg {int size; scalar_t__ message_id; scalar_t__ data; TYPE_2__ uid; } ;
struct mixart_mgr {scalar_t__ pending_event; TYPE_1__* pci; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mixart_mgr*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6( struct mixart_mgr *VAR_11,
       struct mixart_msg *VAR_12,
       int VAR_13,
       int VAR_14,
       u32 *VAR_15)
{
 u32 VAR_16, VAR_17;
 u32 VAR_18;
 int VAR_19;

 if (FUNC_3(VAR_12->size % 4))
  return -VAR_1;


 VAR_17 = FUNC_2(FUNC_0(VAR_11, VAR_7));
 VAR_16 = FUNC_2(FUNC_0(VAR_11, VAR_5));

 if (VAR_17 == VAR_16) {
  FUNC_1(&VAR_11->pci->dev, "error: no message frame available\n");
  return -VAR_0;
 }

 if( (VAR_17 < VAR_6) || (VAR_17 >= (VAR_6+VAR_2))) {
  return -VAR_1;
 }

 VAR_18 = FUNC_2(FUNC_0(VAR_11, VAR_17));
 FUNC_4(0, FUNC_0(VAR_11, VAR_17));


 VAR_17 += 4;
 if( VAR_17 >= (VAR_6+VAR_2) )
  VAR_17 = VAR_6;

 FUNC_5(VAR_17, FUNC_0(VAR_11, VAR_7));




 FUNC_5( VAR_12->size + VAR_3, FUNC_0(VAR_11, VAR_18) );
 FUNC_5( VAR_12->message_id , FUNC_0(VAR_11, VAR_18 + 4) );
 FUNC_5( VAR_12->uid.object_id, FUNC_0(VAR_11, VAR_18 + 8) );
 FUNC_5( VAR_12->uid.desc, FUNC_0(VAR_11, VAR_18 + 12) );
 FUNC_5( VAR_3, FUNC_0(VAR_11, VAR_18 + 16) );
 FUNC_5( VAR_3, FUNC_0(VAR_11, VAR_18 + 20) );
 FUNC_5( VAR_12->size, FUNC_0(VAR_11, VAR_18 + 24) );
 FUNC_5( VAR_3, FUNC_0(VAR_11, VAR_18 + 28) );
 FUNC_5( 0, FUNC_0(VAR_11, VAR_18 + 32) );
 FUNC_5( VAR_3 + VAR_13, FUNC_0(VAR_11, VAR_18 + 36) );


 for( VAR_19=0; VAR_19 < VAR_12->size; VAR_19+=4 ) {
  FUNC_5( *(u32*)(VAR_12->data + VAR_19), FUNC_0(VAR_11, VAR_4 + VAR_18 + VAR_19) );
 }

 if( VAR_14 ) {
  if( *VAR_15 ) {

   VAR_11->pending_event = *VAR_15;
  }
  else {

   VAR_11->pending_event = VAR_18;


   *VAR_15 = VAR_18;
  }
 }


 VAR_18 |= VAR_10;


 VAR_16 = FUNC_2(FUNC_0(VAR_11, VAR_8));

 if( (VAR_16 < VAR_9) || (VAR_16 >= (VAR_9+VAR_2))) {
  return -VAR_1;
 }

 FUNC_5(VAR_18, FUNC_0(VAR_11, VAR_16));


 VAR_16 += 4;
 if( VAR_16 >= (VAR_9+VAR_2) )
  VAR_16 = VAR_9;

 FUNC_5(VAR_16, FUNC_0(VAR_11, VAR_8));

 return 0;
}
