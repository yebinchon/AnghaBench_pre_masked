
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {void* desc; void* object_id; } ;
struct mixart_msg {scalar_t__ size; scalar_t__ data; TYPE_1__ uid; void* message_id; } ;
struct mixart_mgr {int msg_lock; TYPE_2__* pci; } ;
typedef int __be32 ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mixart_mgr*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_8(struct mixart_mgr *VAR_6, struct mixart_msg *VAR_7,
     u32 VAR_8 )
{
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11;

 unsigned int VAR_12;


 FUNC_4(&VAR_6->msg_lock);
 VAR_11 = 0;


 VAR_10 = FUNC_6(FUNC_0(VAR_6, VAR_8));
 VAR_7->message_id = FUNC_6(FUNC_0(VAR_6, VAR_8 + 4));
 VAR_7->uid.object_id = FUNC_6(FUNC_0(VAR_6, VAR_8 + 8));
 VAR_7->uid.desc = FUNC_6(FUNC_0(VAR_6, VAR_8 + 12));

 if( (VAR_10 < VAR_2) || (VAR_7->size < (VAR_10 - VAR_2))) {
  VAR_11 = -VAR_0;
  FUNC_2(&VAR_6->pci->dev,
   "problem with response size = %d\n", VAR_10);
  goto _clean_exit;
 }
 VAR_10 -= VAR_2;

 FUNC_3(VAR_7->data, FUNC_0(VAR_6, VAR_8 + VAR_3 ), VAR_10);
 VAR_7->size = VAR_10;



 VAR_10 /= 4;
 for(VAR_12=0; VAR_12 < VAR_10; VAR_12++) {
  ((u32*)VAR_7->data)[VAR_12] = FUNC_1(((__be32*)VAR_7->data)[VAR_12]);
 }





 VAR_9 = FUNC_6(FUNC_0(VAR_6, VAR_4));

 if( (VAR_9 < VAR_5) || ( VAR_9 >= (VAR_5+VAR_1))) {
  VAR_11 = -VAR_0;
  goto _clean_exit;
 }


 FUNC_7(VAR_8, FUNC_0(VAR_6, VAR_9));


 VAR_9 += 4;
 if( VAR_9 >= (VAR_5+VAR_1) )
  VAR_9 = VAR_5;

 FUNC_7(VAR_9, FUNC_0(VAR_6, VAR_4));

 _clean_exit:
 FUNC_5(&VAR_6->msg_lock);

 return VAR_11;
}
