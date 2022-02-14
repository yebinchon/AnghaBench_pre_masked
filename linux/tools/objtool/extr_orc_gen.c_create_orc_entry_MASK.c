
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct section {int rela_hash; int rela_list; scalar_t__ sym; TYPE_1__* data; int name; } ;
struct rela {unsigned long addend; unsigned int offset; int hash; int list; int type; scalar_t__ sym; } ;
struct orc_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ d_buf; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int *,unsigned int) ;
 int FUNC_2 (int *,int *) ;
 struct rela* FUNC_3 (int) ;
 int FUNC_4 (struct orc_entry*,struct orc_entry*,int) ;
 int FUNC_5 (struct rela*,int ,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct section *VAR_1, struct section *VAR_2,
    unsigned int VAR_3, struct section *VAR_4,
    unsigned long VAR_5, struct orc_entry *VAR_6)
{
 struct orc_entry *VAR_7;
 struct rela *VAR_8;

 if (!VAR_4->sym) {
  FUNC_0("missing symbol for section %s", VAR_4->name);
  return -1;
 }


 VAR_7 = (struct orc_entry *)VAR_1->data->d_buf + VAR_3;
 FUNC_4(VAR_7, VAR_6, sizeof(*VAR_7));


 VAR_8 = FUNC_3(sizeof(*VAR_8));
 if (!VAR_8) {
  FUNC_6("malloc");
  return -1;
 }
 FUNC_5(VAR_8, 0, sizeof(*VAR_8));

 VAR_8->sym = VAR_4->sym;
 VAR_8->addend = VAR_5;
 VAR_8->type = VAR_0;
 VAR_8->offset = VAR_3 * sizeof(int);

 FUNC_2(&VAR_8->list, &VAR_2->rela_list);
 FUNC_1(VAR_2->rela_hash, &VAR_8->hash, VAR_8->offset);

 return 0;
}
