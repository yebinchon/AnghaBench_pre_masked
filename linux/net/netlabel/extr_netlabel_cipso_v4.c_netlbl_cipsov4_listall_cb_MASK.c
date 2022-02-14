
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netlbl_cipsov4_doiwalk_arg {int skb; int seq; TYPE_1__* nl_cb; } ;
struct cipso_v4_doi {int type; int doi; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int skb; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*) ;
 void* FUNC_3 (int ,int ,int ,int *,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct cipso_v4_doi *VAR_6, void *VAR_7)
{
 int VAR_8 = -VAR_0;
 struct netlbl_cipsov4_doiwalk_arg *VAR_9 = VAR_7;
 void *VAR_10;

 VAR_10 = FUNC_3(VAR_9->skb, FUNC_0(VAR_9->nl_cb->skb).portid,
      VAR_9->seq, &VAR_5,
      VAR_4, VAR_3);
 if (VAR_10 == ((void*)0))
  goto listall_cb_failure;

 VAR_8 = FUNC_4(VAR_9->skb, VAR_1, VAR_6->doi);
 if (VAR_8 != 0)
  goto listall_cb_failure;
 VAR_8 = FUNC_4(VAR_9->skb,
         VAR_2,
         VAR_6->type);
 if (VAR_8 != 0)
  goto listall_cb_failure;

 FUNC_2(VAR_9->skb, VAR_10);
 return 0;

listall_cb_failure:
 FUNC_1(VAR_9->skb, VAR_10);
 return VAR_8;
}
