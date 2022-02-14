
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_msgpool {int type; int front_len; int max_data_items; char const* name; int pool; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int,int ,int ,struct ceph_msgpool*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct ceph_msgpool *VAR_3, int VAR_4,
        int VAR_5, int VAR_6, int VAR_7,
        const char *VAR_8)
{
 FUNC_0("msgpool %s init\n", VAR_8);
 VAR_3->type = VAR_4;
 VAR_3->front_len = VAR_5;
 VAR_3->max_data_items = VAR_6;
 VAR_3->pool = FUNC_1(VAR_7, VAR_1, VAR_2, VAR_3);
 if (!VAR_3->pool)
  return -VAR_0;
 VAR_3->name = VAR_8;
 return 0;
}
