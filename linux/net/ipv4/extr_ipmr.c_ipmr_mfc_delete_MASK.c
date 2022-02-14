
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net {int dummy; } ;
struct mr_table {int id; int mfc_hash; int net; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct mfcctl {TYPE_2__ mfcc_mcastgrp; TYPE_1__ mfcc_origin; } ;
struct TYPE_6__ {int list; int mnode; } ;
struct mfc_cache {TYPE_3__ _c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,int ,struct mfc_cache*,int ) ;
 struct mfc_cache* FUNC_1 (struct mr_table*,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct mr_table*,struct mfc_cache*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct net* FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_9(struct mr_table *VAR_4, struct mfcctl *VAR_5, int VAR_6)
{
 struct net *VAR_7 = FUNC_7(&VAR_4->net);
 struct mfc_cache *VAR_8;


 FUNC_5();
 VAR_8 = FUNC_1(VAR_4, VAR_5->mfcc_origin.s_addr,
       VAR_5->mfcc_mcastgrp.s_addr, VAR_6);
 FUNC_6();
 if (!VAR_8)
  return -VAR_0;
 FUNC_8(&VAR_4->mfc_hash, &VAR_8->_c.mnode, VAR_3);
 FUNC_2(&VAR_8->_c.list);
 FUNC_0(VAR_7, VAR_1, VAR_8, VAR_4->id);
 FUNC_4(VAR_4, VAR_8, VAR_2);
 FUNC_3(&VAR_8->_c);

 return 0;
}
