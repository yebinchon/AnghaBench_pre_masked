
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mr_table {int id; int net; int mfc_hash; } ;
struct TYPE_6__ {int list; int mnode; } ;
struct mfc6_cache {TYPE_3__ _c; } ;
struct TYPE_4__ {int sin6_addr; } ;
struct TYPE_5__ {int sin6_addr; } ;
struct mf6cctl {TYPE_1__ mf6cc_mcastgrp; TYPE_2__ mf6cc_origin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct mfc6_cache*,int ) ;
 struct mfc6_cache* FUNC_1 (struct mr_table*,int *,int *,int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mr_table*,struct mfc6_cache*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_9(struct mr_table *VAR_4, struct mf6cctl *VAR_5,
       int VAR_6)
{
 struct mfc6_cache *VAR_7;


 FUNC_5();
 VAR_7 = FUNC_1(VAR_4, &VAR_5->mf6cc_origin.sin6_addr,
        &VAR_5->mf6cc_mcastgrp.sin6_addr, VAR_6);
 FUNC_6();
 if (!VAR_7)
  return -VAR_0;
 FUNC_8(&VAR_4->mfc_hash, &VAR_7->_c.mnode, VAR_3);
 FUNC_2(&VAR_7->_c.list);

 FUNC_0(FUNC_7(&VAR_4->net),
           VAR_1, VAR_7, VAR_4->id);
 FUNC_3(VAR_4, VAR_7, VAR_2);
 FUNC_4(&VAR_7->_c);
 return 0;
}
