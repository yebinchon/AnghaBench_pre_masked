
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcimp_mgr {int init_imap_added; int mgr; int card; int imap_delete; int imap_add; int put_srcimp; int get_srcimp; struct imapper* init_imap; int imappers; int imap_lock; int mgr_lock; } ;
struct imapper {int list; scalar_t__ user; scalar_t__ next; scalar_t__ addr; scalar_t__ slot; } ;
struct hw {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct srcimp_mgr*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int ,struct hw*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_7(struct hw *VAR_8, struct srcimp_mgr **VAR_9)
{
 int VAR_10;
 struct srcimp_mgr *VAR_11;
 struct imapper *VAR_12;

 *VAR_9 = ((void*)0);
 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_10 = FUNC_4(&VAR_11->mgr, VAR_2, VAR_3, VAR_8);
 if (VAR_10)
  goto error1;

 FUNC_6(&VAR_11->mgr_lock);
 FUNC_6(&VAR_11->imap_lock);
 FUNC_0(&VAR_11->imappers);
 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_1);
 if (!VAR_12) {
  VAR_10 = -VAR_0;
  goto error2;
 }
 VAR_12->slot = VAR_12->addr = VAR_12->next = VAR_12->user = 0;
 FUNC_3(&VAR_12->list, &VAR_11->imappers);
 VAR_11->init_imap = VAR_12;
 VAR_11->init_imap_added = 1;

 VAR_11->get_srcimp = VAR_4;
 VAR_11->put_srcimp = VAR_5;
 VAR_11->imap_add = VAR_6;
 VAR_11->imap_delete = VAR_7;
 VAR_11->card = VAR_8->card;

 *VAR_9 = VAR_11;

 return 0;

error2:
 FUNC_5(&VAR_11->mgr);
error1:
 FUNC_1(VAR_11);
 return VAR_10;
}
