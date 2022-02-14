
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {int len; void* type; void* version; } ;
struct batadv_tvlv_container {int list; int refcount; TYPE_1__ tvlv_hdr; } ;
struct TYPE_4__ {int container_list_lock; int container_list; } ;
struct batadv_priv {TYPE_2__ tvlv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct batadv_tvlv_container* FUNC_1 (struct batadv_priv*,void*,void*) ;
 int FUNC_2 (struct batadv_tvlv_container*) ;
 int FUNC_3 (struct batadv_priv*,struct batadv_tvlv_container*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct batadv_tvlv_container* FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (struct batadv_tvlv_container*,void*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct batadv_priv *VAR_1,
        u8 VAR_2, u8 VAR_3,
        void *VAR_4, u16 VAR_5)
{
 struct batadv_tvlv_container *VAR_6, *VAR_7;

 if (!VAR_4)
  VAR_5 = 0;

 VAR_7 = FUNC_8(sizeof(*VAR_7) + VAR_5, VAR_0);
 if (!VAR_7)
  return;

 VAR_7->tvlv_hdr.version = VAR_3;
 VAR_7->tvlv_hdr.type = VAR_2;
 VAR_7->tvlv_hdr.len = FUNC_5(VAR_5);

 FUNC_9(VAR_7 + 1, VAR_4, FUNC_10(VAR_7->tvlv_hdr.len));
 FUNC_0(&VAR_7->list);
 FUNC_7(&VAR_7->refcount);

 FUNC_11(&VAR_1->tvlv.container_list_lock);
 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_1, VAR_6);

 FUNC_6(&VAR_7->refcount);
 FUNC_4(&VAR_7->list, &VAR_1->tvlv.container_list);
 FUNC_12(&VAR_1->tvlv.container_list_lock);


 FUNC_2(VAR_7);
}
