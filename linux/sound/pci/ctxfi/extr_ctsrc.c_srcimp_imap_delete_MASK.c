
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcimp_mgr {int init_imap_added; int imap_lock; int init_imap; int imappers; } ;
struct imapper {int dummy; } ;


 int FUNC_0 (int *,int ,int ,struct srcimp_mgr*) ;
 int FUNC_1 (int *,struct imapper*,int ,struct srcimp_mgr*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct srcimp_mgr *VAR_1, struct imapper *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_3(&VAR_1->imap_lock, VAR_3);
 VAR_4 = FUNC_1(&VAR_1->imappers, VAR_2, VAR_0, VAR_1);
 if (FUNC_2(&VAR_1->imappers)) {
  FUNC_0(&VAR_1->imappers, VAR_1->init_imap,
     VAR_0, VAR_1);
  VAR_1->init_imap_added = 1;
 }
 FUNC_4(&VAR_1->imap_lock, VAR_3);

 return VAR_4;
}
