
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {TYPE_2__* ops; } ;
struct TYPE_6__ {int * s6_addr32; } ;
struct sockaddr_in6 {int sin6_scope_id; scalar_t__ sin6_flowinfo; void* sin6_port; TYPE_3__ sin6_addr; void* sin6_family; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {void* sin_port; TYPE_1__ sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
struct rds_tcp_connection {int t_conn_path_lock; } ;
struct rds_connection {int c_npaths; TYPE_3__ c_faddr; int c_dev_if; TYPE_3__ c_laddr; } ;
struct rds_conn_path {scalar_t__ cp_index; struct rds_tcp_connection* cp_transport_data; struct rds_connection* cp_conn; } ;
typedef int sin6 ;
typedef int sin ;
struct TYPE_5__ {int (* bind ) (struct socket*,struct sockaddr*,int) ;int (* connect ) (struct socket*,struct sockaddr*,int,int ) ;} ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rds_connection*) ;
 scalar_t__ FUNC_5 (struct rds_conn_path*) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (struct socket*,struct rds_tcp_connection*) ;
 int FUNC_8 (struct socket*,struct rds_conn_path*) ;
 int FUNC_9 (struct socket*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,int ,int ,int ,struct socket**) ;
 int FUNC_12 (struct socket*) ;
 int FUNC_13 (struct socket*,struct sockaddr*,int) ;
 int FUNC_14 (struct socket*,struct sockaddr*,int,int ) ;

int FUNC_15(struct rds_conn_path *VAR_10)
{
 struct socket *VAR_11 = ((void*)0);
 struct sockaddr_in6 VAR_12;
 struct sockaddr_in VAR_13;
 struct sockaddr *VAR_14;
 int VAR_15;
 bool VAR_16;
 int VAR_17;
 struct rds_connection *VAR_18 = VAR_10->cp_conn;
 struct rds_tcp_connection *VAR_19 = VAR_10->cp_transport_data;




 if (VAR_10->cp_index > 0 && VAR_10->cp_conn->c_npaths < 2)
  return -VAR_2;

 FUNC_2(&VAR_19->t_conn_path_lock);

 if (FUNC_5(VAR_10)) {
  FUNC_3(&VAR_19->t_conn_path_lock);
  return 0;
 }
 if (FUNC_1(&VAR_18->c_laddr)) {
  VAR_17 = FUNC_11(FUNC_4(VAR_18), VAR_6,
           VAR_9, VAR_4, &VAR_11);
  VAR_16 = 0;
 } else {
  VAR_17 = FUNC_11(FUNC_4(VAR_18), VAR_7,
           VAR_9, VAR_4, &VAR_11);
  VAR_16 = 1;
 }

 if (VAR_17 < 0)
  goto out;

 FUNC_9(VAR_11);

 if (VAR_16) {
  VAR_12 = VAR_1;
  VAR_12 = VAR_18->c_laddr;
  VAR_12 = 0;
  VAR_12 = 0;
  VAR_12 = VAR_18->c_dev_if;
  VAR_14 = (struct sockaddr *)&VAR_12;
  VAR_15 = sizeof(VAR_12);
 } else {
  VAR_13.sin_family = VAR_0;
  VAR_13.sin_addr.s_addr = VAR_18->c_laddr.s6_addr32[3];
  VAR_13.sin_port = 0;
  VAR_14 = (struct sockaddr *)&VAR_13;
  VAR_15 = sizeof(VAR_13);
 }

 VAR_17 = VAR_11->ops->bind(VAR_11, VAR_14, VAR_15);
 if (VAR_17) {
  FUNC_10("bind failed with %d at address %pI6c\n",
    VAR_17, &VAR_18->c_laddr);
  goto out;
 }

 if (VAR_16) {
  VAR_12 = VAR_1;
  VAR_12 = VAR_18->c_faddr;
  VAR_12 = FUNC_0(VAR_8);
  VAR_12 = 0;
  VAR_12 = VAR_18->c_dev_if;
  VAR_14 = (struct sockaddr *)&VAR_12;
  VAR_15 = sizeof(VAR_12);
 } else {
  VAR_13.sin_family = VAR_0;
  VAR_13.sin_addr.s_addr = VAR_18->c_faddr.s6_addr32[3];
  VAR_13.sin_port = FUNC_0(VAR_8);
  VAR_14 = (struct sockaddr *)&VAR_13;
  VAR_15 = sizeof(VAR_13);
 }





 FUNC_8(VAR_11, VAR_10);
 VAR_17 = VAR_11->ops->connect(VAR_11, VAR_14, VAR_15, VAR_5);

 FUNC_10("connect to address %pI6c returned %d\n", &VAR_18->c_faddr, VAR_17);
 if (VAR_17 == -VAR_3)
  VAR_17 = 0;
 if (VAR_17 == 0) {
  FUNC_6(VAR_11);
  VAR_11 = ((void*)0);
 } else {
  FUNC_7(VAR_11, VAR_10->cp_transport_data);
 }

out:
 FUNC_3(&VAR_19->t_conn_path_lock);
 if (VAR_11)
  FUNC_12(VAR_11);
 return VAR_17;
}
