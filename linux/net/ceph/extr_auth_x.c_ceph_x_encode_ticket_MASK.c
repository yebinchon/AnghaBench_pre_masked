
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ceph_x_ticket_handler {TYPE_1__* ticket_blob; int secret_id; } ;
struct TYPE_4__ {char* iov_base; int iov_len; } ;
struct TYPE_3__ {TYPE_2__ vec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,void*,int,int ) ;
 int FUNC_1 (void**,void*,int ,int ) ;
 int FUNC_2 (void**,int ) ;
 int FUNC_3 (void**,int) ;
 int FUNC_4 (void**,void*,char const*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ceph_x_ticket_handler *VAR_2,
    void **VAR_3, void *VAR_4)
{
 FUNC_0(VAR_3, VAR_4, 1 + sizeof(u64), VAR_1);
 FUNC_3(VAR_3, 1);
 FUNC_2(VAR_3, VAR_2->secret_id);
 if (VAR_2->ticket_blob) {
  const char *VAR_5 = VAR_2->ticket_blob->vec.iov_base;
  u32 VAR_6 = VAR_2->ticket_blob->vec.iov_len;

  FUNC_1(VAR_3, VAR_4, VAR_6, VAR_1);
  FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_1);
 } else {
  FUNC_1(VAR_3, VAR_4, 0, VAR_1);
 }

 return 0;
bad:
 return -VAR_0;
}
