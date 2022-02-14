
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_sync_conn_options {int out_seq; int in_seq; } ;
typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline int FUNC_2(__u8 *VAR_2, unsigned int VAR_3,
        __u32 *VAR_4,
        struct ip_vs_sync_conn_options *VAR_5)
{
 struct ip_vs_sync_conn_options *VAR_6;

 VAR_6 = (struct ip_vs_sync_conn_options *)VAR_2;

 if (VAR_3 != sizeof(struct ip_vs_sync_conn_options)) {
  FUNC_0(2, "BACKUP, bogus conn options length\n");
  return -VAR_0;
 }
 if (*VAR_4 & VAR_1) {
  FUNC_0(2, "BACKUP, conn options found twice\n");
  return -VAR_0;
 }
 FUNC_1(&VAR_6->in_seq, &VAR_5->in_seq);
 FUNC_1(&VAR_6->out_seq, &VAR_5->out_seq);
 *VAR_4 |= VAR_1;
 return 0;
}
